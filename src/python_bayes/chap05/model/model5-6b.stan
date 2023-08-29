data {
  int N;
  array[N] int<lower=0, upper=1> A;
  array[N] real<lower=0, upper=1> Score;
  array[N] int<lower=0> M;
}

parameters {
  array[3] real b;
}

transformed parameters {
  array[N] real lambda;
  for (n in 1:N)
    lambda[n] = b[1] + b[2]*A[n] + b[3]*Score[n];
}

model {
  for (n in 1:N)
    M[n] ~ poisson_log(lambda[n]);
}

generated quantities {
  array[n] int m_pred;
  for (n in 1:N)
    m_pred[n] = poisson_log_rng(lambda[n]);
}
