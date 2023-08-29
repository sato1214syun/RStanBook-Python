data {
  int I;
  array[I] int<lower=0, upper=1> A;
  array[I] real<lower=0, upper=1> Score;
  array[I] int<lower=1, upper=3> WID;
  array[I] int<lower=0, upper=1> Y;
}

parameters {
  array[3] real b;
  real bw2;
  real bw3;
}

transformed parameters {
  array[3] real bw;
  bw[1] = 0;
  bw[2] = bw2;
  bw[3] = bw3;
}

model {
  for (i in 1:I)
    Y[i] ~ bernoulli_logit(b[1] + b[2]*A[i] + b[3]*Score[i] + bw[WID[i]]);
}
