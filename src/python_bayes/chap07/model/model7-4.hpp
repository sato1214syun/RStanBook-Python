// Code generated by stanc v2.32.2
#include <stan/model/model_header.hpp>
namespace model7_4_model_namespace {
using stan::model::model_base_crtp;
using namespace stan::math;
stan::math::profile_map profiles__;
static constexpr std::array<const char*, 18> locations_array__ =
  {" (found before start of program)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap07/model/model7-4.stan', line 10, column 2 to column 29)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap07/model/model7-4.stan', line 11, column 2 to column 27)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap07/model/model7-4.stan', line 12, column 2 to column 20)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap07/model/model7-4.stan', line 21, column 2 to column 20)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap07/model/model7-4.stan', line 23, column 4 to column 60)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap07/model/model7-4.stan', line 22, column 2 to line 23, column 60)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap07/model/model7-4.stan', line 17, column 4 to column 48)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap07/model/model7-4.stan', line 16, column 2 to line 17, column 48)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap07/model/model7-4.stan', line 2, column 2 to column 8)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap07/model/model7-4.stan', line 3, column 12 to column 13)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap07/model/model7-4.stan', line 3, column 2 to column 15)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap07/model/model7-4.stan', line 4, column 9 to column 10)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap07/model/model7-4.stan', line 4, column 2 to column 12)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap07/model/model7-4.stan', line 5, column 2 to column 12)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap07/model/model7-4.stan', line 6, column 16 to column 21)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap07/model/model7-4.stan', line 6, column 2 to column 23)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap07/model/model7-4.stan', line 21, column 13 to column 18)"};
class model7_4_model final : public model_base_crtp<model7_4_model> {
 private:
  int T;
  std::vector<double> Time;
  std::vector<double> Y;
  int T_new;
  std::vector<double> Time_new;
 public:
  ~model7_4_model() {}
  model7_4_model(stan::io::var_context& context__, unsigned int
                 random_seed__ = 0, std::ostream* pstream__ = nullptr)
      : model_base_crtp(0) {
    int current_statement__ = 0;
    using local_scalar_t__ = double;
    boost::ecuyer1988 base_rng__ =
      stan::services::util::create_rng(random_seed__, 0);
    // suppress unused var warning
    (void) base_rng__;
    static constexpr const char* function__ =
      "model7_4_model_namespace::model7_4_model";
    // suppress unused var warning
    (void) function__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      current_statement__ = 9;
      context__.validate_dims("data initialization", "T", "int",
        std::vector<size_t>{});
      T = std::numeric_limits<int>::min();
      current_statement__ = 9;
      T = context__.vals_i("T")[(1 - 1)];
      current_statement__ = 10;
      stan::math::validate_non_negative_index("Time", "T", T);
      current_statement__ = 11;
      context__.validate_dims("data initialization", "Time", "double",
        std::vector<size_t>{static_cast<size_t>(T)});
      Time = std::vector<double>(T, std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 11;
      Time = context__.vals_r("Time");
      current_statement__ = 12;
      stan::math::validate_non_negative_index("Y", "T", T);
      current_statement__ = 13;
      context__.validate_dims("data initialization", "Y", "double",
        std::vector<size_t>{static_cast<size_t>(T)});
      Y = std::vector<double>(T, std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 13;
      Y = context__.vals_r("Y");
      current_statement__ = 14;
      context__.validate_dims("data initialization", "T_new", "int",
        std::vector<size_t>{});
      T_new = std::numeric_limits<int>::min();
      current_statement__ = 14;
      T_new = context__.vals_i("T_new")[(1 - 1)];
      current_statement__ = 15;
      stan::math::validate_non_negative_index("Time_new", "T_new", T_new);
      current_statement__ = 16;
      context__.validate_dims("data initialization", "Time_new", "double",
        std::vector<size_t>{static_cast<size_t>(T_new)});
      Time_new = std::vector<double>(T_new,
                   std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 16;
      Time_new = context__.vals_r("Time_new");
      current_statement__ = 17;
      stan::math::validate_non_negative_index("y_new", "T_new", T_new);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    num_params_r__ = 1 + 1 + 1;
  }
  inline std::string model_name() const final {
    return "model7_4_model";
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
      "model7_4_model_namespace::log_prob";
    // suppress unused var warning
    (void) function__;
    try {
      local_scalar_t__ a = DUMMY_VAR__;
      current_statement__ = 1;
      a = in__.template read_constrain_lub<local_scalar_t__, jacobian__>(0,
            100, lp__);
      local_scalar_t__ b = DUMMY_VAR__;
      current_statement__ = 2;
      b = in__.template read_constrain_lub<local_scalar_t__, jacobian__>(0,
            5, lp__);
      local_scalar_t__ s_Y = DUMMY_VAR__;
      current_statement__ = 3;
      s_Y = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(0,
              lp__);
      {
        current_statement__ = 8;
        for (int t = 1; t <= T; ++t) {
          current_statement__ = 7;
          lp_accum__.add(stan::math::normal_lpdf<propto__>(
                           stan::model::rvalue(Y, "Y",
                             stan::model::index_uni(t)), (a * (1 -
                           stan::math::exp((-b *
                             stan::model::rvalue(Time, "Time",
                               stan::model::index_uni(t)))))), s_Y));
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
      "model7_4_model_namespace::write_array";
    // suppress unused var warning
    (void) function__;
    try {
      double a = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 1;
      a = in__.template read_constrain_lub<local_scalar_t__, jacobian__>(0,
            100, lp__);
      double b = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 2;
      b = in__.template read_constrain_lub<local_scalar_t__, jacobian__>(0,
            5, lp__);
      double s_Y = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 3;
      s_Y = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(0,
              lp__);
      out__.write(a);
      out__.write(b);
      out__.write(s_Y);
      if (stan::math::logical_negation(
            (stan::math::primitive_value(emit_transformed_parameters__) ||
            stan::math::primitive_value(emit_generated_quantities__)))) {
        return ;
      }
      if (stan::math::logical_negation(emit_generated_quantities__)) {
        return ;
      }
      std::vector<double> y_new =
        std::vector<double>(T_new, std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 6;
      for (int t = 1; t <= T_new; ++t) {
        current_statement__ = 5;
        stan::model::assign(y_new,
          stan::math::normal_rng((a * (1 -
            stan::math::exp((-b *
              stan::model::rvalue(Time_new, "Time_new",
                stan::model::index_uni(t)))))), s_Y, base_rng__),
          "assigning variable y_new", stan::model::index_uni(t));
      }
      out__.write(y_new);
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
      local_scalar_t__ a = DUMMY_VAR__;
      current_statement__ = 1;
      a = in__.read<local_scalar_t__>();
      out__.write_free_lub(0, 100, a);
      local_scalar_t__ b = DUMMY_VAR__;
      current_statement__ = 2;
      b = in__.read<local_scalar_t__>();
      out__.write_free_lub(0, 5, b);
      local_scalar_t__ s_Y = DUMMY_VAR__;
      current_statement__ = 3;
      s_Y = in__.read<local_scalar_t__>();
      out__.write_free_lb(0, s_Y);
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
      context__.validate_dims("parameter initialization", "a", "double",
        std::vector<size_t>{});
      current_statement__ = 2;
      context__.validate_dims("parameter initialization", "b", "double",
        std::vector<size_t>{});
      current_statement__ = 3;
      context__.validate_dims("parameter initialization", "s_Y", "double",
        std::vector<size_t>{});
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      local_scalar_t__ a = DUMMY_VAR__;
      current_statement__ = 1;
      a = context__.vals_r("a")[(1 - 1)];
      out__.write_free_lub(0, 100, a);
      local_scalar_t__ b = DUMMY_VAR__;
      current_statement__ = 2;
      b = context__.vals_r("b")[(1 - 1)];
      out__.write_free_lub(0, 5, b);
      local_scalar_t__ s_Y = DUMMY_VAR__;
      current_statement__ = 3;
      s_Y = context__.vals_r("s_Y")[(1 - 1)];
      out__.write_free_lb(0, s_Y);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
  }
  inline void
  get_param_names(std::vector<std::string>& names__, const bool
                  emit_transformed_parameters__ = true, const bool
                  emit_generated_quantities__ = true) const {
    names__ = std::vector<std::string>{"a", "b", "s_Y"};
    if (emit_transformed_parameters__) {}
    if (emit_generated_quantities__) {
      std::vector<std::string> temp{"y_new"};
      names__.reserve(names__.size() + temp.size());
      names__.insert(names__.end(), temp.begin(), temp.end());
    }
  }
  inline void
  get_dims(std::vector<std::vector<size_t>>& dimss__, const bool
           emit_transformed_parameters__ = true, const bool
           emit_generated_quantities__ = true) const {
    dimss__ = std::vector<std::vector<size_t>>{std::vector<size_t>{},
                std::vector<size_t>{}, std::vector<size_t>{}};
    if (emit_transformed_parameters__) {}
    if (emit_generated_quantities__) {
      std::vector<std::vector<size_t>>
        temp{std::vector<size_t>{static_cast<size_t>(T_new)}};
      dimss__.reserve(dimss__.size() + temp.size());
      dimss__.insert(dimss__.end(), temp.begin(), temp.end());
    }
  }
  inline void
  constrained_param_names(std::vector<std::string>& param_names__, bool
                          emit_transformed_parameters__ = true, bool
                          emit_generated_quantities__ = true) const final {
    param_names__.emplace_back(std::string() + "a");
    param_names__.emplace_back(std::string() + "b");
    param_names__.emplace_back(std::string() + "s_Y");
    if (emit_transformed_parameters__) {}
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= T_new; ++sym1__) {
        param_names__.emplace_back(std::string() + "y_new" + '.' +
          std::to_string(sym1__));
      }
    }
  }
  inline void
  unconstrained_param_names(std::vector<std::string>& param_names__, bool
                            emit_transformed_parameters__ = true, bool
                            emit_generated_quantities__ = true) const final {
    param_names__.emplace_back(std::string() + "a");
    param_names__.emplace_back(std::string() + "b");
    param_names__.emplace_back(std::string() + "s_Y");
    if (emit_transformed_parameters__) {}
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= T_new; ++sym1__) {
        param_names__.emplace_back(std::string() + "y_new" + '.' +
          std::to_string(sym1__));
      }
    }
  }
  inline std::string get_constrained_sizedtypes() const {
    return std::string("[{\"name\":\"a\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"b\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"s_Y\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"y_new\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(T_new) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"generated_quantities\"}]");
  }
  inline std::string get_unconstrained_sizedtypes() const {
    return std::string("[{\"name\":\"a\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"b\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"s_Y\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"y_new\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(T_new) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"generated_quantities\"}]");
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
    const size_t num_gen_quantities = emit_generated_quantities * (T_new);
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
    const size_t num_gen_quantities = emit_generated_quantities * (T_new);
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
using stan_model = model7_4_model_namespace::model7_4_model;
#ifndef USING_R
// Boilerplate
stan::model::model_base&
new_model(stan::io::var_context& data_context, unsigned int seed,
          std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}
stan::math::profile_map& get_stan_profile_data() {
  return model7_4_model_namespace::profiles__;
}
#endif