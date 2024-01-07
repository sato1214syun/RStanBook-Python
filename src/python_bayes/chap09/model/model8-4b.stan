data {
  int N;
  int K;
  vector[N] X;
  vector[N] Y;
  array[N] int<lower=1, upper=K> KID;
}

parameters {
  real a0;
  real b0;
  vector[K] a;
  vector[K] b;
  real<lower=0> s_a;
  real<lower=0> s_b;
  real<lower=0> s_Y;
}

model {
  a ~ normal(a0, s_a);
  b ~ normal(b0, s_b);
  Y ~ normal(a[KID] + b[KID] .* X, s_Y);
}
