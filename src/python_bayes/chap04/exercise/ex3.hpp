// Code generated by stanc v2.32.2
#include <stan/model/model_header.hpp>
namespace ex3_model_namespace {
using stan::model::model_base_crtp;
using namespace stan::math;
stan::math::profile_map profiles__;
static constexpr std::array<const char*, 14> locations_array__ =
  {" (found before start of program)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap04/exercise/ex3.stan', line 9, column 2 to column 11)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap04/exercise/ex3.stan', line 10, column 2 to column 11)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap04/exercise/ex3.stan', line 11, column 2 to column 22)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap04/exercise/ex3.stan', line 16, column 4 to column 31)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap04/exercise/ex3.stan', line 15, column 2 to line 16, column 31)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap04/exercise/ex3.stan', line 18, column 4 to column 31)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap04/exercise/ex3.stan', line 17, column 2 to line 18, column 31)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap04/exercise/ex3.stan', line 2, column 2 to column 9)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap04/exercise/ex3.stan', line 3, column 2 to column 9)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap04/exercise/ex3.stan', line 4, column 10 to column 12)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap04/exercise/ex3.stan', line 4, column 2 to column 14)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap04/exercise/ex3.stan', line 5, column 10 to column 12)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap04/exercise/ex3.stan', line 5, column 2 to column 14)"};
class ex3_model final : public model_base_crtp<ex3_model> {
 private:
  int N1;
  int N2;
  std::vector<double> Y1;
  std::vector<double> Y2;
 public:
  ~ex3_model() {}
  ex3_model(stan::io::var_context& context__, unsigned int random_seed__ = 0,
            std::ostream* pstream__ = nullptr) : model_base_crtp(0) {
    int current_statement__ = 0;
    using local_scalar_t__ = double;
    boost::ecuyer1988 base_rng__ =
      stan::services::util::create_rng(random_seed__, 0);
    // suppress unused var warning
    (void) base_rng__;
    static constexpr const char* function__ =
      "ex3_model_namespace::ex3_model";
    // suppress unused var warning
    (void) function__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      current_statement__ = 8;
      context__.validate_dims("data initialization", "N1", "int",
        std::vector<size_t>{});
      N1 = std::numeric_limits<int>::min();
      current_statement__ = 8;
      N1 = context__.vals_i("N1")[(1 - 1)];
      current_statement__ = 9;
      context__.validate_dims("data initialization", "N2", "int",
        std::vector<size_t>{});
      N2 = std::numeric_limits<int>::min();
      current_statement__ = 9;
      N2 = context__.vals_i("N2")[(1 - 1)];
      current_statement__ = 10;
      stan::math::validate_non_negative_index("Y1", "N1", N1);
      current_statement__ = 11;
      context__.validate_dims("data initialization", "Y1", "double",
        std::vector<size_t>{static_cast<size_t>(N1)});
      Y1 = std::vector<double>(N1, std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 11;
      Y1 = context__.vals_r("Y1");
      current_statement__ = 12;
      stan::math::validate_non_negative_index("Y2", "N2", N2);
      current_statement__ = 13;
      context__.validate_dims("data initialization", "Y2", "double",
        std::vector<size_t>{static_cast<size_t>(N2)});
      Y2 = std::vector<double>(N2, std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 13;
      Y2 = context__.vals_r("Y2");
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    num_params_r__ = 1 + 1 + 1;
  }
  inline std::string model_name() const final {
    return "ex3_model";
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
    static constexpr const char* function__ = "ex3_model_namespace::log_prob";
    // suppress unused var warning
    (void) function__;
    try {
      local_scalar_t__ mu1 = DUMMY_VAR__;
      current_statement__ = 1;
      mu1 = in__.template read<local_scalar_t__>();
      local_scalar_t__ mu2 = DUMMY_VAR__;
      current_statement__ = 2;
      mu2 = in__.template read<local_scalar_t__>();
      local_scalar_t__ sigma = DUMMY_VAR__;
      current_statement__ = 3;
      sigma = in__.template read_constrain_lb<local_scalar_t__,
                jacobian__>(0, lp__);
      {
        current_statement__ = 5;
        for (int n = 1; n <= N1; ++n) {
          current_statement__ = 4;
          lp_accum__.add(stan::math::normal_lpdf<propto__>(
                           stan::model::rvalue(Y1, "Y1",
                             stan::model::index_uni(n)), mu1, sigma));
        }
        current_statement__ = 7;
        for (int n = 1; n <= N2; ++n) {
          current_statement__ = 6;
          lp_accum__.add(stan::math::normal_lpdf<propto__>(
                           stan::model::rvalue(Y2, "Y2",
                             stan::model::index_uni(n)), mu2, sigma));
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
      "ex3_model_namespace::write_array";
    // suppress unused var warning
    (void) function__;
    try {
      double mu1 = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 1;
      mu1 = in__.template read<local_scalar_t__>();
      double mu2 = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 2;
      mu2 = in__.template read<local_scalar_t__>();
      double sigma = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 3;
      sigma = in__.template read_constrain_lb<local_scalar_t__,
                jacobian__>(0, lp__);
      out__.write(mu1);
      out__.write(mu2);
      out__.write(sigma);
      if (stan::math::logical_negation(
            (stan::math::primitive_value(emit_transformed_parameters__) ||
            stan::math::primitive_value(emit_generated_quantities__)))) {
        return ;
      }
      if (stan::math::logical_negation(emit_generated_quantities__)) {
        return ;
      }
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
      local_scalar_t__ mu1 = DUMMY_VAR__;
      current_statement__ = 1;
      mu1 = in__.read<local_scalar_t__>();
      out__.write(mu1);
      local_scalar_t__ mu2 = DUMMY_VAR__;
      current_statement__ = 2;
      mu2 = in__.read<local_scalar_t__>();
      out__.write(mu2);
      local_scalar_t__ sigma = DUMMY_VAR__;
      current_statement__ = 3;
      sigma = in__.read<local_scalar_t__>();
      out__.write_free_lb(0, sigma);
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
      context__.validate_dims("parameter initialization", "mu1", "double",
        std::vector<size_t>{});
      current_statement__ = 2;
      context__.validate_dims("parameter initialization", "mu2", "double",
        std::vector<size_t>{});
      current_statement__ = 3;
      context__.validate_dims("parameter initialization", "sigma", "double",
        std::vector<size_t>{});
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      local_scalar_t__ mu1 = DUMMY_VAR__;
      current_statement__ = 1;
      mu1 = context__.vals_r("mu1")[(1 - 1)];
      out__.write(mu1);
      local_scalar_t__ mu2 = DUMMY_VAR__;
      current_statement__ = 2;
      mu2 = context__.vals_r("mu2")[(1 - 1)];
      out__.write(mu2);
      local_scalar_t__ sigma = DUMMY_VAR__;
      current_statement__ = 3;
      sigma = context__.vals_r("sigma")[(1 - 1)];
      out__.write_free_lb(0, sigma);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
  }
  inline void
  get_param_names(std::vector<std::string>& names__, const bool
                  emit_transformed_parameters__ = true, const bool
                  emit_generated_quantities__ = true) const {
    names__ = std::vector<std::string>{"mu1", "mu2", "sigma"};
    if (emit_transformed_parameters__) {}
    if (emit_generated_quantities__) {}
  }
  inline void
  get_dims(std::vector<std::vector<size_t>>& dimss__, const bool
           emit_transformed_parameters__ = true, const bool
           emit_generated_quantities__ = true) const {
    dimss__ = std::vector<std::vector<size_t>>{std::vector<size_t>{},
                std::vector<size_t>{}, std::vector<size_t>{}};
    if (emit_transformed_parameters__) {}
    if (emit_generated_quantities__) {}
  }
  inline void
  constrained_param_names(std::vector<std::string>& param_names__, bool
                          emit_transformed_parameters__ = true, bool
                          emit_generated_quantities__ = true) const final {
    param_names__.emplace_back(std::string() + "mu1");
    param_names__.emplace_back(std::string() + "mu2");
    param_names__.emplace_back(std::string() + "sigma");
    if (emit_transformed_parameters__) {}
    if (emit_generated_quantities__) {}
  }
  inline void
  unconstrained_param_names(std::vector<std::string>& param_names__, bool
                            emit_transformed_parameters__ = true, bool
                            emit_generated_quantities__ = true) const final {
    param_names__.emplace_back(std::string() + "mu1");
    param_names__.emplace_back(std::string() + "mu2");
    param_names__.emplace_back(std::string() + "sigma");
    if (emit_transformed_parameters__) {}
    if (emit_generated_quantities__) {}
  }
  inline std::string get_constrained_sizedtypes() const {
    return std::string("[{\"name\":\"mu1\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"mu2\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"sigma\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"}]");
  }
  inline std::string get_unconstrained_sizedtypes() const {
    return std::string("[{\"name\":\"mu1\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"mu2\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"sigma\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"}]");
  }
  // Begin method overload boilerplate
  template <typename RNG> inline void
  write_array(RNG& base_rng, Eigen::Matrix<double,-1,1>& params_r,
              Eigen::Matrix<double,-1,1>& vars, const bool
              emit_transformed_parameters = true, const bool
              emit_generated_quantities = true, std::ostream*
              pstream = nullptr) const {
    const size_t num_params__ = ((1 + 1) + 1);
    const size_t num_transformed = emit_transformed_parameters * (0);
    const size_t num_gen_quantities = emit_generated_quantities * (0);
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
    const size_t num_params__ = ((1 + 1) + 1);
    const size_t num_transformed = emit_transformed_parameters * (0);
    const size_t num_gen_quantities = emit_generated_quantities * (0);
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
using stan_model = ex3_model_namespace::ex3_model;
#ifndef USING_R
// Boilerplate
stan::model::model_base&
new_model(stan::io::var_context& data_context, unsigned int seed,
          std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}
stan::math::profile_map& get_stan_profile_data() {
  return ex3_model_namespace::profiles__;
}
#endif