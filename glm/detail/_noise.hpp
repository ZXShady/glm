#pragma once

#include "../common.hpp"

namespace glm
{
namespace detail
{
template <typename T>
GLM_FUNC_QUALIFIER T mod289(const T& x)
{
    return x - floor(x * (T{1} / T{289})) * T{289};
}

template <typename T>
GLM_FUNC_QUALIFIER T permute(const T& x)
{
    return mod289(((x * T{34}) + T{1}) * x);
}

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER vec<L, T, Q> permute(const vec<L, T, Q>& x)
{
    return mod289(((x * T{34}) + T{1}) * x);
}

template <typename T>
GLM_FUNC_QUALIFIER T taylorInvSqrt(const T& r)
{
    return T{1.79284291400159} - T{0.85373472095314} * r;
}

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER vec<L, T, Q> taylorInvSqrt(const vec<L, T, Q>& r)
{
    return T{1.79284291400159} - T{0.85373472095314} * r;
}

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER vec<L, T, Q> fade(const vec<L, T, Q>& t)
{
    return (t * t * t) * (t * (t * T{6} - T{15}) + T{10});
}

} //namespace detail
} //namespace glm
