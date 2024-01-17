data {
  int N;
  array[N] int<lower=0> Y;
}

parameters {
  real<lower=0> lambda;
}

model {
  for (n in 1:N)
    Y[n] ~ poisson(lambda*0.5);
}
