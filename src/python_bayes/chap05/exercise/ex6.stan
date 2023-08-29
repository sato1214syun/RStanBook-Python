data {
  int N;
  array[N] int<lower=0> Y;
  array[N] real<lower=0> X;
  array[N] int<lower=0, upper=1> F;
}

parameters {
  array[3] real b;
}

transformed parameters {
  array[N] real lambda;
  for (n in 1:N)
    lambda[n] = b[1] + b[2]*X[n] + b[3]*F[n];
}

model {
  for (n in 1:N)
    Y[n] ~ poisson_log(lambda[n]);
}

generated quantities {
  array[N] int y_pred;
  for (n in 1:N)
    y_pred[n] = poisson_log_rng(lambda[n]);
}
