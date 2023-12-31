data {
  int N;
  array[N] int Y;
}

parameters {
  real b;
  array[N] real b_I;
  real<lower=0> s_I;
}

transformed parameters {
  array[N] real q;
  for (n in 1:N)
    q[n] = inv_logit(b + b_I[n]);
}

model {
  for (n in 1:N)
    b_I[n] ~ normal(0, s_I);

  for (n in 1:N)
    Y[n] ~ binomial(8, q[n]);
}
