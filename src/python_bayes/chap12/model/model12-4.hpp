// Code generated by stanc v2.32.2
#include <stan/model/model_header.hpp>
namespace model12_4_model_namespace {
using stan::model::model_base_crtp;
using namespace stan::math;
stan::math::profile_map profiles__;
static constexpr std::array<const char*, 20> locations_array__ =
  {" (found before start of program)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap12/model/model12-4.stan', line 8, column 2 to column 15)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap12/model/model12-4.stan', line 9, column 2 to column 21)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap12/model/model12-4.stan', line 10, column 2 to column 20)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap12/model/model12-4.stan', line 19, column 2 to column 26)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap12/model/model12-4.stan', line 20, column 2 to column 24)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap12/model/model12-4.stan', line 21, column 2 to column 19)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap12/model/model12-4.stan', line 23, column 4 to column 68)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap12/model/model12-4.stan', line 24, column 4 to column 45)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap12/model/model12-4.stan', line 22, column 22 to line 25, column 3)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap12/model/model12-4.stan', line 22, column 2 to line 25, column 3)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap12/model/model12-4.stan', line 14, column 2 to column 54)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap12/model/model12-4.stan', line 15, column 2 to column 22)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap12/model/model12-4.stan', line 2, column 2 to column 8)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap12/model/model12-4.stan', line 3, column 2 to column 13)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap12/model/model12-4.stan', line 4, column 9 to column 10)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap12/model/model12-4.stan', line 4, column 2 to column 14)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap12/model/model12-4.stan', line 8, column 9 to column 10)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap12/model/model12-4.stan', line 19, column 9 to column 17)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap12/model/model12-4.stan', line 20, column 9 to column 15)"};
class model12_4_model final : public model_base_crtp<model12_4_model> {
 private:
  int T;
  int T_pred;
  Eigen::Matrix<double,-1,1> Y_data__;
  int mu_all_1dim__;
  Eigen::Map<Eigen::Matrix<double,-1,1>> Y{nullptr, 0};
 public:
  ~model12_4_model() {}
  model12_4_model(stan::io::var_context& context__, unsigned int
                  random_seed__ = 0, std::ostream* pstream__ = nullptr)
      : model_base_crtp(0) {
    int current_statement__ = 0;
    using local_scalar_t__ = double;
    boost::ecuyer1988 base_rng__ =
      stan::services::util::create_rng(random_seed__, 0);
    // suppress unused var warning
    (void) base_rng__;
    static constexpr const char* function__ =
      "model12_4_model_namespace::model12_4_model";
    // suppress unused var warning
    (void) function__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      current_statement__ = 13;
      context__.validate_dims("data initialization", "T", "int",
        std::vector<size_t>{});
      T = std::numeric_limits<int>::min();
      current_statement__ = 13;
      T = context__.vals_i("T")[(1 - 1)];
      current_statement__ = 14;
      context__.validate_dims("data initialization", "T_pred", "int",
        std::vector<size_t>{});
      T_pred = std::numeric_limits<int>::min();
      current_statement__ = 14;
      T_pred = context__.vals_i("T_pred")[(1 - 1)];
      current_statement__ = 15;
      stan::math::validate_non_negative_index("Y", "T", T);
      current_statement__ = 16;
      context__.validate_dims("data initialization", "Y", "double",
        std::vector<size_t>{static_cast<size_t>(T)});
      Y_data__ = Eigen::Matrix<double,-1,1>::Constant(T,
                   std::numeric_limits<double>::quiet_NaN());
      new (&Y) Eigen::Map<Eigen::Matrix<double,-1,1>>(Y_data__.data(), T);
      {
        std::vector<local_scalar_t__> Y_flat__;
        current_statement__ = 16;
        Y_flat__ = context__.vals_r("Y");
        current_statement__ = 16;
        pos__ = 1;
        current_statement__ = 16;
        for (int sym1__ = 1; sym1__ <= T; ++sym1__) {
          current_statement__ = 16;
          stan::model::assign(Y, Y_flat__[(pos__ - 1)],
            "assigning variable Y", stan::model::index_uni(sym1__));
          current_statement__ = 16;
          pos__ = (pos__ + 1);
        }
      }
      current_statement__ = 17;
      stan::math::validate_non_negative_index("mu", "T", T);
      current_statement__ = 18;
      mu_all_1dim__ = std::numeric_limits<int>::min();
      current_statement__ = 18;
      mu_all_1dim__ = (T + T_pred);
      current_statement__ = 18;
      stan::math::validate_non_negative_index("mu_all", "T + T_pred",
        mu_all_1dim__);
      current_statement__ = 19;
      stan::math::validate_non_negative_index("y_pred", "T_pred", T_pred);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    num_params_r__ = T + 1 + 1;
  }
  inline std::string model_name() const final {
    return "model12_4_model";
  }
  inline std::vector<std::string> model_compile_info() const noexcept {
    return std::vector<std::string>{"stanc_version = stanc3 v2.32.2",
             "stancflags = --filename-in-msg=model12-4.stan"};
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
      "model12_4_model_namespace::log_prob";
    // suppress unused var warning
    (void) function__;
    try {
      Eigen::Matrix<local_scalar_t__,-1,1> mu =
        Eigen::Matrix<local_scalar_t__,-1,1>::Constant(T, DUMMY_VAR__);
      current_statement__ = 1;
      mu = in__.template read<Eigen::Matrix<local_scalar_t__,-1,1>>(T);
      local_scalar_t__ s_mu = DUMMY_VAR__;
      current_statement__ = 2;
      s_mu = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(0,
               lp__);
      local_scalar_t__ s_Y = DUMMY_VAR__;
      current_statement__ = 3;
      s_Y = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(0,
              lp__);
      {
        current_statement__ = 11;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(
                         stan::model::rvalue(mu, "mu",
                           stan::model::index_min_max(3, T)),
                         stan::math::subtract(
                           stan::math::multiply(2,
                             stan::model::rvalue(mu, "mu",
                               stan::model::index_min_max(2, (T - 1)))),
                           stan::model::rvalue(mu, "mu",
                             stan::model::index_min_max(1, (T - 2)))), s_mu));
        current_statement__ = 12;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(Y, mu, s_Y));
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
      "model12_4_model_namespace::write_array";
    // suppress unused var warning
    (void) function__;
    try {
      Eigen::Matrix<double,-1,1> mu =
        Eigen::Matrix<double,-1,1>::Constant(T,
          std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 1;
      mu = in__.template read<Eigen::Matrix<local_scalar_t__,-1,1>>(T);
      double s_mu = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 2;
      s_mu = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(0,
               lp__);
      double s_Y = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 3;
      s_Y = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(0,
              lp__);
      out__.write(mu);
      out__.write(s_mu);
      out__.write(s_Y);
      if (stan::math::logical_negation(
            (stan::math::primitive_value(emit_transformed_parameters__) ||
            stan::math::primitive_value(emit_generated_quantities__)))) {
        return ;
      }
      if (stan::math::logical_negation(emit_generated_quantities__)) {
        return ;
      }
      Eigen::Matrix<double,-1,1> mu_all =
        Eigen::Matrix<double,-1,1>::Constant(mu_all_1dim__,
          std::numeric_limits<double>::quiet_NaN());
      Eigen::Matrix<double,-1,1> y_pred =
        Eigen::Matrix<double,-1,1>::Constant(T_pred,
          std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 6;
      stan::model::assign(mu_all, mu, "assigning variable mu_all",
        stan::model::index_min_max(1, T));
      current_statement__ = 10;
      for (int t = 1; t <= T_pred; ++t) {
        current_statement__ = 7;
        stan::model::assign(mu_all,
          stan::math::normal_rng(((2 *
            stan::model::rvalue(mu_all, "mu_all",
              stan::model::index_uni(((T + t) - 1)))) -
            stan::model::rvalue(mu_all, "mu_all",
              stan::model::index_uni(((T + t) - 2)))), s_mu, base_rng__),
          "assigning variable mu_all", stan::model::index_uni((T + t)));
        current_statement__ = 8;
        stan::model::assign(y_pred,
          stan::math::normal_rng(
            stan::model::rvalue(mu_all, "mu_all",
              stan::model::index_uni((T + t))), s_Y, base_rng__),
          "assigning variable y_pred", stan::model::index_uni(t));
      }
      out__.write(mu_all);
      out__.write(y_pred);
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
      Eigen::Matrix<local_scalar_t__,-1,1> mu =
        Eigen::Matrix<local_scalar_t__,-1,1>::Constant(T, DUMMY_VAR__);
      current_statement__ = 1;
      stan::model::assign(mu,
        in__.read<Eigen::Matrix<local_scalar_t__,-1,1>>(T),
        "assigning variable mu");
      out__.write(mu);
      local_scalar_t__ s_mu = DUMMY_VAR__;
      current_statement__ = 2;
      s_mu = in__.read<local_scalar_t__>();
      out__.write_free_lb(0, s_mu);
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
      context__.validate_dims("parameter initialization", "mu", "double",
        std::vector<size_t>{static_cast<size_t>(T)});
      current_statement__ = 2;
      context__.validate_dims("parameter initialization", "s_mu", "double",
        std::vector<size_t>{});
      current_statement__ = 3;
      context__.validate_dims("parameter initialization", "s_Y", "double",
        std::vector<size_t>{});
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      Eigen::Matrix<local_scalar_t__,-1,1> mu =
        Eigen::Matrix<local_scalar_t__,-1,1>::Constant(T, DUMMY_VAR__);
      {
        std::vector<local_scalar_t__> mu_flat__;
        current_statement__ = 1;
        mu_flat__ = context__.vals_r("mu");
        current_statement__ = 1;
        pos__ = 1;
        current_statement__ = 1;
        for (int sym1__ = 1; sym1__ <= T; ++sym1__) {
          current_statement__ = 1;
          stan::model::assign(mu, mu_flat__[(pos__ - 1)],
            "assigning variable mu", stan::model::index_uni(sym1__));
          current_statement__ = 1;
          pos__ = (pos__ + 1);
        }
      }
      out__.write(mu);
      local_scalar_t__ s_mu = DUMMY_VAR__;
      current_statement__ = 2;
      s_mu = context__.vals_r("s_mu")[(1 - 1)];
      out__.write_free_lb(0, s_mu);
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
    names__ = std::vector<std::string>{"mu", "s_mu", "s_Y"};
    if (emit_transformed_parameters__) {}
    if (emit_generated_quantities__) {
      std::vector<std::string> temp{"mu_all", "y_pred"};
      names__.reserve(names__.size() + temp.size());
      names__.insert(names__.end(), temp.begin(), temp.end());
    }
  }
  inline void
  get_dims(std::vector<std::vector<size_t>>& dimss__, const bool
           emit_transformed_parameters__ = true, const bool
           emit_generated_quantities__ = true) const {
    dimss__ = std::vector<std::vector<size_t>>{std::vector<size_t>{static_cast<
                                                                    size_t>(T)},
                std::vector<size_t>{}, std::vector<size_t>{}};
    if (emit_transformed_parameters__) {}
    if (emit_generated_quantities__) {
      std::vector<std::vector<size_t>>
        temp{std::vector<size_t>{static_cast<size_t>(mu_all_1dim__)},
             std::vector<size_t>{static_cast<size_t>(T_pred)}};
      dimss__.reserve(dimss__.size() + temp.size());
      dimss__.insert(dimss__.end(), temp.begin(), temp.end());
    }
  }
  inline void
  constrained_param_names(std::vector<std::string>& param_names__, bool
                          emit_transformed_parameters__ = true, bool
                          emit_generated_quantities__ = true) const final {
    for (int sym1__ = 1; sym1__ <= T; ++sym1__) {
      param_names__.emplace_back(std::string() + "mu" + '.' +
        std::to_string(sym1__));
    }
    param_names__.emplace_back(std::string() + "s_mu");
    param_names__.emplace_back(std::string() + "s_Y");
    if (emit_transformed_parameters__) {}
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= mu_all_1dim__; ++sym1__) {
        param_names__.emplace_back(std::string() + "mu_all" + '.' +
          std::to_string(sym1__));
      }
      for (int sym1__ = 1; sym1__ <= T_pred; ++sym1__) {
        param_names__.emplace_back(std::string() + "y_pred" + '.' +
          std::to_string(sym1__));
      }
    }
  }
  inline void
  unconstrained_param_names(std::vector<std::string>& param_names__, bool
                            emit_transformed_parameters__ = true, bool
                            emit_generated_quantities__ = true) const final {
    for (int sym1__ = 1; sym1__ <= T; ++sym1__) {
      param_names__.emplace_back(std::string() + "mu" + '.' +
        std::to_string(sym1__));
    }
    param_names__.emplace_back(std::string() + "s_mu");
    param_names__.emplace_back(std::string() + "s_Y");
    if (emit_transformed_parameters__) {}
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= mu_all_1dim__; ++sym1__) {
        param_names__.emplace_back(std::string() + "mu_all" + '.' +
          std::to_string(sym1__));
      }
      for (int sym1__ = 1; sym1__ <= T_pred; ++sym1__) {
        param_names__.emplace_back(std::string() + "y_pred" + '.' +
          std::to_string(sym1__));
      }
    }
  }
  inline std::string get_constrained_sizedtypes() const {
    return std::string("[{\"name\":\"mu\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(T) + "},\"block\":\"parameters\"},{\"name\":\"s_mu\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"s_Y\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"mu_all\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(mu_all_1dim__) + "},\"block\":\"generated_quantities\"},{\"name\":\"y_pred\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(T_pred) + "},\"block\":\"generated_quantities\"}]");
  }
  inline std::string get_unconstrained_sizedtypes() const {
    return std::string("[{\"name\":\"mu\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(T) + "},\"block\":\"parameters\"},{\"name\":\"s_mu\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"s_Y\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"mu_all\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(mu_all_1dim__) + "},\"block\":\"generated_quantities\"},{\"name\":\"y_pred\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(T_pred) + "},\"block\":\"generated_quantities\"}]");
  }
  // Begin method overload boilerplate
  template <typename RNG> inline void
  write_array(RNG& base_rng, Eigen::Matrix<double,-1,1>& params_r,
              Eigen::Matrix<double,-1,1>& vars, const bool
              emit_transformed_parameters = true, const bool
              emit_generated_quantities = true, std::ostream*
              pstream = nullptr) const {
    const size_t num_params__ = ((T + 1) + 1);
    const size_t num_transformed = emit_transformed_parameters * (0);
    const size_t num_gen_quantities = emit_generated_quantities *
      ((mu_all_1dim__ + T_pred));
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
    const size_t num_params__ = ((T + 1) + 1);
    const size_t num_transformed = emit_transformed_parameters * (0);
    const size_t num_gen_quantities = emit_generated_quantities *
      ((mu_all_1dim__ + T_pred));
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
using stan_model = model12_4_model_namespace::model12_4_model;
#ifndef USING_R
// Boilerplate
stan::model::model_base&
new_model(stan::io::var_context& data_context, unsigned int seed,
          std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}
stan::math::profile_map& get_stan_profile_data() {
  return model12_4_model_namespace::profiles__;
}
#endif