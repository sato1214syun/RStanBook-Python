data {
  int N;
  array[N] int<lower=0, upper=1> Y;
}

parameters {
  real<lower=0, upper=1> q;
}

model {
  for (n in 1:N)
    target += log_sum_exp(
      log(1.0/6) + bernoulli_lpmf(Y[n] | q),
      log(5.0/6) + bernoulli_lpmf(Y[n] | 1)
    );
}
