// Code generated by stanc v2.32.2
#include <stan/model/model_header.hpp>
namespace model8_5_model_namespace {
using stan::model::model_base_crtp;
using namespace stan::math;
stan::math::profile_map profiles__;
static constexpr std::array<const char*, 37> locations_array__ =
  {" (found before start of program)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/model/model8-5.stan', line 12, column 2 to column 10)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/model/model8-5.stan', line 13, column 2 to column 10)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/model/model8-5.stan', line 14, column 2 to column 19)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/model/model8-5.stan', line 15, column 2 to column 19)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/model/model8-5.stan', line 16, column 2 to column 18)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/model/model8-5.stan', line 17, column 2 to column 18)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/model/model8-5.stan', line 18, column 2 to column 21)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/model/model8-5.stan', line 19, column 2 to column 21)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/model/model8-5.stan', line 20, column 2 to column 20)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/model/model8-5.stan', line 21, column 2 to column 20)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/model/model8-5.stan', line 22, column 2 to column 20)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/model/model8-5.stan', line 27, column 4 to column 29)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/model/model8-5.stan', line 28, column 4 to column 29)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/model/model8-5.stan', line 26, column 17 to line 29, column 3)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/model/model8-5.stan', line 26, column 2 to line 29, column 3)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/model/model8-5.stan', line 32, column 4 to column 35)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/model/model8-5.stan', line 33, column 4 to column 35)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/model/model8-5.stan', line 31, column 17 to line 34, column 3)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/model/model8-5.stan', line 31, column 2 to line 34, column 3)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/model/model8-5.stan', line 37, column 4 to column 51)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/model/model8-5.stan', line 36, column 2 to line 37, column 51)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/model/model8-5.stan', line 2, column 2 to column 8)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/model/model8-5.stan', line 3, column 2 to column 8)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/model/model8-5.stan', line 4, column 2 to column 8)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/model/model8-5.stan', line 5, column 8 to column 9)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/model/model8-5.stan', line 5, column 2 to column 18)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/model/model8-5.stan', line 6, column 8 to column 9)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/model/model8-5.stan', line 6, column 2 to column 18)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/model/model8-5.stan', line 7, column 8 to column 9)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/model/model8-5.stan', line 7, column 2 to column 37)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/model/model8-5.stan', line 8, column 8 to column 9)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/model/model8-5.stan', line 8, column 2 to column 37)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/model/model8-5.stan', line 14, column 8 to column 9)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/model/model8-5.stan', line 15, column 8 to column 9)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/model/model8-5.stan', line 16, column 8 to column 9)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap08/model/model8-5.stan', line 17, column 8 to column 9)"};
class model8_5_model final : public model_base_crtp<model8_5_model> {
 private:
  int N;
  int G;
  int K;
  std::vector<double> X;
  std::vector<double> Y;
  std::vector<int> KID;
  std::vector<int> K2G;
 public:
  ~model8_5_model() {}
  model8_5_model(stan::io::var_context& context__, unsigned int
                 random_seed__ = 0, std::ostream* pstream__ = nullptr)
      : model_base_crtp(0) {
    int current_statement__ = 0;
    using local_scalar_t__ = double;
    boost::ecuyer1988 base_rng__ =
      stan::services::util::create_rng(random_seed__, 0);
    // suppress unused var warning
    (void) base_rng__;
    static constexpr const char* function__ =
      "model8_5_model_namespace::model8_5_model";
    // suppress unused var warning
    (void) function__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      current_statement__ = 22;
      context__.validate_dims("data initialization", "N", "int",
        std::vector<size_t>{});
      N = std::numeric_limits<int>::min();
      current_statement__ = 22;
      N = context__.vals_i("N")[(1 - 1)];
      current_statement__ = 23;
      context__.validate_dims("data initialization", "G", "int",
        std::vector<size_t>{});
      G = std::numeric_limits<int>::min();
      current_statement__ = 23;
      G = context__.vals_i("G")[(1 - 1)];
      current_statement__ = 24;
      context__.validate_dims("data initialization", "K", "int",
        std::vector<size_t>{});
      K = std::numeric_limits<int>::min();
      current_statement__ = 24;
      K = context__.vals_i("K")[(1 - 1)];
      current_statement__ = 25;
      stan::math::validate_non_negative_index("X", "N", N);
      current_statement__ = 26;
      context__.validate_dims("data initialization", "X", "double",
        std::vector<size_t>{static_cast<size_t>(N)});
      X = std::vector<double>(N, std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 26;
      X = context__.vals_r("X");
      current_statement__ = 27;
      stan::math::validate_non_negative_index("Y", "N", N);
      current_statement__ = 28;
      context__.validate_dims("data initialization", "Y", "double",
        std::vector<size_t>{static_cast<size_t>(N)});
      Y = std::vector<double>(N, std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 28;
      Y = context__.vals_r("Y");
      current_statement__ = 29;
      stan::math::validate_non_negative_index("KID", "N", N);
      current_statement__ = 30;
      context__.validate_dims("data initialization", "KID", "int",
        std::vector<size_t>{static_cast<size_t>(N)});
      KID = std::vector<int>(N, std::numeric_limits<int>::min());
      current_statement__ = 30;
      KID = context__.vals_i("KID");
      current_statement__ = 30;
      stan::math::check_greater_or_equal(function__, "KID", KID, 1);
      current_statement__ = 30;
      stan::math::check_less_or_equal(function__, "KID", KID, K);
      current_statement__ = 31;
      stan::math::validate_non_negative_index("K2G", "K", K);
      current_statement__ = 32;
      context__.validate_dims("data initialization", "K2G", "int",
        std::vector<size_t>{static_cast<size_t>(K)});
      K2G = std::vector<int>(K, std::numeric_limits<int>::min());
      current_statement__ = 32;
      K2G = context__.vals_i("K2G");
      current_statement__ = 32;
      stan::math::check_greater_or_equal(function__, "K2G", K2G, 1);
      current_statement__ = 32;
      stan::math::check_less_or_equal(function__, "K2G", K2G, G);
      current_statement__ = 33;
      stan::math::validate_non_negative_index("a1", "G", G);
      current_statement__ = 34;
      stan::math::validate_non_negative_index("b1", "G", G);
      current_statement__ = 35;
      stan::math::validate_non_negative_index("a", "K", K);
      current_statement__ = 36;
      stan::math::validate_non_negative_index("b", "K", K);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    num_params_r__ = 1 + 1 + G + G + K + K + 1 + 1 + 1 + 1 + 1;
  }
  inline std::string model_name() const final {
    return "model8_5_model";
  }
  inline std::vector<std::string> model_compile_info() const noexcept {
    return std::vector<std::string>{"stanc_version = stanc3 v2.32.2",
             "stancflags = --filename-in-msg=model8-5.stan"};
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
      "model8_5_model_namespace::log_prob";
    // suppress unused var warning
    (void) function__;
    try {
      local_scalar_t__ a0 = DUMMY_VAR__;
      current_statement__ = 1;
      a0 = in__.template read<local_scalar_t__>();
      local_scalar_t__ b0 = DUMMY_VAR__;
      current_statement__ = 2;
      b0 = in__.template read<local_scalar_t__>();
      std::vector<local_scalar_t__> a1 =
        std::vector<local_scalar_t__>(G, DUMMY_VAR__);
      current_statement__ = 3;
      a1 = in__.template read<std::vector<local_scalar_t__>>(G);
      std::vector<local_scalar_t__> b1 =
        std::vector<local_scalar_t__>(G, DUMMY_VAR__);
      current_statement__ = 4;
      b1 = in__.template read<std::vector<local_scalar_t__>>(G);
      std::vector<local_scalar_t__> a =
        std::vector<local_scalar_t__>(K, DUMMY_VAR__);
      current_statement__ = 5;
      a = in__.template read<std::vector<local_scalar_t__>>(K);
      std::vector<local_scalar_t__> b =
        std::vector<local_scalar_t__>(K, DUMMY_VAR__);
      current_statement__ = 6;
      b = in__.template read<std::vector<local_scalar_t__>>(K);
      local_scalar_t__ s_ag = DUMMY_VAR__;
      current_statement__ = 7;
      s_ag = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(0,
               lp__);
      local_scalar_t__ s_bg = DUMMY_VAR__;
      current_statement__ = 8;
      s_bg = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(0,
               lp__);
      local_scalar_t__ s_a = DUMMY_VAR__;
      current_statement__ = 9;
      s_a = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(0,
              lp__);
      local_scalar_t__ s_b = DUMMY_VAR__;
      current_statement__ = 10;
      s_b = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(0,
              lp__);
      local_scalar_t__ s_Y = DUMMY_VAR__;
      current_statement__ = 11;
      s_Y = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(0,
              lp__);
      {
        current_statement__ = 15;
        for (int g = 1; g <= G; ++g) {
          current_statement__ = 12;
          lp_accum__.add(stan::math::normal_lpdf<propto__>(
                           stan::model::rvalue(a1, "a1",
                             stan::model::index_uni(g)), a0, s_ag));
          current_statement__ = 13;
          lp_accum__.add(stan::math::normal_lpdf<propto__>(
                           stan::model::rvalue(b1, "b1",
                             stan::model::index_uni(g)), b0, s_bg));
        }
        current_statement__ = 19;
        for (int k = 1; k <= K; ++k) {
          current_statement__ = 16;
          lp_accum__.add(stan::math::normal_lpdf<propto__>(
                           stan::model::rvalue(a, "a",
                             stan::model::index_uni(k)),
                           stan::model::rvalue(a1, "a1",
                             stan::model::index_uni(
                               stan::model::rvalue(K2G, "K2G",
                                 stan::model::index_uni(k)))), s_a));
          current_statement__ = 17;
          lp_accum__.add(stan::math::normal_lpdf<propto__>(
                           stan::model::rvalue(b, "b",
                             stan::model::index_uni(k)),
                           stan::model::rvalue(b1, "b1",
                             stan::model::index_uni(
                               stan::model::rvalue(K2G, "K2G",
                                 stan::model::index_uni(k)))), s_b));
        }
        current_statement__ = 21;
        for (int n = 1; n <= N; ++n) {
          current_statement__ = 20;
          lp_accum__.add(stan::math::normal_lpdf<propto__>(
                           stan::model::rvalue(Y, "Y",
                             stan::model::index_uni(n)),
                           (stan::model::rvalue(a, "a",
                              stan::model::index_uni(
                                stan::model::rvalue(KID, "KID",
                                  stan::model::index_uni(n)))) +
                           (stan::model::rvalue(b, "b",
                              stan::model::index_uni(
                                stan::model::rvalue(KID, "KID",
                                  stan::model::index_uni(n)))) *
                           stan::model::rvalue(X, "X",
                             stan::model::index_uni(n)))), s_Y));
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
      "model8_5_model_namespace::write_array";
    // suppress unused var warning
    (void) function__;
    try {
      double a0 = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 1;
      a0 = in__.template read<local_scalar_t__>();
      double b0 = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 2;
      b0 = in__.template read<local_scalar_t__>();
      std::vector<double> a1 =
        std::vector<double>(G, std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 3;
      a1 = in__.template read<std::vector<local_scalar_t__>>(G);
      std::vector<double> b1 =
        std::vector<double>(G, std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 4;
      b1 = in__.template read<std::vector<local_scalar_t__>>(G);
      std::vector<double> a =
        std::vector<double>(K, std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 5;
      a = in__.template read<std::vector<local_scalar_t__>>(K);
      std::vector<double> b =
        std::vector<double>(K, std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 6;
      b = in__.template read<std::vector<local_scalar_t__>>(K);
      double s_ag = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 7;
      s_ag = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(0,
               lp__);
      double s_bg = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 8;
      s_bg = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(0,
               lp__);
      double s_a = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 9;
      s_a = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(0,
              lp__);
      double s_b = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 10;
      s_b = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(0,
              lp__);
      double s_Y = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 11;
      s_Y = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(0,
              lp__);
      out__.write(a0);
      out__.write(b0);
      out__.write(a1);
      out__.write(b1);
      out__.write(a);
      out__.write(b);
      out__.write(s_ag);
      out__.write(s_bg);
      out__.write(s_a);
      out__.write(s_b);
      out__.write(s_Y);
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
      local_scalar_t__ a0 = DUMMY_VAR__;
      current_statement__ = 1;
      a0 = in__.read<local_scalar_t__>();
      out__.write(a0);
      local_scalar_t__ b0 = DUMMY_VAR__;
      current_statement__ = 2;
      b0 = in__.read<local_scalar_t__>();
      out__.write(b0);
      std::vector<local_scalar_t__> a1 =
        std::vector<local_scalar_t__>(G, DUMMY_VAR__);
      current_statement__ = 3;
      stan::model::assign(a1, in__.read<std::vector<local_scalar_t__>>(G),
        "assigning variable a1");
      out__.write(a1);
      std::vector<local_scalar_t__> b1 =
        std::vector<local_scalar_t__>(G, DUMMY_VAR__);
      current_statement__ = 4;
      stan::model::assign(b1, in__.read<std::vector<local_scalar_t__>>(G),
        "assigning variable b1");
      out__.write(b1);
      std::vector<local_scalar_t__> a =
        std::vector<local_scalar_t__>(K, DUMMY_VAR__);
      current_statement__ = 5;
      stan::model::assign(a, in__.read<std::vector<local_scalar_t__>>(K),
        "assigning variable a");
      out__.write(a);
      std::vector<local_scalar_t__> b =
        std::vector<local_scalar_t__>(K, DUMMY_VAR__);
      current_statement__ = 6;
      stan::model::assign(b, in__.read<std::vector<local_scalar_t__>>(K),
        "assigning variable b");
      out__.write(b);
      local_scalar_t__ s_ag = DUMMY_VAR__;
      current_statement__ = 7;
      s_ag = in__.read<local_scalar_t__>();
      out__.write_free_lb(0, s_ag);
      local_scalar_t__ s_bg = DUMMY_VAR__;
      current_statement__ = 8;
      s_bg = in__.read<local_scalar_t__>();
      out__.write_free_lb(0, s_bg);
      local_scalar_t__ s_a = DUMMY_VAR__;
      current_statement__ = 9;
      s_a = in__.read<local_scalar_t__>();
      out__.write_free_lb(0, s_a);
      local_scalar_t__ s_b = DUMMY_VAR__;
      current_statement__ = 10;
      s_b = in__.read<local_scalar_t__>();
      out__.write_free_lb(0, s_b);
      local_scalar_t__ s_Y = DUMMY_VAR__;
      current_statement__ = 11;
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
      context__.validate_dims("parameter initialization", "a0", "double",
        std::vector<size_t>{});
      current_statement__ = 2;
      context__.validate_dims("parameter initialization", "b0", "double",
        std::vector<size_t>{});
      current_statement__ = 3;
      context__.validate_dims("parameter initialization", "a1", "double",
        std::vector<size_t>{static_cast<size_t>(G)});
      current_statement__ = 4;
      context__.validate_dims("parameter initialization", "b1", "double",
        std::vector<size_t>{static_cast<size_t>(G)});
      current_statement__ = 5;
      context__.validate_dims("parameter initialization", "a", "double",
        std::vector<size_t>{static_cast<size_t>(K)});
      current_statement__ = 6;
      context__.validate_dims("parameter initialization", "b", "double",
        std::vector<size_t>{static_cast<size_t>(K)});
      current_statement__ = 7;
      context__.validate_dims("parameter initialization", "s_ag", "double",
        std::vector<size_t>{});
      current_statement__ = 8;
      context__.validate_dims("parameter initialization", "s_bg", "double",
        std::vector<size_t>{});
      current_statement__ = 9;
      context__.validate_dims("parameter initialization", "s_a", "double",
        std::vector<size_t>{});
      current_statement__ = 10;
      context__.validate_dims("parameter initialization", "s_b", "double",
        std::vector<size_t>{});
      current_statement__ = 11;
      context__.validate_dims("parameter initialization", "s_Y", "double",
        std::vector<size_t>{});
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      local_scalar_t__ a0 = DUMMY_VAR__;
      current_statement__ = 1;
      a0 = context__.vals_r("a0")[(1 - 1)];
      out__.write(a0);
      local_scalar_t__ b0 = DUMMY_VAR__;
      current_statement__ = 2;
      b0 = context__.vals_r("b0")[(1 - 1)];
      out__.write(b0);
      std::vector<local_scalar_t__> a1 =
        std::vector<local_scalar_t__>(G, DUMMY_VAR__);
      current_statement__ = 3;
      a1 = context__.vals_r("a1");
      out__.write(a1);
      std::vector<local_scalar_t__> b1 =
        std::vector<local_scalar_t__>(G, DUMMY_VAR__);
      current_statement__ = 4;
      b1 = context__.vals_r("b1");
      out__.write(b1);
      std::vector<local_scalar_t__> a =
        std::vector<local_scalar_t__>(K, DUMMY_VAR__);
      current_statement__ = 5;
      a = context__.vals_r("a");
      out__.write(a);
      std::vector<local_scalar_t__> b =
        std::vector<local_scalar_t__>(K, DUMMY_VAR__);
      current_statement__ = 6;
      b = context__.vals_r("b");
      out__.write(b);
      local_scalar_t__ s_ag = DUMMY_VAR__;
      current_statement__ = 7;
      s_ag = context__.vals_r("s_ag")[(1 - 1)];
      out__.write_free_lb(0, s_ag);
      local_scalar_t__ s_bg = DUMMY_VAR__;
      current_statement__ = 8;
      s_bg = context__.vals_r("s_bg")[(1 - 1)];
      out__.write_free_lb(0, s_bg);
      local_scalar_t__ s_a = DUMMY_VAR__;
      current_statement__ = 9;
      s_a = context__.vals_r("s_a")[(1 - 1)];
      out__.write_free_lb(0, s_a);
      local_scalar_t__ s_b = DUMMY_VAR__;
      current_statement__ = 10;
      s_b = context__.vals_r("s_b")[(1 - 1)];
      out__.write_free_lb(0, s_b);
      local_scalar_t__ s_Y = DUMMY_VAR__;
      current_statement__ = 11;
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
    names__ = std::vector<std::string>{"a0", "b0", "a1", "b1", "a", "b",
                "s_ag", "s_bg", "s_a", "s_b", "s_Y"};
    if (emit_transformed_parameters__) {}
    if (emit_generated_quantities__) {}
  }
  inline void
  get_dims(std::vector<std::vector<size_t>>& dimss__, const bool
           emit_transformed_parameters__ = true, const bool
           emit_generated_quantities__ = true) const {
    dimss__ = std::vector<std::vector<size_t>>{std::vector<size_t>{},
                std::vector<size_t>{},
                std::vector<size_t>{static_cast<size_t>(G)},
                std::vector<size_t>{static_cast<size_t>(G)},
                std::vector<size_t>{static_cast<size_t>(K)},
                std::vector<size_t>{static_cast<size_t>(K)},
                std::vector<size_t>{}, std::vector<size_t>{},
                std::vector<size_t>{}, std::vector<size_t>{},
                std::vector<size_t>{}};
    if (emit_transformed_parameters__) {}
    if (emit_generated_quantities__) {}
  }
  inline void
  constrained_param_names(std::vector<std::string>& param_names__, bool
                          emit_transformed_parameters__ = true, bool
                          emit_generated_quantities__ = true) const final {
    param_names__.emplace_back(std::string() + "a0");
    param_names__.emplace_back(std::string() + "b0");
    for (int sym1__ = 1; sym1__ <= G; ++sym1__) {
      param_names__.emplace_back(std::string() + "a1" + '.' +
        std::to_string(sym1__));
    }
    for (int sym1__ = 1; sym1__ <= G; ++sym1__) {
      param_names__.emplace_back(std::string() + "b1" + '.' +
        std::to_string(sym1__));
    }
    for (int sym1__ = 1; sym1__ <= K; ++sym1__) {
      param_names__.emplace_back(std::string() + "a" + '.' +
        std::to_string(sym1__));
    }
    for (int sym1__ = 1; sym1__ <= K; ++sym1__) {
      param_names__.emplace_back(std::string() + "b" + '.' +
        std::to_string(sym1__));
    }
    param_names__.emplace_back(std::string() + "s_ag");
    param_names__.emplace_back(std::string() + "s_bg");
    param_names__.emplace_back(std::string() + "s_a");
    param_names__.emplace_back(std::string() + "s_b");
    param_names__.emplace_back(std::string() + "s_Y");
    if (emit_transformed_parameters__) {}
    if (emit_generated_quantities__) {}
  }
  inline void
  unconstrained_param_names(std::vector<std::string>& param_names__, bool
                            emit_transformed_parameters__ = true, bool
                            emit_generated_quantities__ = true) const final {
    param_names__.emplace_back(std::string() + "a0");
    param_names__.emplace_back(std::string() + "b0");
    for (int sym1__ = 1; sym1__ <= G; ++sym1__) {
      param_names__.emplace_back(std::string() + "a1" + '.' +
        std::to_string(sym1__));
    }
    for (int sym1__ = 1; sym1__ <= G; ++sym1__) {
      param_names__.emplace_back(std::string() + "b1" + '.' +
        std::to_string(sym1__));
    }
    for (int sym1__ = 1; sym1__ <= K; ++sym1__) {
      param_names__.emplace_back(std::string() + "a" + '.' +
        std::to_string(sym1__));
    }
    for (int sym1__ = 1; sym1__ <= K; ++sym1__) {
      param_names__.emplace_back(std::string() + "b" + '.' +
        std::to_string(sym1__));
    }
    param_names__.emplace_back(std::string() + "s_ag");
    param_names__.emplace_back(std::string() + "s_bg");
    param_names__.emplace_back(std::string() + "s_a");
    param_names__.emplace_back(std::string() + "s_b");
    param_names__.emplace_back(std::string() + "s_Y");
    if (emit_transformed_parameters__) {}
    if (emit_generated_quantities__) {}
  }
  inline std::string get_constrained_sizedtypes() const {
    return std::string("[{\"name\":\"a0\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"b0\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"a1\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(G) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"parameters\"},{\"name\":\"b1\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(G) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"parameters\"},{\"name\":\"a\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(K) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"parameters\"},{\"name\":\"b\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(K) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"parameters\"},{\"name\":\"s_ag\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"s_bg\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"s_a\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"s_b\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"s_Y\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"}]");
  }
  inline std::string get_unconstrained_sizedtypes() const {
    return std::string("[{\"name\":\"a0\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"b0\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"a1\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(G) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"parameters\"},{\"name\":\"b1\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(G) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"parameters\"},{\"name\":\"a\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(K) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"parameters\"},{\"name\":\"b\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(K) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"parameters\"},{\"name\":\"s_ag\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"s_bg\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"s_a\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"s_b\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"s_Y\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"}]");
  }
  // Begin method overload boilerplate
  template <typename RNG> inline void
  write_array(RNG& base_rng, Eigen::Matrix<double,-1,1>& params_r,
              Eigen::Matrix<double,-1,1>& vars, const bool
              emit_transformed_parameters = true, const bool
              emit_generated_quantities = true, std::ostream*
              pstream = nullptr) const {
    const size_t num_params__ = ((((((((((1 + 1) + G) + G) + K) + K) + 1) +
      1) + 1) + 1) + 1);
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
    const size_t num_params__ = ((((((((((1 + 1) + G) + G) + K) + K) + 1) +
      1) + 1) + 1) + 1);
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
using stan_model = model8_5_model_namespace::model8_5_model;
#ifndef USING_R
// Boilerplate
stan::model::model_base&
new_model(stan::io::var_context& data_context, unsigned int seed,
          std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}
stan::math::profile_map& get_stan_profile_data() {
  return model8_5_model_namespace::profiles__;
}
#endif