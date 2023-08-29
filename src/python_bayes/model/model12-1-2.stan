data {
    int N;
    int N_pred;
    vector[N] X;
    vector[N] Y;
}

parameters {
    vector[N] mu;
    real<lower=0> sigma_mu;
    real<lower=0> sigma_y;
}

model {
    for (n in 3:N) {
        mu[n] ~ normal(2*mu[n-1] - mu[n-2], sigma_mu);
        Y[n] ~ normal(mu[n], sigma_y);
    }
}

generated quantities {
    vector[N+N_pred] mu_pred;
    vector[N_pred] Y_pred;

    mu_pred[1:N] = mu;
    for (n in 1:N_pred) {
        mu_pred[N+n] = normal_rng(2*mu_pred[N+n-1]-mu_pred[N+n-2], sigma_mu);
        Y_pred[n] = normal_rng(mu_pred[N+n], sigma_y);
    }
}