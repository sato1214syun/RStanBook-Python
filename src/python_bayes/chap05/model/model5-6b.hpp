// Code generated by stanc v2.32.2
#include <stan/model/model_header.hpp>
namespace model5_6b_model_namespace {
using stan::model::model_base_crtp;
using namespace stan::math;
stan::math::profile_map profiles__;
static constexpr std::array<const char*, 19> locations_array__ =
  {" (found before start of program)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap05/model/model5-6b.stan', line 9, column 2 to column 12)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap05/model/model5-6b.stan', line 13, column 2 to column 17)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap05/model/model5-6b.stan', line 24, column 2 to column 16)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap05/model/model5-6b.stan', line 15, column 4 to column 49)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap05/model/model5-6b.stan', line 14, column 2 to line 15, column 49)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap05/model/model5-6b.stan', line 26, column 4 to column 43)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap05/model/model5-6b.stan', line 25, column 2 to line 26, column 43)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap05/model/model5-6b.stan', line 20, column 4 to column 34)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap05/model/model5-6b.stan', line 19, column 2 to line 20, column 34)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap05/model/model5-6b.stan', line 2, column 2 to column 8)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap05/model/model5-6b.stan', line 3, column 26 to column 27)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap05/model/model5-6b.stan', line 3, column 2 to column 29)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap05/model/model5-6b.stan', line 4, column 31 to column 32)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap05/model/model5-6b.stan', line 4, column 2 to column 34)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap05/model/model5-6b.stan', line 5, column 17 to column 18)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap05/model/model5-6b.stan', line 5, column 2 to column 20)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap05/model/model5-6b.stan', line 13, column 14 to column 15)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap05/model/model5-6b.stan', line 24, column 13 to column 14)"};
class model5_6b_model final : public model_base_crtp<model5_6b_model> {
 private:
  int N;
  std::vector<int> A;
  std::vector<double> Score;
  std::vector<int> M;
 public:
  ~model5_6b_model() {}
  model5_6b_model(stan::io::var_context& context__, unsigned int
                  random_seed__ = 0, std::ostream* pstream__ = nullptr)
      : model_base_crtp(0) {
    int current_statement__ = 0;
    using local_scalar_t__ = double;
    boost::ecuyer1988 base_rng__ =
      stan::services::util::create_rng(random_seed__, 0);
    // suppress unused var warning
    (void) base_rng__;
    static constexpr const char* function__ =
      "model5_6b_model_namespace::model5_6b_model";
    // suppress unused var warning
    (void) function__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      current_statement__ = 10;
      context__.validate_dims("data initialization", "N", "int",
        std::vector<size_t>{});
      N = std::numeric_limits<int>::min();
      current_statement__ = 10;
      N = context__.vals_i("N")[(1 - 1)];
      current_statement__ = 11;
      stan::math::validate_non_negative_index("A", "N", N);
      current_statement__ = 12;
      context__.validate_dims("data initialization", "A", "int",
        std::vector<size_t>{static_cast<size_t>(N)});
      A = std::vector<int>(N, std::numeric_limits<int>::min());
      current_statement__ = 12;
      A = context__.vals_i("A");
      current_statement__ = 12;
      stan::math::check_greater_or_equal(function__, "A", A, 0);
      current_statement__ = 12;
      stan::math::check_less_or_equal(function__, "A", A, 1);
      current_statement__ = 13;
      stan::math::validate_non_negative_index("Score", "N", N);
      current_statement__ = 14;
      context__.validate_dims("data initialization", "Score", "double",
        std::vector<size_t>{static_cast<size_t>(N)});
      Score = std::vector<double>(N,
                std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 14;
      Score = context__.vals_r("Score");
      current_statement__ = 14;
      stan::math::check_greater_or_equal(function__, "Score", Score, 0);
      current_statement__ = 14;
      stan::math::check_less_or_equal(function__, "Score", Score, 1);
      current_statement__ = 15;
      stan::math::validate_non_negative_index("M", "N", N);
      current_statement__ = 16;
      context__.validate_dims("data initialization", "M", "int",
        std::vector<size_t>{static_cast<size_t>(N)});
      M = std::vector<int>(N, std::numeric_limits<int>::min());
      current_statement__ = 16;
      M = context__.vals_i("M");
      current_statement__ = 16;
      stan::math::check_greater_or_equal(function__, "M", M, 0);
      current_statement__ = 17;
      stan::math::validate_non_negative_index("lambda", "N", N);
      current_statement__ = 18;
      stan::math::validate_non_negative_index("m_pred", "N", N);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    num_params_r__ = 3;
  }
  inline std::string model_name() const final {
    return "model5_6b_model";
  }
  inline std::vector<std::string> model_compile_info() const noexcept {
    return std::vector<std::string>{"stanc_version = stanc3 v2.32.2",
             "stancflags = "};
  }
  template <bool propto__, bool jacobian__, typename VecR, typename VecI,
            stan::require_vector_like_t<VecR>* = nullptr,
            stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr>
  inline stan::scalar_type_t<VecR>
  log_prob_impl(VecR& params_r__, VecI& params_i__, std::ostream*
                pstream__ = nullptr) const {
    using T__ = stan::scalar_type_t<VecR>;
    using local_scalar_t__ = T__;
    T__ lp__(0.0);
    stan::math::accumulator<T__> lp_accum__;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    static constexpr const char* function__ =
      "model5_6b_model_namespace::log_prob";
    // suppress unused var warning
    (void) function__;
    try {
      std::vector<local_scalar_t__> b =
        std::vector<local_scalar_t__>(3, DUMMY_VAR__);
      current_statement__ = 1;
      b = in__.template read<std::vector<local_scalar_t__>>(3);
      std::vector<local_scalar_t__> lambda =
        std::vector<local_scalar_t__>(N, DUMMY_VAR__);
      current_statement__ = 5;
      for (int n = 1; n <= N; ++n) {
        current_statement__ = 4;
        stan::model::assign(lambda,
          ((stan::model::rvalue(b, "b", stan::model::index_uni(1)) +
          (stan::model::rvalue(b, "b", stan::model::index_uni(2)) *
          stan::model::rvalue(A, "A", stan::model::index_uni(n)))) +
          (stan::model::rvalue(b, "b", stan::model::index_uni(3)) *
          stan::model::rvalue(Score, "Score", stan::model::index_uni(n)))),
          "assigning variable lambda", stan::model::index_uni(n));
      }
      {
        current_statement__ = 9;
        for (int n = 1; n <= N; ++n) {
          current_statement__ = 8;
          lp_accum__.add(stan::math::poisson_log_lpmf<propto__>(
                           stan::model::rvalue(M, "M",
                             stan::model::index_uni(n)),
                           stan::model::rvalue(lambda, "lambda",
                             stan::model::index_uni(n))));
        }
      }
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    lp_accum__.add(lp__);
    return lp_accum__.sum();
  }
  template <typename RNG, typename VecR, typename VecI, typename VecVar,
            stan::require_vector_like_vt<std::is_floating_point,
            VecR>* = nullptr, stan::require_vector_like_vt<std::is_integral,
            VecI>* = nullptr, stan::require_vector_vt<std::is_floating_point,
            VecVar>* = nullptr>
  inline void
  write_array_impl(RNG& base_rng__, VecR& params_r__, VecI& params_i__,
                   VecVar& vars__, const bool
                   emit_transformed_parameters__ = true, const bool
                   emit_generated_quantities__ = true, std::ostream*
                   pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    static constexpr bool propto__ = true;
    // suppress unused var warning
    (void) propto__;
    double lp__ = 0.0;
    // suppress unused var warning
    (void) lp__;
    int current_statement__ = 0;
    stan::math::accumulator<double> lp_accum__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    constexpr bool jacobian__ = false;
    static constexpr const char* function__ =
      "model5_6b_model_namespace::write_array";
    // suppress unused var warning
    (void) function__;
    try {
      std::vector<double> b =
        std::vector<double>(3, std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 1;
      b = in__.template read<std::vector<local_scalar_t__>>(3);
      std::vector<double> lambda =
        std::vector<double>(N, std::numeric_limits<double>::quiet_NaN());
      out__.write(b);
      if (stan::math::logical_negation(
            (stan::math::primitive_value(emit_transformed_parameters__) ||
            stan::math::primitive_value(emit_generated_quantities__)))) {
        return ;
      }
      current_statement__ = 5;
      for (int n = 1; n <= N; ++n) {
        current_statement__ = 4;
        stan::model::assign(lambda,
          ((stan::model::rvalue(b, "b", stan::model::index_uni(1)) +
          (stan::model::rvalue(b, "b", stan::model::index_uni(2)) *
          stan::model::rvalue(A, "A", stan::model::index_uni(n)))) +
          (stan::model::rvalue(b, "b", stan::model::index_uni(3)) *
          stan::model::rvalue(Score, "Score", stan::model::index_uni(n)))),
          "assigning variable lambda", stan::model::index_uni(n));
      }
      if (emit_transformed_parameters__) {
        out__.write(lambda);
      }
      if (stan::math::logical_negation(emit_generated_quantities__)) {
        return ;
      }
      std::vector<int> m_pred =
        std::vector<int>(N, std::numeric_limits<int>::min());
      current_statement__ = 7;
      for (int n = 1; n <= N; ++n) {
        current_statement__ = 6;
        stan::model::assign(m_pred,
          stan::math::poisson_log_rng(
            stan::model::rvalue(lambda, "lambda", stan::model::index_uni(n)),
            base_rng__), "assigning variable m_pred",
          stan::model::index_uni(n));
      }
      out__.write(m_pred);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
  }
  template <typename VecVar, typename VecI,
            stan::require_vector_t<VecVar>* = nullptr,
            stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr>
  inline void
  unconstrain_array_impl(const VecVar& params_r__, const VecI& params_i__,
                         VecVar& vars__, std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      std::vector<local_scalar_t__> b =
        std::vector<local_scalar_t__>(3, DUMMY_VAR__);
      current_statement__ = 1;
      stan::model::assign(b, in__.read<std::vector<local_scalar_t__>>(3),
        "assigning variable b");
      out__.write(b);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
  }
  template <typename VecVar, stan::require_vector_t<VecVar>* = nullptr>
  inline void
  transform_inits_impl(const stan::io::var_context& context__, VecVar&
                       vars__, std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::serializer<local_scalar_t__> out__(vars__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    try {
      current_statement__ = 1;
      context__.validate_dims("parameter initialization", "b", "double",
        std::vector<size_t>{static_cast<size_t>(3)});
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      std::vector<local_scalar_t__> b =
        std::vector<local_scalar_t__>(3, DUMMY_VAR__);
      current_statement__ = 1;
      b = context__.vals_r("b");
      out__.write(b);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
  }
  inline void
  get_param_names(std::vector<std::string>& names__, const bool
                  emit_transformed_parameters__ = true, const bool
                  emit_generated_quantities__ = true) const {
    names__ = std::vector<std::string>{"b"};
    if (emit_transformed_parameters__) {
      std::vector<std::string> temp{"lambda"};
      names__.reserve(names__.size() + temp.size());
      names__.insert(names__.end(), temp.begin(), temp.end());
    }
    if (emit_generated_quantities__) {
      std::vector<std::string> temp{"m_pred"};
      names__.reserve(names__.size() + temp.size());
      names__.insert(names__.end(), temp.begin(), temp.end());
    }
  }
  inline void
  get_dims(std::vector<std::vector<size_t>>& dimss__, const bool
           emit_transformed_parameters__ = true, const bool
           emit_generated_quantities__ = true) const {
    dimss__ = std::vector<std::vector<size_t>>{std::vector<size_t>{static_cast<
                                                                    size_t>(3)}};
    if (emit_transformed_parameters__) {
      std::vector<std::vector<size_t>>
        temp{std::vector<size_t>{static_cast<size_t>(N)}};
      dimss__.reserve(dimss__.size() + temp.size());
      dimss__.insert(dimss__.end(), temp.begin(), temp.end());
    }
    if (emit_generated_quantities__) {
      std::vector<std::vector<size_t>>
        temp{std::vector<size_t>{static_cast<size_t>(N)}};
      dimss__.reserve(dimss__.size() + temp.size());
      dimss__.insert(dimss__.end(), temp.begin(), temp.end());
    }
  }
  inline void
  constrained_param_names(std::vector<std::string>& param_names__, bool
                          emit_transformed_parameters__ = true, bool
                          emit_generated_quantities__ = true) const final {
    for (int sym1__ = 1; sym1__ <= 3; ++sym1__) {
      param_names__.emplace_back(std::string() + "b" + '.' +
        std::to_string(sym1__));
    }
    if (emit_transformed_parameters__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        param_names__.emplace_back(std::string() + "lambda" + '.' +
          std::to_string(sym1__));
      }
    }
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        param_names__.emplace_back(std::string() + "m_pred" + '.' +
          std::to_string(sym1__));
      }
    }
  }
  inline void
  unconstrained_param_names(std::vector<std::string>& param_names__, bool
                            emit_transformed_parameters__ = true, bool
                            emit_generated_quantities__ = true) const final {
    for (int sym1__ = 1; sym1__ <= 3; ++sym1__) {
      param_names__.emplace_back(std::string() + "b" + '.' +
        std::to_string(sym1__));
    }
    if (emit_transformed_parameters__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        param_names__.emplace_back(std::string() + "lambda" + '.' +
          std::to_string(sym1__));
      }
    }
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        param_names__.emplace_back(std::string() + "m_pred" + '.' +
          std::to_string(sym1__));
      }
    }
  }
  inline std::string get_constrained_sizedtypes() const {
    return std::string("[{\"name\":\"b\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(3) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"parameters\"},{\"name\":\"lambda\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"transformed_parameters\"},{\"name\":\"m_pred\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N) + ",\"element_type\":{\"name\":\"int\"}},\"block\":\"generated_quantities\"}]");
  }
  inline std::string get_unconstrained_sizedtypes() const {
    return std::string("[{\"name\":\"b\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(3) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"parameters\"},{\"name\":\"lambda\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"transformed_parameters\"},{\"name\":\"m_pred\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N) + ",\"element_type\":{\"name\":\"int\"}},\"block\":\"generated_quantities\"}]");
  }
  // Begin method overload boilerplate
  template <typename RNG> inline void
  write_array(RNG& base_rng, Eigen::Matrix<double,-1,1>& params_r,
              Eigen::Matrix<double,-1,1>& vars, const bool
              emit_transformed_parameters = true, const bool
              emit_generated_quantities = true, std::ostream*
              pstream = nullptr) const {
    const size_t num_params__ = 3;
    const size_t num_transformed = emit_transformed_parameters * (N);
    const size_t num_gen_quantities = emit_generated_quantities * (N);
    const size_t num_to_write = num_params__ + num_transformed +
      num_gen_quantities;
    std::vector<int> params_i;
    vars = Eigen::Matrix<double,-1,1>::Constant(num_to_write,
             std::numeric_limits<double>::quiet_NaN());
    write_array_impl(base_rng, params_r, params_i, vars,
      emit_transformed_parameters, emit_generated_quantities, pstream);
  }
  template <typename RNG> inline void
  write_array(RNG& base_rng, std::vector<double>& params_r, std::vector<int>&
              params_i, std::vector<double>& vars, bool
              emit_transformed_parameters = true, bool
              emit_generated_quantities = true, std::ostream*
              pstream = nullptr) const {
    const size_t num_params__ = 3;
    const size_t num_transformed = emit_transformed_parameters * (N);
    const size_t num_gen_quantities = emit_generated_quantities * (N);
    const size_t num_to_write = num_params__ + num_transformed +
      num_gen_quantities;
    vars = std::vector<double>(num_to_write,
             std::numeric_limits<double>::quiet_NaN());
    write_array_impl(base_rng, params_r, params_i, vars,
      emit_transformed_parameters, emit_generated_quantities, pstream);
  }
  template <bool propto__, bool jacobian__, typename T_> inline T_
  log_prob(Eigen::Matrix<T_,-1,1>& params_r, std::ostream* pstream = nullptr) const {
    Eigen::Matrix<int,-1,1> params_i;
    return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
  }
  template <bool propto__, bool jacobian__, typename T_> inline T_
  log_prob(std::vector<T_>& params_r, std::vector<int>& params_i,
           std::ostream* pstream = nullptr) const {
    return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
  }
  inline void
  transform_inits(const stan::io::var_context& context,
                  Eigen::Matrix<double,-1,1>& params_r, std::ostream*
                  pstream = nullptr) const final {
    std::vector<double> params_r_vec(params_r.size());
    std::vector<int> params_i;
    transform_inits(context, params_i, params_r_vec, pstream);
    params_r = Eigen::Map<Eigen::Matrix<double,-1,1>>(params_r_vec.data(),
                 params_r_vec.size());
  }
  inline void
  transform_inits(const stan::io::var_context& context, std::vector<int>&
                  params_i, std::vector<double>& vars, std::ostream*
                  pstream__ = nullptr) const {
    vars.resize(num_params_r__);
    transform_inits_impl(context, vars, pstream__);
  }
  inline void
  unconstrain_array(const std::vector<double>& params_constrained,
                    std::vector<double>& params_unconstrained, std::ostream*
                    pstream = nullptr) const {
    const std::vector<int> params_i;
    params_unconstrained = std::vector<double>(num_params_r__,
                             std::numeric_limits<double>::quiet_NaN());
    unconstrain_array_impl(params_constrained, params_i,
      params_unconstrained, pstream);
  }
  inline void
  unconstrain_array(const Eigen::Matrix<double,-1,1>& params_constrained,
                    Eigen::Matrix<double,-1,1>& params_unconstrained,
                    std::ostream* pstream = nullptr) const {
    const std::vector<int> params_i;
    params_unconstrained = Eigen::Matrix<double,-1,1>::Constant(num_params_r__,
                             std::numeric_limits<double>::quiet_NaN());
    unconstrain_array_impl(params_constrained, params_i,
      params_unconstrained, pstream);
  }
};
}
using stan_model = model5_6b_model_namespace::model5_6b_model;
#ifndef USING_R
// Boilerplate
stan::model::model_base&
new_model(stan::io::var_context& data_context, unsigned int seed,
          std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}
stan::math::profile_map& get_stan_profile_data() {
  return model5_6b_model_namespace::profiles__;
}
#endif