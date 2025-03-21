/// @ref gtx_vec_swizzle
/// @file glm/gtx/vec_swizzle.hpp
///
/// @see core (dependence)
///
/// @defgroup gtx_vec_swizzle GLM_GTX_vec_swizzle
/// @ingroup gtx
///
/// Include <glm/gtx/vec_swizzle.hpp> to use the features of this extension.
///
/// Functions to perform swizzle operation.

#pragma once

#include "../glm.hpp"

#ifndef GLM_ENABLE_EXPERIMENTAL
#error \
    "GLM: GLM_GTX_vec_swizzle is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it."
#elif GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#pragma message("GLM: GLM_GTX_vec_swizzle extension included")
#endif

namespace glm
{
/// @addtogroup gtx_vec_swizzle
/// @{

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> xx(const vec<L, T, Q>& v)
{
    return vec<2, T, Q>(v.x, v.x);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> xy(const vec<L, T, Q>& v)
{
    return vec<2, T, Q>(v.x, v.y);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> xz(const vec<L, T, Q>& v)
{
    return vec<2, T, Q>(v.x, v.z);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> xw(const vec<L, T, Q>& v)
{
    return vec<2, T, Q>(v.x, v.w);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> yx(const vec<L, T, Q>& v)
{
    return vec<2, T, Q>(v.y, v.x);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> yy(const vec<L, T, Q>& v)
{
    return vec<2, T, Q>(v.y, v.y);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> yz(const vec<L, T, Q>& v)
{
    return vec<2, T, Q>(v.y, v.z);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> yw(const vec<L, T, Q>& v)
{
    return vec<2, T, Q>(v.y, v.w);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> zx(const vec<L, T, Q>& v)
{
    return vec<2, T, Q>(v.z, v.x);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> zy(const vec<L, T, Q>& v)
{
    return vec<2, T, Q>(v.z, v.y);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> zz(const vec<L, T, Q>& v)
{
    return vec<2, T, Q>(v.z, v.z);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> zw(const vec<L, T, Q>& v)
{
    return vec<2, T, Q>(v.z, v.w);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> wx(const vec<L, T, Q>& v)
{
    return vec<2, T, Q>(v.w, v.x);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> wy(const vec<L, T, Q>& v)
{
    return vec<2, T, Q>(v.w, v.y);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> wz(const vec<L, T, Q>& v)
{
    return vec<2, T, Q>(v.w, v.z);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> ww(const vec<L, T, Q>& v)
{
    return vec<2, T, Q>(v.w, v.w);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> xxx(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.x, v.x, v.x);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> xxy(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.x, v.x, v.y);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> xxz(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.x, v.x, v.z);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> xxw(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.x, v.x, v.w);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> xyx(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.x, v.y, v.x);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> xyy(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.x, v.y, v.y);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> xyz(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.x, v.y, v.z);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> xyw(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.x, v.y, v.w);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> xzx(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.x, v.z, v.x);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> xzy(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.x, v.z, v.y);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> xzz(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.x, v.z, v.z);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> xzw(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.x, v.z, v.w);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> xwx(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.x, v.w, v.x);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> xwy(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.x, v.w, v.y);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> xwz(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.x, v.w, v.z);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> xww(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.x, v.w, v.w);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> yxx(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.y, v.x, v.x);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> yxy(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.y, v.x, v.y);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> yxz(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.y, v.x, v.z);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> yxw(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.y, v.x, v.w);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> yyx(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.y, v.y, v.x);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> yyy(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.y, v.y, v.y);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> yyz(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.y, v.y, v.z);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> yyw(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.y, v.y, v.w);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> yzx(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.y, v.z, v.x);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> yzy(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.y, v.z, v.y);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> yzz(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.y, v.z, v.z);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> yzw(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.y, v.z, v.w);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> ywx(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.y, v.w, v.x);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> ywy(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.y, v.w, v.y);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> ywz(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.y, v.w, v.z);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> yww(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.y, v.w, v.w);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> zxx(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.z, v.x, v.x);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> zxy(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.z, v.x, v.y);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> zxz(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.z, v.x, v.z);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> zxw(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.z, v.x, v.w);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> zyx(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.z, v.y, v.x);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> zyy(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.z, v.y, v.y);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> zyz(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.z, v.y, v.z);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> zyw(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.z, v.y, v.w);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> zzx(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.z, v.z, v.x);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> zzy(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.z, v.z, v.y);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> zzz(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.z, v.z, v.z);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> zzw(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.z, v.z, v.w);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> zwx(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.z, v.w, v.x);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> zwy(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.z, v.w, v.y);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> zwz(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.z, v.w, v.z);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> zww(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.z, v.w, v.w);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> wxx(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.w, v.x, v.x);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> wxy(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.w, v.x, v.y);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> wxz(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.w, v.x, v.z);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> wxw(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.w, v.x, v.w);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> wyx(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.w, v.y, v.x);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> wyy(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.w, v.y, v.y);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> wyz(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.w, v.y, v.z);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> wyw(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.w, v.y, v.w);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> wzx(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.w, v.z, v.x);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> wzy(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.w, v.z, v.y);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> wzz(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.w, v.z, v.z);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> wzw(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.w, v.z, v.w);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> wwx(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.w, v.w, v.x);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> wwy(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.w, v.w, v.y);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> wwz(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.w, v.w, v.z);
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> www(const vec<L, T, Q>& v)
{
    return vec<3, T, Q>(v.w, v.w, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xxxx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.x, v.x, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xxxy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.x, v.x, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xxxz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.x, v.x, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xxxw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.x, v.x, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xxyx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.x, v.y, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xxyy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.x, v.y, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xxyz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.x, v.y, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xxyw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.x, v.y, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xxzx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.x, v.z, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xxzy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.x, v.z, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xxzz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.x, v.z, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xxzw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.x, v.z, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xxwx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.x, v.w, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xxwy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.x, v.w, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xxwz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.x, v.w, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xxww(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.x, v.w, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xyxx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.y, v.x, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xyxy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.y, v.x, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xyxz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.y, v.x, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xyxw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.y, v.x, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xyyx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.y, v.y, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xyyy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.y, v.y, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xyyz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.y, v.y, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xyyw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.y, v.y, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xyzx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.y, v.z, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xyzy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.y, v.z, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xyzz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.y, v.z, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xyzw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.y, v.z, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xywx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.y, v.w, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xywy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.y, v.w, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xywz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.y, v.w, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xyww(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.y, v.w, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xzxx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.z, v.x, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xzxy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.z, v.x, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xzxz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.z, v.x, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xzxw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.z, v.x, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xzyx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.z, v.y, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xzyy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.z, v.y, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xzyz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.z, v.y, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xzyw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.z, v.y, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xzzx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.z, v.z, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xzzy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.z, v.z, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xzzz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.z, v.z, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xzzw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.z, v.z, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xzwx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.z, v.w, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xzwy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.z, v.w, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xzwz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.z, v.w, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xzww(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.z, v.w, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xwxx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.w, v.x, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xwxy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.w, v.x, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xwxz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.w, v.x, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xwxw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.w, v.x, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xwyx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.w, v.y, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xwyy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.w, v.y, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xwyz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.w, v.y, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xwyw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.w, v.y, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xwzx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.w, v.z, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xwzy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.w, v.z, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xwzz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.w, v.z, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xwzw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.w, v.z, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xwwx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.w, v.w, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xwwy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.w, v.w, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xwwz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.w, v.w, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> xwww(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.x, v.w, v.w, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yxxx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.x, v.x, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yxxy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.x, v.x, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yxxz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.x, v.x, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yxxw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.x, v.x, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yxyx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.x, v.y, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yxyy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.x, v.y, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yxyz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.x, v.y, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yxyw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.x, v.y, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yxzx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.x, v.z, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yxzy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.x, v.z, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yxzz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.x, v.z, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yxzw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.x, v.z, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yxwx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.x, v.w, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yxwy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.x, v.w, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yxwz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.x, v.w, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yxww(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.x, v.w, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yyxx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.y, v.x, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yyxy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.y, v.x, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yyxz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.y, v.x, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yyxw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.y, v.x, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yyyx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.y, v.y, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yyyy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.y, v.y, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yyyz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.y, v.y, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yyyw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.y, v.y, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yyzx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.y, v.z, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yyzy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.y, v.z, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yyzz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.y, v.z, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yyzw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.y, v.z, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yywx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.y, v.w, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yywy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.y, v.w, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yywz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.y, v.w, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yyww(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.y, v.w, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yzxx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.z, v.x, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yzxy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.z, v.x, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yzxz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.z, v.x, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yzxw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.z, v.x, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yzyx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.z, v.y, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yzyy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.z, v.y, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yzyz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.z, v.y, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yzyw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.z, v.y, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yzzx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.z, v.z, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yzzy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.z, v.z, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yzzz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.z, v.z, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yzzw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.z, v.z, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yzwx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.z, v.w, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yzwy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.z, v.w, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yzwz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.z, v.w, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> yzww(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.z, v.w, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> ywxx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.w, v.x, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> ywxy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.w, v.x, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> ywxz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.w, v.x, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> ywxw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.w, v.x, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> ywyx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.w, v.y, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> ywyy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.w, v.y, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> ywyz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.w, v.y, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> ywyw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.w, v.y, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> ywzx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.w, v.z, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> ywzy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.w, v.z, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> ywzz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.w, v.z, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> ywzw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.w, v.z, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> ywwx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.w, v.w, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> ywwy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.w, v.w, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> ywwz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.w, v.w, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> ywww(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.y, v.w, v.w, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zxxx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.x, v.x, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zxxy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.x, v.x, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zxxz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.x, v.x, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zxxw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.x, v.x, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zxyx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.x, v.y, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zxyy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.x, v.y, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zxyz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.x, v.y, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zxyw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.x, v.y, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zxzx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.x, v.z, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zxzy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.x, v.z, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zxzz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.x, v.z, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zxzw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.x, v.z, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zxwx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.x, v.w, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zxwy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.x, v.w, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zxwz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.x, v.w, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zxww(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.x, v.w, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zyxx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.y, v.x, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zyxy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.y, v.x, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zyxz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.y, v.x, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zyxw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.y, v.x, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zyyx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.y, v.y, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zyyy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.y, v.y, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zyyz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.y, v.y, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zyyw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.y, v.y, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zyzx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.y, v.z, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zyzy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.y, v.z, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zyzz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.y, v.z, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zyzw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.y, v.z, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zywx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.y, v.w, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zywy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.y, v.w, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zywz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.y, v.w, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zyww(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.y, v.w, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zzxx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.z, v.x, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zzxy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.z, v.x, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zzxz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.z, v.x, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zzxw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.z, v.x, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zzyx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.z, v.y, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zzyy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.z, v.y, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zzyz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.z, v.y, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zzyw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.z, v.y, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zzzx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.z, v.z, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zzzy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.z, v.z, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zzzz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.z, v.z, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zzzw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.z, v.z, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zzwx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.z, v.w, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zzwy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.z, v.w, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zzwz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.z, v.w, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zzww(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.z, v.w, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zwxx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.w, v.x, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zwxy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.w, v.x, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zwxz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.w, v.x, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zwxw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.w, v.x, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zwyx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.w, v.y, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zwyy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.w, v.y, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zwyz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.w, v.y, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zwyw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.w, v.y, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zwzx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.w, v.z, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zwzy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.w, v.z, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zwzz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.w, v.z, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zwzw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.w, v.z, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zwwx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.w, v.w, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zwwy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.w, v.w, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zwwz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.w, v.w, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> zwww(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.z, v.w, v.w, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wxxx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.x, v.x, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wxxy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.x, v.x, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wxxz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.x, v.x, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wxxw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.x, v.x, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wxyx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.x, v.y, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wxyy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.x, v.y, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wxyz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.x, v.y, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wxyw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.x, v.y, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wxzx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.x, v.z, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wxzy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.x, v.z, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wxzz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.x, v.z, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wxzw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.x, v.z, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wxwx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.x, v.w, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wxwy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.x, v.w, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wxwz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.x, v.w, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wxww(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.x, v.w, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wyxx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.y, v.x, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wyxy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.y, v.x, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wyxz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.y, v.x, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wyxw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.y, v.x, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wyyx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.y, v.y, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wyyy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.y, v.y, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wyyz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.y, v.y, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wyyw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.y, v.y, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wyzx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.y, v.z, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wyzy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.y, v.z, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wyzz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.y, v.z, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wyzw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.y, v.z, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wywx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.y, v.w, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wywy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.y, v.w, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wywz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.y, v.w, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wyww(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.y, v.w, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wzxx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.z, v.x, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wzxy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.z, v.x, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wzxz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.z, v.x, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wzxw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.z, v.x, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wzyx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.z, v.y, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wzyy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.z, v.y, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wzyz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.z, v.y, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wzyw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.z, v.y, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wzzx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.z, v.z, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wzzy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.z, v.z, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wzzz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.z, v.z, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wzzw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.z, v.z, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wzwx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.z, v.w, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wzwy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.z, v.w, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wzwz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.z, v.w, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wzww(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.z, v.w, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wwxx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.w, v.x, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wwxy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.w, v.x, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wwxz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.w, v.x, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wwxw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.w, v.x, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wwyx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.w, v.y, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wwyy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.w, v.y, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wwyz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.w, v.y, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wwyw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.w, v.y, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wwzx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.w, v.z, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wwzy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.w, v.z, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wwzz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.w, v.z, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wwzw(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.w, v.z, v.w);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wwwx(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.w, v.w, v.x);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wwwy(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.w, v.w, v.y);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wwwz(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.w, v.w, v.z);
}
template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q> wwww(const vec<4, T, Q>& v)
{
    return vec<4, T, Q>(v.w, v.w, v.w, v.w);
}

/// @}
} //namespace glm
