data {
  int I;
  array[I] int<lower=0> N;
  array[I] int<lower=0> Y;
  array[I] real<lower=0> X;
  array[I] int<lower=0, upper=1> F;
}

parameters {
  array[3] real b;
}

transformed parameters {
  array[I] real q;
  for (i in 1:I)
    q[i] = inv_logit(b[1] + b[2]*X[i] + b[3]*F[i]);
}

model {
  for (i in 1:I)
    Y[i] ~ binomial(N[i], q[i]);
}

generated quantities {
  array[I] real y_pred;
  for (i in 1:I)
    y_pred[i] = binomial_rng(N[i], q[i]);
}
