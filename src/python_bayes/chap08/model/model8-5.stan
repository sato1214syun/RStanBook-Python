data {
  int N;
  int G;
  int K;
  array[N] real X;
  array[N] real Y;
  array[N] int<lower=1, upper=K> KID;
  array[K] int<lower=1, upper=G> K2G;
}

parameters {
  real a0;
  real b0;
  array[G] real a1;
  array[G] real b1;
  array[K] real a;
  array[K] real b;
  real<lower=0> s_ag;
  real<lower=0> s_bg;
  real<lower=0> s_a;
  real<lower=0> s_b;
  real<lower=0> s_Y;
}

model {
  for (g in 1:G) {
    a1[g] ~ normal(a0, s_ag);
    b1[g] ~ normal(b0, s_bg);
  }

  for (k in 1:K) {
    a[k] ~ normal(a1[K2G[k]], s_a);
    b[k] ~ normal(b1[K2G[k]], s_b);
  }

  for (n in 1:N)
    Y[n] ~ normal(a[KID[n]] + b[KID[n]]*X[n], s_Y);
}
