data {
  int N;
  int N_Pot;
  array[N] int<lower=0, upper=1> F;
  array[N] int<lower=1, upper=N_Pot> N2Pot;
  array[N] int Y;
}

parameters {
  array[2] real b;
  array[N] real b_I;
  array[N_Pot] real b_Pot;
  real<lower=0> s_I;
  real<lower=0> s_Pot;
}

model {
  for (n in 1:N)
    b_I[n] ~ normal(0, s_I);
  for (p in 1:N_Pot)
    b_Pot[p] ~ normal(0, s_Pot);

  for (n in 1:N)
    Y[n] ~ poisson_log(b[1] + b[2]*F[n] + b_I[n] + b_Pot[N2Pot[n]]);
}
