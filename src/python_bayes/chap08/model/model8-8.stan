data {
  int N;
  int C;
  int I;
  array [N] int<lower=0, upper=1> A;
  array [N] real<lower=0, upper=1> Score;
  array [I] int<lower=1, upper=N> PID;
  array [I] int<lower=1, upper=C> CID;
  array [I] real<lower=0, upper=1> W;
  array [I] int<lower=0, upper=1> Y;
}

parameters {
  array [4] real b;
  array [N] real b_P;
  array [C] real b_C;
  real<lower=0> s_P;
  real<lower=0> s_C;
}

transformed parameters {
  array [N] real x_P;
  array [C] real x_C;
  array [I] real x_J;
  array [I] real x;
  array [I] real q;
  for (n in 1:N)
    x_P[n] = b[2]*A[n] + b[3]*Score[n] + b_P[n];
  for (c in 1:C)
    x_C[c] = b_C[c];
  for (i in 1:I) {
    x_J[i] = b[4]*W[i];
    x[i] = b[1] + x_P[PID[i]] + x_C[CID[i]] + x_J[i];
    q[i] = inv_logit(x[i]);
  }
}

model {
  for (n in 1:N)
    b_P[n] ~ normal(0, s_P);
  for (c in 1:C)
    b_C[c] ~ normal(0, s_C);
  for (i in 1:I)
    Y[i] ~ bernoulli(q[i]);
}
