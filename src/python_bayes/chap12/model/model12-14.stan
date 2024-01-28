data {
  int N;
  vector[N] Y;
  int I;
  array[I] int<lower=1, upper=N> From;
  array[I] int<lower=1, upper=N> To;
}

parameters {
  vector[N] r;
  real<lower=0> s_r;
  real<lower=0> s_Y;
}

model {
  target += normal_lpdf(r[To] | r[From], s_r);
  Y ~ normal(r, s_Y);
  s_Y ~ normal(0, 0.1);
}
