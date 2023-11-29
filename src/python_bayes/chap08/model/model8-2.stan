data {
  int N;
  int K;
  array[N] real X;
  array[N] real Y;
  array[N] int<lower=1, upper=K> KID;
}

parameters {
  array[K] real a;
  array[K] real b;
  real<lower=0> s_Y;
}

model {
  for (n in 1:N)
    Y[n] ~ normal(a[KID[n]] + b[KID[n]]*X[n], s_Y);
}
