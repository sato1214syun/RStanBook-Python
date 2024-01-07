// Code generated by stanc v2.32.2
#include <stan/model/model_header.hpp>
namespace model10_6_model_namespace {
using stan::model::model_base_crtp;
using namespace stan::math;
stan::math::profile_map profiles__;
static constexpr std::array<const char*, 35> locations_array__ =
  {" (found before start of program)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap10/model/model10-6.stan', line 10, column 2 to column 24)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap10/model/model10-6.stan', line 11, column 2 to column 16)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap10/model/model10-6.stan', line 12, column 2 to column 20)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap10/model/model10-6.stan', line 13, column 2 to column 20)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap10/model/model10-6.stan', line 14, column 2 to column 30)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap10/model/model10-6.stan', line 15, column 2 to column 20)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap10/model/model10-6.stan', line 19, column 2 to column 14)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap10/model/model10-6.stan', line 20, column 2 to column 14)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap10/model/model10-6.stan', line 21, column 2 to column 18)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap10/model/model10-6.stan', line 23, column 4 to column 19)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap10/model/model10-6.stan', line 24, column 4 to column 19)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap10/model/model10-6.stan', line 22, column 17 to line 25, column 3)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap10/model/model10-6.stan', line 22, column 2 to line 25, column 3)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap10/model/model10-6.stan', line 26, column 2 to column 25)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap10/model/model10-6.stan', line 26, column 26 to column 49)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap10/model/model10-6.stan', line 27, column 2 to column 25)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap10/model/model10-6.stan', line 27, column 26 to column 49)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap10/model/model10-6.stan', line 31, column 2 to column 28)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap10/model/model10-6.stan', line 32, column 2 to column 26)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap10/model/model10-6.stan', line 33, column 2 to column 29)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap10/model/model10-6.stan', line 34, column 2 to column 28)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap10/model/model10-6.stan', line 35, column 2 to column 30)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap10/model/model10-6.stan', line 36, column 2 to column 40)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap10/model/model10-6.stan', line 2, column 2 to column 8)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap10/model/model10-6.stan', line 3, column 2 to column 8)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap10/model/model10-6.stan', line 4, column 9 to column 10)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap10/model/model10-6.stan', line 4, column 2 to column 14)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap10/model/model10-6.stan', line 5, column 9 to column 10)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap10/model/model10-6.stan', line 5, column 2 to column 14)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap10/model/model10-6.stan', line 6, column 8 to column 9)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap10/model/model10-6.stan', line 6, column 2 to column 37)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap10/model/model10-6.stan', line 10, column 8 to column 9)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap10/model/model10-6.stan', line 19, column 9 to column 10)",
  " (in '/Users/sean/Documents/myscript/python-bayes/src/python_bayes/chap10/model/model10-6.stan', line 20, column 9 to column 10)"};
class model10_6_model final : public model_base_crtp<model10_6_model> {
 private:
  int N;
  int K;
  Eigen::Matrix<double,-1,1> X_data__;
  Eigen::Matrix<double,-1,1> Y_data__;
  std::vector<int> KID;
  Eigen::Map<Eigen::Matrix<double,-1,1>> X{nullptr, 0};
  Eigen::Map<Eigen::Matrix<double,-1,1>> Y{nullptr, 0};
 public:
  ~model10_6_model() {}
  model10_6_model(stan::io::var_context& context__, unsigned int
                  random_seed__ = 0, std::ostream* pstream__ = nullptr)
      : model_base_crtp(0) {
    int current_statement__ = 0;
    using local_scalar_t__ = double;
    boost::ecuyer1988 base_rng__ =
      stan::services::util::create_rng(random_seed__, 0);
    // suppress unused var warning
    (void) base_rng__;
    static constexpr const char* function__ =
      "model10_6_model_namespace::model10_6_model";
    // suppress unused var warning
    (void) function__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      current_statement__ = 24;
      context__.validate_dims("data initialization", "N", "int",
        std::vector<size_t>{});
      N = std::numeric_limits<int>::min();
      current_statement__ = 24;
      N = context__.vals_i("N")[(1 - 1)];
      current_statement__ = 25;
      context__.validate_dims("data initialization", "K", "int",
        std::vector<size_t>{});
      K = std::numeric_limits<int>::min();
      current_statement__ = 25;
      K = context__.vals_i("K")[(1 - 1)];
      current_statement__ = 26;
      stan::math::validate_non_negative_index("X", "N", N);
      current_statement__ = 27;
      context__.validate_dims("data initialization", "X", "double",
        std::vector<size_t>{static_cast<size_t>(N)});
      X_data__ = Eigen::Matrix<double,-1,1>::Constant(N,
                   std::numeric_limits<double>::quiet_NaN());
      new (&X) Eigen::Map<Eigen::Matrix<double,-1,1>>(X_data__.data(), N);
      {
        std::vector<local_scalar_t__> X_flat__;
        current_statement__ = 27;
        X_flat__ = context__.vals_r("X");
        current_statement__ = 27;
        pos__ = 1;
        current_statement__ = 27;
        for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
          current_statement__ = 27;
          stan::model::assign(X, X_flat__[(pos__ - 1)],
            "assigning variable X", stan::model::index_uni(sym1__));
          current_statement__ = 27;
          pos__ = (pos__ + 1);
        }
      }
      current_statement__ = 28;
      stan::math::validate_non_negative_index("Y", "N", N);
      current_statement__ = 29;
      context__.validate_dims("data initialization", "Y", "double",
        std::vector<size_t>{static_cast<size_t>(N)});
      Y_data__ = Eigen::Matrix<double,-1,1>::Constant(N,
                   std::numeric_limits<double>::quiet_NaN());
      new (&Y) Eigen::Map<Eigen::Matrix<double,-1,1>>(Y_data__.data(), N);
      {
        std::vector<local_scalar_t__> Y_flat__;
        current_statement__ = 29;
        Y_flat__ = context__.vals_r("Y");
        current_statement__ = 29;
        pos__ = 1;
        current_statement__ = 29;
        for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
          current_statement__ = 29;
          stan::model::assign(Y, Y_flat__[(pos__ - 1)],
            "assigning variable Y", stan::model::index_uni(sym1__));
          current_statement__ = 29;
          pos__ = (pos__ + 1);
        }
      }
      current_statement__ = 30;
      stan::math::validate_non_negative_index("KID", "N", N);
      current_statement__ = 31;
      context__.validate_dims("data initialization", "KID", "int",
        std::vector<size_t>{static_cast<size_t>(N)});
      KID = std::vector<int>(N, std::numeric_limits<int>::min());
      current_statement__ = 31;
      KID = context__.vals_i("KID");
      current_statement__ = 31;
      stan::math::check_greater_or_equal(function__, "KID", KID, 1);
      current_statement__ = 31;
      stan::math::check_less_or_equal(function__, "KID", KID, K);
      current_statement__ = 32;
      stan::math::validate_non_negative_index("ab", "K", K);
      current_statement__ = 33;
      stan::math::validate_non_negative_index("a", "K", K);
      current_statement__ = 34;
      stan::math::validate_non_negative_index("b", "K", K);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    num_params_r__ = (K * 2) + 2 + 1 + 1 + 1 + 1;
  }
  inline std::string model_name() const final {
    return "model10_6_model";
  }
  inline std::vector<std::string> model_compile_info() const noexcept {
    return std::vector<std::string>{"stanc_version = stanc3 v2.32.2",
             "stancflags = --filename-in-msg=model10-6.stan"};
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
      "model10_6_model_namespace::log_prob";
    // suppress unused var warning
    (void) function__;
    try {
      std::vector<Eigen::Matrix<local_scalar_t__,-1,1>> ab =
        std::vector<Eigen::Matrix<local_scalar_t__,-1,1>>(K,
          Eigen::Matrix<local_scalar_t__,-1,1>::Constant(2, DUMMY_VAR__));
      current_statement__ = 1;
      ab = in__.template read<
             std::vector<Eigen::Matrix<local_scalar_t__,-1,1>>>(K, 2);
      Eigen::Matrix<local_scalar_t__,-1,1> ab0 =
        Eigen::Matrix<local_scalar_t__,-1,1>::Constant(2, DUMMY_VAR__);
      current_statement__ = 2;
      ab0 = in__.template read<Eigen::Matrix<local_scalar_t__,-1,1>>(2);
      local_scalar_t__ s_a = DUMMY_VAR__;
      current_statement__ = 3;
      s_a = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(0,
              lp__);
      local_scalar_t__ s_b = DUMMY_VAR__;
      current_statement__ = 4;
      s_b = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(0,
              lp__);
      local_scalar_t__ rho = DUMMY_VAR__;
      current_statement__ = 5;
      rho = in__.template read_constrain_lub<local_scalar_t__,
              jacobian__>(-1, 1, lp__);
      local_scalar_t__ s_Y = DUMMY_VAR__;
      current_statement__ = 6;
      s_Y = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(0,
              lp__);
      Eigen::Matrix<local_scalar_t__,-1,1> a =
        Eigen::Matrix<local_scalar_t__,-1,1>::Constant(K, DUMMY_VAR__);
      Eigen::Matrix<local_scalar_t__,-1,1> b =
        Eigen::Matrix<local_scalar_t__,-1,1>::Constant(K, DUMMY_VAR__);
      Eigen::Matrix<local_scalar_t__,-1,-1> cov =
        Eigen::Matrix<local_scalar_t__,-1,-1>::Constant(2, 2, DUMMY_VAR__);
      current_statement__ = 13;
      for (int k = 1; k <= K; ++k) {
        current_statement__ = 10;
        stan::model::assign(a,
          stan::model::rvalue(ab, "ab", stan::model::index_uni(k),
            stan::model::index_uni(1)), "assigning variable a",
          stan::model::index_uni(k));
        current_statement__ = 11;
        stan::model::assign(b,
          stan::model::rvalue(ab, "ab", stan::model::index_uni(k),
            stan::model::index_uni(2)), "assigning variable b",
          stan::model::index_uni(k));
      }
      current_statement__ = 14;
      stan::model::assign(cov, stan::math::square(s_a),
        "assigning variable cov", stan::model::index_uni(1),
        stan::model::index_uni(1));
      current_statement__ = 15;
      stan::model::assign(cov, ((s_a * s_b) * rho), "assigning variable cov",
        stan::model::index_uni(1), stan::model::index_uni(2));
      current_statement__ = 16;
      stan::model::assign(cov, ((s_a * s_b) * rho), "assigning variable cov",
        stan::model::index_uni(2), stan::model::index_uni(1));
      current_statement__ = 17;
      stan::model::assign(cov, stan::math::square(s_b),
        "assigning variable cov", stan::model::index_uni(2),
        stan::model::index_uni(2));
      {
        current_statement__ = 18;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(
                         stan::model::rvalue(ab0, "ab0",
                           stan::model::index_uni(1)), 400, 200));
        current_statement__ = 19;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(
                         stan::model::rvalue(ab0, "ab0",
                           stan::model::index_uni(2)), 15, 15));
        current_statement__ = 20;
        lp_accum__.add(stan::math::student_t_lpdf<propto__>(s_a, 4, 0, 200));
        current_statement__ = 21;
        lp_accum__.add(stan::math::student_t_lpdf<propto__>(s_b, 4, 0, 20));
        current_statement__ = 22;
        lp_accum__.add(stan::math::multi_normal_lpdf<propto__>(ab, ab0, cov));
        current_statement__ = 23;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(Y,
                         stan::math::add(
                           stan::model::rvalue(a, "a",
                             stan::model::index_multi(KID)),
                           stan::math::elt_multiply(
                             stan::model::rvalue(b, "b",
                               stan::model::index_multi(KID)), X)), s_Y));
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
      "model10_6_model_namespace::write_array";
    // suppress unused var warning
    (void) function__;
    try {
      std::vector<Eigen::Matrix<double,-1,1>> ab =
        std::vector<Eigen::Matrix<double,-1,1>>(K,
          Eigen::Matrix<double,-1,1>::Constant(2,
            std::numeric_limits<double>::quiet_NaN()));
      current_statement__ = 1;
      ab = in__.template read<
             std::vector<Eigen::Matrix<local_scalar_t__,-1,1>>>(K, 2);
      Eigen::Matrix<double,-1,1> ab0 =
        Eigen::Matrix<double,-1,1>::Constant(2,
          std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 2;
      ab0 = in__.template read<Eigen::Matrix<local_scalar_t__,-1,1>>(2);
      double s_a = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 3;
      s_a = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(0,
              lp__);
      double s_b = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 4;
      s_b = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(0,
              lp__);
      double rho = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 5;
      rho = in__.template read_constrain_lub<local_scalar_t__,
              jacobian__>(-1, 1, lp__);
      double s_Y = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 6;
      s_Y = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(0,
              lp__);
      Eigen::Matrix<double,-1,1> a =
        Eigen::Matrix<double,-1,1>::Constant(K,
          std::numeric_limits<double>::quiet_NaN());
      Eigen::Matrix<double,-1,1> b =
        Eigen::Matrix<double,-1,1>::Constant(K,
          std::numeric_limits<double>::quiet_NaN());
      Eigen::Matrix<double,-1,-1> cov =
        Eigen::Matrix<double,-1,-1>::Constant(2, 2,
          std::numeric_limits<double>::quiet_NaN());
      for (int sym1__ = 1; sym1__ <= 2; ++sym1__) {
        for (int sym2__ = 1; sym2__ <= K; ++sym2__) {
          out__.write(ab[(sym2__ - 1)][(sym1__ - 1)]);
        }
      }
      out__.write(ab0);
      out__.write(s_a);
      out__.write(s_b);
      out__.write(rho);
      out__.write(s_Y);
      if (stan::math::logical_negation(
            (stan::math::primitive_value(emit_transformed_parameters__) ||
            stan::math::primitive_value(emit_generated_quantities__)))) {
        return ;
      }
      current_statement__ = 13;
      for (int k = 1; k <= K; ++k) {
        current_statement__ = 10;
        stan::model::assign(a,
          stan::model::rvalue(ab, "ab", stan::model::index_uni(k),
            stan::model::index_uni(1)), "assigning variable a",
          stan::model::index_uni(k));
        current_statement__ = 11;
        stan::model::assign(b,
          stan::model::rvalue(ab, "ab", stan::model::index_uni(k),
            stan::model::index_uni(2)), "assigning variable b",
          stan::model::index_uni(k));
      }
      current_statement__ = 14;
      stan::model::assign(cov, stan::math::square(s_a),
        "assigning variable cov", stan::model::index_uni(1),
        stan::model::index_uni(1));
      current_statement__ = 15;
      stan::model::assign(cov, ((s_a * s_b) * rho), "assigning variable cov",
        stan::model::index_uni(1), stan::model::index_uni(2));
      current_statement__ = 16;
      stan::model::assign(cov, ((s_a * s_b) * rho), "assigning variable cov",
        stan::model::index_uni(2), stan::model::index_uni(1));
      current_statement__ = 17;
      stan::model::assign(cov, stan::math::square(s_b),
        "assigning variable cov", stan::model::index_uni(2),
        stan::model::index_uni(2));
      if (emit_transformed_parameters__) {
        out__.write(a);
        out__.write(b);
        out__.write(cov);
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
      std::vector<Eigen::Matrix<local_scalar_t__,-1,1>> ab =
        std::vector<Eigen::Matrix<local_scalar_t__,-1,1>>(K,
          Eigen::Matrix<local_scalar_t__,-1,1>::Constant(2, DUMMY_VAR__));
      current_statement__ = 1;
      for (int sym1__ = 1; sym1__ <= 2; ++sym1__) {
        current_statement__ = 1;
        for (int sym2__ = 1; sym2__ <= K; ++sym2__) {
          current_statement__ = 1;
          stan::model::assign(ab, in__.read<local_scalar_t__>(),
            "assigning variable ab", stan::model::index_uni(sym2__),
            stan::model::index_uni(sym1__));
        }
      }
      out__.write(ab);
      Eigen::Matrix<local_scalar_t__,-1,1> ab0 =
        Eigen::Matrix<local_scalar_t__,-1,1>::Constant(2, DUMMY_VAR__);
      current_statement__ = 2;
      stan::model::assign(ab0,
        in__.read<Eigen::Matrix<local_scalar_t__,-1,1>>(2),
        "assigning variable ab0");
      out__.write(ab0);
      local_scalar_t__ s_a = DUMMY_VAR__;
      current_statement__ = 3;
      s_a = in__.read<local_scalar_t__>();
      out__.write_free_lb(0, s_a);
      local_scalar_t__ s_b = DUMMY_VAR__;
      current_statement__ = 4;
      s_b = in__.read<local_scalar_t__>();
      out__.write_free_lb(0, s_b);
      local_scalar_t__ rho = DUMMY_VAR__;
      current_statement__ = 5;
      rho = in__.read<local_scalar_t__>();
      out__.write_free_lub(-1, 1, rho);
      local_scalar_t__ s_Y = DUMMY_VAR__;
      current_statement__ = 6;
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
      context__.validate_dims("parameter initialization", "ab", "double",
        std::vector<size_t>{static_cast<size_t>(K), static_cast<size_t>(2)});
      current_statement__ = 2;
      context__.validate_dims("parameter initialization", "ab0", "double",
        std::vector<size_t>{static_cast<size_t>(2)});
      current_statement__ = 3;
      context__.validate_dims("parameter initialization", "s_a", "double",
        std::vector<size_t>{});
      current_statement__ = 4;
      context__.validate_dims("parameter initialization", "s_b", "double",
        std::vector<size_t>{});
      current_statement__ = 5;
      context__.validate_dims("parameter initialization", "rho", "double",
        std::vector<size_t>{});
      current_statement__ = 6;
      context__.validate_dims("parameter initialization", "s_Y", "double",
        std::vector<size_t>{});
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      std::vector<Eigen::Matrix<local_scalar_t__,-1,1>> ab =
        std::vector<Eigen::Matrix<local_scalar_t__,-1,1>>(K,
          Eigen::Matrix<local_scalar_t__,-1,1>::Constant(2, DUMMY_VAR__));
      {
        std::vector<local_scalar_t__> ab_flat__;
        current_statement__ = 1;
        ab_flat__ = context__.vals_r("ab");
        current_statement__ = 1;
        pos__ = 1;
        current_statement__ = 1;
        for (int sym1__ = 1; sym1__ <= 2; ++sym1__) {
          current_statement__ = 1;
          for (int sym2__ = 1; sym2__ <= K; ++sym2__) {
            current_statement__ = 1;
            stan::model::assign(ab, ab_flat__[(pos__ - 1)],
              "assigning variable ab", stan::model::index_uni(sym2__),
              stan::model::index_uni(sym1__));
            current_statement__ = 1;
            pos__ = (pos__ + 1);
          }
        }
      }
      out__.write(ab);
      Eigen::Matrix<local_scalar_t__,-1,1> ab0 =
        Eigen::Matrix<local_scalar_t__,-1,1>::Constant(2, DUMMY_VAR__);
      {
        std::vector<local_scalar_t__> ab0_flat__;
        current_statement__ = 2;
        ab0_flat__ = context__.vals_r("ab0");
        current_statement__ = 2;
        pos__ = 1;
        current_statement__ = 2;
        for (int sym1__ = 1; sym1__ <= 2; ++sym1__) {
          current_statement__ = 2;
          stan::model::assign(ab0, ab0_flat__[(pos__ - 1)],
            "assigning variable ab0", stan::model::index_uni(sym1__));
          current_statement__ = 2;
          pos__ = (pos__ + 1);
        }
      }
      out__.write(ab0);
      local_scalar_t__ s_a = DUMMY_VAR__;
      current_statement__ = 3;
      s_a = context__.vals_r("s_a")[(1 - 1)];
      out__.write_free_lb(0, s_a);
      local_scalar_t__ s_b = DUMMY_VAR__;
      current_statement__ = 4;
      s_b = context__.vals_r("s_b")[(1 - 1)];
      out__.write_free_lb(0, s_b);
      local_scalar_t__ rho = DUMMY_VAR__;
      current_statement__ = 5;
      rho = context__.vals_r("rho")[(1 - 1)];
      out__.write_free_lub(-1, 1, rho);
      local_scalar_t__ s_Y = DUMMY_VAR__;
      current_statement__ = 6;
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
    names__ = std::vector<std::string>{"ab", "ab0", "s_a", "s_b", "rho",
                "s_Y"};
    if (emit_transformed_parameters__) {
      std::vector<std::string> temp{"a", "b", "cov"};
      names__.reserve(names__.size() + temp.size());
      names__.insert(names__.end(), temp.begin(), temp.end());
    }
    if (emit_generated_quantities__) {}
  }
  inline void
  get_dims(std::vector<std::vector<size_t>>& dimss__, const bool
           emit_transformed_parameters__ = true, const bool
           emit_generated_quantities__ = true) const {
    dimss__ = std::vector<std::vector<size_t>>{std::vector<size_t>{static_cast<
                                                                    size_t>(K),
                                                 static_cast<size_t>(2)},
                std::vector<size_t>{static_cast<size_t>(2)},
                std::vector<size_t>{}, std::vector<size_t>{},
                std::vector<size_t>{}, std::vector<size_t>{}};
    if (emit_transformed_parameters__) {
      std::vector<std::vector<size_t>>
        temp{std::vector<size_t>{static_cast<size_t>(K)},
             std::vector<size_t>{static_cast<size_t>(K)},
             std::vector<size_t>{static_cast<size_t>(2),
               static_cast<size_t>(2)}};
      dimss__.reserve(dimss__.size() + temp.size());
      dimss__.insert(dimss__.end(), temp.begin(), temp.end());
    }
    if (emit_generated_quantities__) {}
  }
  inline void
  constrained_param_names(std::vector<std::string>& param_names__, bool
                          emit_transformed_parameters__ = true, bool
                          emit_generated_quantities__ = true) const final {
    for (int sym1__ = 1; sym1__ <= 2; ++sym1__) {
      for (int sym2__ = 1; sym2__ <= K; ++sym2__) {
        param_names__.emplace_back(std::string() + "ab" + '.' +
          std::to_string(sym2__) + '.' + std::to_string(sym1__));
      }
    }
    for (int sym1__ = 1; sym1__ <= 2; ++sym1__) {
      param_names__.emplace_back(std::string() + "ab0" + '.' +
        std::to_string(sym1__));
    }
    param_names__.emplace_back(std::string() + "s_a");
    param_names__.emplace_back(std::string() + "s_b");
    param_names__.emplace_back(std::string() + "rho");
    param_names__.emplace_back(std::string() + "s_Y");
    if (emit_transformed_parameters__) {
      for (int sym1__ = 1; sym1__ <= K; ++sym1__) {
        param_names__.emplace_back(std::string() + "a" + '.' +
          std::to_string(sym1__));
      }
      for (int sym1__ = 1; sym1__ <= K; ++sym1__) {
        param_names__.emplace_back(std::string() + "b" + '.' +
          std::to_string(sym1__));
      }
      for (int sym1__ = 1; sym1__ <= 2; ++sym1__) {
        for (int sym2__ = 1; sym2__ <= 2; ++sym2__) {
          param_names__.emplace_back(std::string() + "cov" + '.' +
            std::to_string(sym2__) + '.' + std::to_string(sym1__));
        }
      }
    }
    if (emit_generated_quantities__) {}
  }
  inline void
  unconstrained_param_names(std::vector<std::string>& param_names__, bool
                            emit_transformed_parameters__ = true, bool
                            emit_generated_quantities__ = true) const final {
    for (int sym1__ = 1; sym1__ <= 2; ++sym1__) {
      for (int sym2__ = 1; sym2__ <= K; ++sym2__) {
        param_names__.emplace_back(std::string() + "ab" + '.' +
          std::to_string(sym2__) + '.' + std::to_string(sym1__));
      }
    }
    for (int sym1__ = 1; sym1__ <= 2; ++sym1__) {
      param_names__.emplace_back(std::string() + "ab0" + '.' +
        std::to_string(sym1__));
    }
    param_names__.emplace_back(std::string() + "s_a");
    param_names__.emplace_back(std::string() + "s_b");
    param_names__.emplace_back(std::string() + "rho");
    param_names__.emplace_back(std::string() + "s_Y");
    if (emit_transformed_parameters__) {
      for (int sym1__ = 1; sym1__ <= K; ++sym1__) {
        param_names__.emplace_back(std::string() + "a" + '.' +
          std::to_string(sym1__));
      }
      for (int sym1__ = 1; sym1__ <= K; ++sym1__) {
        param_names__.emplace_back(std::string() + "b" + '.' +
          std::to_string(sym1__));
      }
      for (int sym1__ = 1; sym1__ <= 2; ++sym1__) {
        for (int sym2__ = 1; sym2__ <= 2; ++sym2__) {
          param_names__.emplace_back(std::string() + "cov" + '.' +
            std::to_string(sym2__) + '.' + std::to_string(sym1__));
        }
      }
    }
    if (emit_generated_quantities__) {}
  }
  inline std::string get_constrained_sizedtypes() const {
    return std::string("[{\"name\":\"ab\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(K) + ",\"element_type\":{\"name\":\"vector\",\"length\":" + std::to_string(2) + "}},\"block\":\"parameters\"},{\"name\":\"ab0\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(2) + "},\"block\":\"parameters\"},{\"name\":\"s_a\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"s_b\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"rho\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"s_Y\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"a\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(K) + "},\"block\":\"transformed_parameters\"},{\"name\":\"b\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(K) + "},\"block\":\"transformed_parameters\"},{\"name\":\"cov\",\"type\":{\"name\":\"matrix\",\"rows\":" + std::to_string(2) + ",\"cols\":" + std::to_string(2) + "},\"block\":\"transformed_parameters\"}]");
  }
  inline std::string get_unconstrained_sizedtypes() const {
    return std::string("[{\"name\":\"ab\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(K) + ",\"element_type\":{\"name\":\"vector\",\"length\":" + std::to_string(2) + "}},\"block\":\"parameters\"},{\"name\":\"ab0\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(2) + "},\"block\":\"parameters\"},{\"name\":\"s_a\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"s_b\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"rho\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"s_Y\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"a\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(K) + "},\"block\":\"transformed_parameters\"},{\"name\":\"b\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(K) + "},\"block\":\"transformed_parameters\"},{\"name\":\"cov\",\"type\":{\"name\":\"matrix\",\"rows\":" + std::to_string(2) + ",\"cols\":" + std::to_string(2) + "},\"block\":\"transformed_parameters\"}]");
  }
  // Begin method overload boilerplate
  template <typename RNG> inline void
  write_array(RNG& base_rng, Eigen::Matrix<double,-1,1>& params_r,
              Eigen::Matrix<double,-1,1>& vars, const bool
              emit_transformed_parameters = true, const bool
              emit_generated_quantities = true, std::ostream*
              pstream = nullptr) const {
    const size_t num_params__ = ((((((K * 2) + 2) + 1) + 1) + 1) + 1);
    const size_t num_transformed = emit_transformed_parameters * (((K + K) +
      (2 * 2)));
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
    const size_t num_params__ = ((((((K * 2) + 2) + 1) + 1) + 1) + 1);
    const size_t num_transformed = emit_transformed_parameters * (((K + K) +
      (2 * 2)));
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
using stan_model = model10_6_model_namespace::model10_6_model;
#ifndef USING_R
// Boilerplate
stan::model::model_base&
new_model(stan::io::var_context& data_context, unsigned int seed,
          std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}
stan::math::profile_map& get_stan_profile_data() {
  return model10_6_model_namespace::profiles__;
}
#endif