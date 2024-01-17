functions {
  real CateCate_lpmf(int Y, int K, vector theta, vector[] phi) {
    vector[K] lp;
    for (k in 1:K)
      lp[k] = log(theta[k]) + log(phi[k,Y]);
    return log_sum_exp(lp);
  }
}

data {
  int<lower=1> E;
  int<lower=1> N;
  int<lower=1> I;
  int<lower=1> K;
  array[E] int<lower=1, upper=N> PersonID;
  array[E] int<lower=1, upper=I> ItemID;
  vector<lower=0>[I] Alpha;
}

parameters {
  array[N] simplex[K] theta;
  array[K] simplex[I] phi;
}

model {
  for (k in 1:K)
    phi[k] ~ dirichlet(Alpha);
  for (e in 1:E)
    ItemID[e] ~ CateCate(K, theta[PersonID[e]], phi);
}
