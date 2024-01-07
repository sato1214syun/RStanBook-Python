// Code generated by stanc v2.32.2
#include <stan/model/model_header.hpp>
namespace ex7_model_namespace {
using stan::model::model_base_crtp;
using namespace stan::math;
stan::math::profile_map profiles__;
static constexpr std::array<const char*, 22> locations_array__ =
  {" (found before start of program)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/exercise/ex7.stan', line 10, column 2 to column 18)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/exercise/ex7.stan', line 11, column 2 to column 20)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/exercise/ex7.stan', line 12, column 2 to column 26)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/exercise/ex7.stan', line 13, column 2 to column 20)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/exercise/ex7.stan', line 14, column 2 to column 22)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/exercise/ex7.stan', line 19, column 4 to column 28)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/exercise/ex7.stan', line 18, column 2 to line 19, column 28)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/exercise/ex7.stan', line 21, column 4 to column 32)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/exercise/ex7.stan', line 20, column 2 to line 21, column 32)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/exercise/ex7.stan', line 24, column 4 to column 68)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/exercise/ex7.stan', line 23, column 2 to line 24, column 68)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/exercise/ex7.stan', line 2, column 2 to column 8)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/exercise/ex7.stan', line 3, column 2 to column 12)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/exercise/ex7.stan', line 4, column 8 to column 9)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/exercise/ex7.stan', line 4, column 2 to column 35)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/exercise/ex7.stan', line 5, column 8 to column 9)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/exercise/ex7.stan', line 5, column 2 to column 43)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/exercise/ex7.stan', line 6, column 8 to column 9)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/exercise/ex7.stan', line 6, column 2 to column 17)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/exercise/ex7.stan', line 11, column 8 to column 9)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/exercise/ex7.stan', line 12, column 8 to column 13)"};
class ex7_model final : public model_base_crtp<ex7_model> {
 private:
  int N;
  int N_Pot;
  std::vector<int> F;
  std::vector<int> N2Pot;
  std::vector<int> Y;
 public:
  ~ex7_model() {}
  ex7_model(stan::io::var_context& context__, unsigned int random_seed__ = 0,
            std::ostream* pstream__ = nullptr) : model_base_crtp(0) {
    int current_statement__ = 0;
    using local_scalar_t__ = double;
    boost::ecuyer1988 base_rng__ =
      stan::services::util::create_rng(random_seed__, 0);
    // suppress unused var warning
    (void) base_rng__;
    static constexpr const char* function__ =
      "ex7_model_namespace::ex7_model";
    // suppress unused var warning
    (void) function__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      current_statement__ = 12;
      context__.validate_dims("data initialization", "N", "int",
        std::vector<size_t>{});
      N = std::numeric_limits<int>::min();
      current_statement__ = 12;
      N = context__.vals_i("N")[(1 - 1)];
      current_statement__ = 13;
      context__.validate_dims("data initialization", "N_Pot", "int",
        std::vector<size_t>{});
      N_Pot = std::numeric_limits<int>::min();
      current_statement__ = 13;
      N_Pot = context__.vals_i("N_Pot")[(1 - 1)];
      current_statement__ = 14;
      stan::math::validate_non_negative_index("F", "N", N);
      current_statement__ = 15;
      context__.validate_dims("data initialization", "F", "int",
        std::vector<size_t>{static_cast<size_t>(N)});
      F = std::vector<int>(N, std::numeric_limits<int>::min());
      current_statement__ = 15;
      F = context__.vals_i("F");
      current_statement__ = 15;
      stan::math::check_greater_or_equal(function__, "F", F, 0);
      current_statement__ = 15;
      stan::math::check_less_or_equal(function__, "F", F, 1);
      current_statement__ = 16;
      stan::math::validate_non_negative_index("N2Pot", "N", N);
      current_statement__ = 17;
      context__.validate_dims("data initialization", "N2Pot", "int",
        std::vector<size_t>{static_cast<size_t>(N)});
      N2Pot = std::vector<int>(N, std::numeric_limits<int>::min());
      current_statement__ = 17;
      N2Pot = context__.vals_i("N2Pot");
      current_statement__ = 17;
      stan::math::check_greater_or_equal(function__, "N2Pot", N2Pot, 1);
      current_statement__ = 17;
      stan::math::check_less_or_equal(function__, "N2Pot", N2Pot, N_Pot);
      current_statement__ = 18;
      stan::math::validate_non_negative_index("Y", "N", N);
      current_statement__ = 19;
      context__.validate_dims("data initialization", "Y", "int",
        std::vector<size_t>{static_cast<size_t>(N)});
      Y = std::vector<int>(N, std::numeric_limits<int>::min());
      current_statement__ = 19;
      Y = context__.vals_i("Y");
      current_statement__ = 20;
      stan::math::validate_non_negative_index("b_I", "N", N);
      current_statement__ = 21;
      stan::math::validate_non_negative_index("b_Pot", "N_Pot", N_Pot);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    num_params_r__ = 2 + N + N_Pot + 1 + 1;
  }
  inline std::string model_name() const final {
    return "ex7_model";
  }
  inline std::vector<std::string> model_compile_info() const noexcept {
    return std::vector<std::string>{"stanc_version = stanc3 v2.32.2",
             "stancflags = --filename-in-msg=ex7.stan"};
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
    static constexpr const char* function__ = "ex7_model_namespace::log_prob";
    // suppress unused var warning
    (void) function__;
    try {
      std::vector<local_scalar_t__> b =
        std::vector<local_scalar_t__>(2, DUMMY_VAR__);
      current_statement__ = 1;
      b = in__.template read<std::vector<local_scalar_t__>>(2);
      std::vector<local_scalar_t__> b_I =
        std::vector<local_scalar_t__>(N, DUMMY_VAR__);
      current_statement__ = 2;
      b_I = in__.template read<std::vector<local_scalar_t__>>(N);
      std::vector<local_scalar_t__> b_Pot =
        std::vector<local_scalar_t__>(N_Pot, DUMMY_VAR__);
      current_statement__ = 3;
      b_Pot = in__.template read<std::vector<local_scalar_t__>>(N_Pot);
      local_scalar_t__ s_I = DUMMY_VAR__;
      current_statement__ = 4;
      s_I = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(0,
              lp__);
      local_scalar_t__ s_Pot = DUMMY_VAR__;
      current_statement__ = 5;
      s_Pot = in__.template read_constrain_lb<local_scalar_t__,
                jacobian__>(0, lp__);
      {
        current_statement__ = 7;
        for (int n = 1; n <= N; ++n) {
          current_statement__ = 6;
          lp_accum__.add(stan::math::normal_lpdf<propto__>(
                           stan::model::rvalue(b_I, "b_I",
                             stan::model::index_uni(n)), 0, s_I));
        }
        current_statement__ = 9;
        for (int p = 1; p <= N_Pot; ++p) {
          current_statement__ = 8;
          lp_accum__.add(stan::math::normal_lpdf<propto__>(
                           stan::model::rvalue(b_Pot, "b_Pot",
                             stan::model::index_uni(p)), 0, s_Pot));
        }
        current_statement__ = 11;
        for (int n = 1; n <= N; ++n) {
          current_statement__ = 10;
          lp_accum__.add(stan::math::poisson_log_lpmf<propto__>(
                           stan::model::rvalue(Y, "Y",
                             stan::model::index_uni(n)),
                           (((stan::model::rvalue(b, "b",
                                stan::model::index_uni(1)) +
                           (stan::model::rvalue(b, "b",
                              stan::model::index_uni(2)) *
                           stan::model::rvalue(F, "F",
                             stan::model::index_uni(n)))) +
                           stan::model::rvalue(b_I, "b_I",
                             stan::model::index_uni(n))) +
                           stan::model::rvalue(b_Pot, "b_Pot",
                             stan::model::index_uni(
                               stan::model::rvalue(N2Pot, "N2Pot",
                                 stan::model::index_uni(n)))))));
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
      "ex7_model_namespace::write_array";
    // suppress unused var warning
    (void) function__;
    try {
      std::vector<double> b =
        std::vector<double>(2, std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 1;
      b = in__.template read<std::vector<local_scalar_t__>>(2);
      std::vector<double> b_I =
        std::vector<double>(N, std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 2;
      b_I = in__.template read<std::vector<local_scalar_t__>>(N);
      std::vector<double> b_Pot =
        std::vector<double>(N_Pot, std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 3;
      b_Pot = in__.template read<std::vector<local_scalar_t__>>(N_Pot);
      double s_I = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 4;
      s_I = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(0,
              lp__);
      double s_Pot = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 5;
      s_Pot = in__.template read_constrain_lb<local_scalar_t__,
                jacobian__>(0, lp__);
      out__.write(b);
      out__.write(b_I);
      out__.write(b_Pot);
      out__.write(s_I);
      out__.write(s_Pot);
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
      std::vector<local_scalar_t__> b =
        std::vector<local_scalar_t__>(2, DUMMY_VAR__);
      current_statement__ = 1;
      stan::model::assign(b, in__.read<std::vector<local_scalar_t__>>(2),
        "assigning variable b");
      out__.write(b);
      std::vector<local_scalar_t__> b_I =
        std::vector<local_scalar_t__>(N, DUMMY_VAR__);
      current_statement__ = 2;
      stan::model::assign(b_I, in__.read<std::vector<local_scalar_t__>>(N),
        "assigning variable b_I");
      out__.write(b_I);
      std::vector<local_scalar_t__> b_Pot =
        std::vector<local_scalar_t__>(N_Pot, DUMMY_VAR__);
      current_statement__ = 3;
      stan::model::assign(b_Pot,
        in__.read<std::vector<local_scalar_t__>>(N_Pot),
        "assigning variable b_Pot");
      out__.write(b_Pot);
      local_scalar_t__ s_I = DUMMY_VAR__;
      current_statement__ = 4;
      s_I = in__.read<local_scalar_t__>();
      out__.write_free_lb(0, s_I);
      local_scalar_t__ s_Pot = DUMMY_VAR__;
      current_statement__ = 5;
      s_Pot = in__.read<local_scalar_t__>();
      out__.write_free_lb(0, s_Pot);
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
        std::vector<size_t>{static_cast<size_t>(2)});
      current_statement__ = 2;
      context__.validate_dims("parameter initialization", "b_I", "double",
        std::vector<size_t>{static_cast<size_t>(N)});
      current_statement__ = 3;
      context__.validate_dims("parameter initialization", "b_Pot", "double",
        std::vector<size_t>{static_cast<size_t>(N_Pot)});
      current_statement__ = 4;
      context__.validate_dims("parameter initialization", "s_I", "double",
        std::vector<size_t>{});
      current_statement__ = 5;
      context__.validate_dims("parameter initialization", "s_Pot", "double",
        std::vector<size_t>{});
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      std::vector<local_scalar_t__> b =
        std::vector<local_scalar_t__>(2, DUMMY_VAR__);
      current_statement__ = 1;
      b = context__.vals_r("b");
      out__.write(b);
      std::vector<local_scalar_t__> b_I =
        std::vector<local_scalar_t__>(N, DUMMY_VAR__);
      current_statement__ = 2;
      b_I = context__.vals_r("b_I");
      out__.write(b_I);
      std::vector<local_scalar_t__> b_Pot =
        std::vector<local_scalar_t__>(N_Pot, DUMMY_VAR__);
      current_statement__ = 3;
      b_Pot = context__.vals_r("b_Pot");
      out__.write(b_Pot);
      local_scalar_t__ s_I = DUMMY_VAR__;
      current_statement__ = 4;
      s_I = context__.vals_r("s_I")[(1 - 1)];
      out__.write_free_lb(0, s_I);
      local_scalar_t__ s_Pot = DUMMY_VAR__;
      current_statement__ = 5;
      s_Pot = context__.vals_r("s_Pot")[(1 - 1)];
      out__.write_free_lb(0, s_Pot);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
  }
  inline void
  get_param_names(std::vector<std::string>& names__, const bool
                  emit_transformed_parameters__ = true, const bool
                  emit_generated_quantities__ = true) const {
    names__ = std::vector<std::string>{"b", "b_I", "b_Pot", "s_I", "s_Pot"};
    if (emit_transformed_parameters__) {}
    if (emit_generated_quantities__) {}
  }
  inline void
  get_dims(std::vector<std::vector<size_t>>& dimss__, const bool
           emit_transformed_parameters__ = true, const bool
           emit_generated_quantities__ = true) const {
    dimss__ = std::vector<std::vector<size_t>>{std::vector<size_t>{static_cast<
                                                                    size_t>(2)},
                std::vector<size_t>{static_cast<size_t>(N)},
                std::vector<size_t>{static_cast<size_t>(N_Pot)},
                std::vector<size_t>{}, std::vector<size_t>{}};
    if (emit_transformed_parameters__) {}
    if (emit_generated_quantities__) {}
  }
  inline void
  constrained_param_names(std::vector<std::string>& param_names__, bool
                          emit_transformed_parameters__ = true, bool
                          emit_generated_quantities__ = true) const final {
    for (int sym1__ = 1; sym1__ <= 2; ++sym1__) {
      param_names__.emplace_back(std::string() + "b" + '.' +
        std::to_string(sym1__));
    }
    for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
      param_names__.emplace_back(std::string() + "b_I" + '.' +
        std::to_string(sym1__));
    }
    for (int sym1__ = 1; sym1__ <= N_Pot; ++sym1__) {
      param_names__.emplace_back(std::string() + "b_Pot" + '.' +
        std::to_string(sym1__));
    }
    param_names__.emplace_back(std::string() + "s_I");
    param_names__.emplace_back(std::string() + "s_Pot");
    if (emit_transformed_parameters__) {}
    if (emit_generated_quantities__) {}
  }
  inline void
  unconstrained_param_names(std::vector<std::string>& param_names__, bool
                            emit_transformed_parameters__ = true, bool
                            emit_generated_quantities__ = true) const final {
    for (int sym1__ = 1; sym1__ <= 2; ++sym1__) {
      param_names__.emplace_back(std::string() + "b" + '.' +
        std::to_string(sym1__));
    }
    for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
      param_names__.emplace_back(std::string() + "b_I" + '.' +
        std::to_string(sym1__));
    }
    for (int sym1__ = 1; sym1__ <= N_Pot; ++sym1__) {
      param_names__.emplace_back(std::string() + "b_Pot" + '.' +
        std::to_string(sym1__));
    }
    param_names__.emplace_back(std::string() + "s_I");
    param_names__.emplace_back(std::string() + "s_Pot");
    if (emit_transformed_parameters__) {}
    if (emit_generated_quantities__) {}
  }
  inline std::string get_constrained_sizedtypes() const {
    return std::string("[{\"name\":\"b\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(2) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"parameters\"},{\"name\":\"b_I\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"parameters\"},{\"name\":\"b_Pot\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N_Pot) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"parameters\"},{\"name\":\"s_I\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"s_Pot\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"}]");
  }
  inline std::string get_unconstrained_sizedtypes() const {
    return std::string("[{\"name\":\"b\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(2) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"parameters\"},{\"name\":\"b_I\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"parameters\"},{\"name\":\"b_Pot\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N_Pot) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"parameters\"},{\"name\":\"s_I\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"s_Pot\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"}]");
  }
  // Begin method overload boilerplate
  template <typename RNG> inline void
  write_array(RNG& base_rng, Eigen::Matrix<double,-1,1>& params_r,
              Eigen::Matrix<double,-1,1>& vars, const bool
              emit_transformed_parameters = true, const bool
              emit_generated_quantities = true, std::ostream*
              pstream = nullptr) const {
    const size_t num_params__ = ((((2 + N) + N_Pot) + 1) + 1);
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
    const size_t num_params__ = ((((2 + N) + N_Pot) + 1) + 1);
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
using stan_model = ex7_model_namespace::ex7_model;
#ifndef USING_R
// Boilerplate
stan::model::model_base&
new_model(stan::io::var_context& data_context, unsigned int seed,
          std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}
stan::math::profile_map& get_stan_profile_data() {
  return ex7_model_namespace::profiles__;
}
#endif