/// @ref gtc_epsilon

// Dependency:
#include "../common.hpp"
#include "../vector_relational.hpp"

namespace glm
{
GLM_FUNC_QUALIFIER bool epsilonEqual(float x, float y, float epsilon)
{
    return abs(x - y) < epsilon;
}

GLM_FUNC_QUALIFIER bool epsilonEqual(double x, double y, double epsilon)
{
    return abs(x - y) < epsilon;
}

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER vec<L, bool, Q> epsilonEqual(const vec<L, T, Q>& x, const vec<L, T, Q>& y, const T& epsilon)
{
    return lessThan(abs(x - y), vec<L, T, Q>(epsilon));
}

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER vec<L, bool, Q> epsilonEqual(const vec<L, T, Q>& x, const vec<L, T, Q>& y, const vec<L, T, Q>& epsilon)
{
    return lessThan(abs(x - y), vec<L, T, Q>(epsilon));
}

GLM_FUNC_QUALIFIER bool epsilonNotEqual(float x, float y, float epsilon)
{
    return abs(x - y) >= epsilon;
}

GLM_FUNC_QUALIFIER bool epsilonNotEqual(double x, double y, double epsilon)
{
    return abs(x - y) >= epsilon;
}

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER vec<L, bool, Q> epsilonNotEqual(const vec<L, T, Q>& x, const vec<L, T, Q>& y, const T& epsilon)
{
    return greaterThanEqual(abs(x - y), vec<L, T, Q>(epsilon));
}

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER vec<L, bool, Q> epsilonNotEqual(const vec<L, T, Q>& x, const vec<L, T, Q>& y, const vec<L, T, Q>& epsilon)
{
    return greaterThanEqual(abs(x - y), vec<L, T, Q>(epsilon));
}

template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER vec<4, bool, Q> epsilonEqual(const qua<T, Q>& x, const qua<T, Q>& y, const T& epsilon)
{
    vec<4, T, Q> v(x.x - y.x, x.y - y.y, x.z - y.z, x.w - y.w);
    return lessThan(abs(v), vec<4, T, Q>(epsilon));
}

template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER vec<4, bool, Q> epsilonNotEqual(const qua<T, Q>& x, const qua<T, Q>& y, const T& epsilon)
{
    vec<4, T, Q> v(x.x - y.x, x.y - y.y, x.z - y.z, x.w - y.w);
    return greaterThanEqual(abs(v), vec<4, T, Q>(epsilon));
}
} //namespace glm
