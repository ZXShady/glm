/// @ref ext_vector_relational
/// @file glm/ext/vector_relational.inl

// Dependency:
#include "../common.hpp"
#include "../ext/vector_relational.hpp"

namespace glm
{
template <length_t C, length_t R, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<C, bool, Q> equal(const mat<C, R, T, Q>& a, const mat<C, R, T, Q>& b)
{
    vec<C, bool, Q> Result(true);
    for (length_t i = 0; i < C; ++i)
        Result[i] = all(equal(a[i], b[i]));
    return Result;
}

template <length_t C, length_t R, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<C, bool, Q> equal(const mat<C, R, T, Q>& a, const mat<C, R, T, Q>& b, T Epsilon)
{
    return equal(a, b, vec<C, T, Q>(Epsilon));
}

template <length_t C, length_t R, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<C, bool, Q> equal(const mat<C, R, T, Q>& a,
                                                       const mat<C, R, T, Q>& b,
                                                       const vec<C, T, Q>&    Epsilon)
{
    vec<C, bool, Q> Result(true);
    for (length_t i = 0; i < C; ++i)
        Result[i] = all(equal(a[i], b[i], Epsilon[i]));
    return Result;
}

template <length_t C, length_t R, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<C, bool, Q> notEqual(const mat<C, R, T, Q>& a, const mat<C, R, T, Q>& b)
{
    vec<C, bool, Q> Result(true);
    for (length_t i = 0; i < C; ++i)
        Result[i] = any(notEqual(a[i], b[i]));
    return Result;
}

template <length_t C, length_t R, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<C, bool, Q> notEqual(const mat<C, R, T, Q>& a, const mat<C, R, T, Q>& b, T Epsilon)
{
    return notEqual(a, b, vec<C, T, Q>(Epsilon));
}

template <length_t C, length_t R, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<C, bool, Q> notEqual(const mat<C, R, T, Q>& a,
                                                          const mat<C, R, T, Q>& b,
                                                          const vec<C, T, Q>&    Epsilon)
{
    vec<C, bool, Q> Result(true);
    for (length_t i = 0; i < C; ++i)
        Result[i] = any(notEqual(a[i], b[i], Epsilon[i]));
    return Result;
}

template <length_t C, length_t R, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<C, bool, Q> equal(const mat<C, R, T, Q>& a, const mat<C, R, T, Q>& b, int MaxULPs)
{
    return equal(a, b, vec<C, int, Q>(MaxULPs));
}

template <length_t C, length_t R, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<C, bool, Q> equal(const mat<C, R, T, Q>& a,
                                                       const mat<C, R, T, Q>& b,
                                                       const vec<C, int, Q>&  MaxULPs)
{
    vec<C, bool, Q> Result(true);
    for (length_t i = 0; i < C; ++i)
        Result[i] = all(equal(a[i], b[i], MaxULPs[i]));
    return Result;
}

template <length_t C, length_t R, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<C, bool, Q> notEqual(const mat<C, R, T, Q>& a, const mat<C, R, T, Q>& b, int MaxULPs)
{
    return notEqual(a, b, vec<C, int, Q>(MaxULPs));
}

template <length_t C, length_t R, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<C, bool, Q> notEqual(const mat<C, R, T, Q>& a,
                                                          const mat<C, R, T, Q>& b,
                                                          const vec<C, int, Q>&  MaxULPs)
{
    vec<C, bool, Q> Result(true);
    for (length_t i = 0; i < C; ++i)
        Result[i] = any(notEqual(a[i], b[i], MaxULPs[i]));
    return Result;
}

} //namespace glm
