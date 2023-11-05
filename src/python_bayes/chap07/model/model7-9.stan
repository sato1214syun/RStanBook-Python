data {
  int N;
  array[N] real X;
  array[N] real Y;
  int N_new;
  array[N_new] real X_new;
}

parameters {
  real a;
  real b;
  real<lower=0> sigma;
}

model {
  for (n in 1:N)
    Y[n] ~ cauchy(a + b*X[n], sigma);
}

generated quantities {
  array[N_new] real y_new;
  for (n in 1:N_new)
    y_new[n] = cauchy_rng(a + b*X_new[n], sigma);
}
