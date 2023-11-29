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
  array[K] real ak;
  array[K] real bk;
  real<lower=0> s_a;
  real<lower=0> s_b;
  real<lower=0> s_Y;
}

transformed parameters {
  array[K] real a;
  array[K] real b;
  for (k in 1:K) {
    a[k] = a0 + ak[k];
    b[k] = b0 + bk[k];
  }
}

model {
  for (k in 1:K) {
    ak[k] ~ normal(0, s_a);
    bk[k] ~ normal(0, s_b);
  }

  for (n in 1:N)
    Y[n] ~ normal(a[KID[n]] + b[KID[n]]*X[n], s_Y);
}
