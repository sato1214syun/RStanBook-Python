data {
  int N;
  array[N] real X;
  array[N] real Y;
}

parameters {
  real a;
  real b;
  array[N] real x_true;
  real<lower=0> s_Y;
}

model {
  for (n in 1:N) {
    X[n] ~ normal(x_true[n], 2.5);
    Y[n] ~ normal(a + b*x_true[n], s_Y);
  }
}
