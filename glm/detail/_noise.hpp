#pragma once

#include "../common.hpp"

namespace glm
{
namespace detail
{
template <typename T>
GLM_FUNC_QUALIFIER T mod289(const T& x)
{
    return x - floor(x * (static_cast<T>(1.0) / static_cast<T>(289.0))) * static_cast<T>(289.0);
}

template <typename T>
GLM_FUNC_QUALIFIER T permute(const T& x)
{
    return mod289(((x * static_cast<T>(34)) + static_cast<T>(1)) * x);
}

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER vec<L, T, Q> permute(const vec<L, T, Q>& x)
{
    return mod289(((x * static_cast<T>(34)) + static_cast<T>(1)) * x);
}

template <typename T>
GLM_FUNC_QUALIFIER T taylorInvSqrt(const T& r)
{
    return static_cast<T>(1.79284291400159) - static_cast<T>(0.85373472095314) * r;
}

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER vec<L, T, Q> taylorInvSqrt(const vec<L, T, Q>& r)
{
    return static_cast<T>(1.79284291400159) - static_cast<T>(0.85373472095314) * r;
}

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER vec<L, T, Q> fade(const vec<L, T, Q>& t)
{
    return (t * t * t) * (t * (t * static_cast<T>(6) - static_cast<T>(15)) + static_cast<T>(10));
}

} //namespace detail
} //namespace glm
