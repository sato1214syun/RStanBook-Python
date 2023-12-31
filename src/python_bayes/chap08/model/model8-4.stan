data {
  int N;
  int K;
  array[N] real X;
  array[N] real Y;
  array[N] int<lower=1, upper=K> KID;
}

parameters {
  real a0;
  real b0;
  array[K] real a;
  array[K] real b;
  real<lower=0> s_a;
  real<lower=0> s_b;
  real<lower=0> s_Y;
}

model {
  for (k in 1:K) {
    a[k] ~ normal(a0, s_a);
    b[k] ~ normal(b0, s_b);
  }

  for (n in 1:N)
    Y[n] ~ normal(a[KID[n]] + b[KID[n]]*X[n], s_Y);
}
