
#pragma once
#include "mat_common_operators.hpp"
#include "qualifier.hpp"
namespace glm
{


template <length_t R, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR mat<2, R, T, Q> operator-(const mat<2, R, T, Q>& m);

template <length_t R, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR mat<2, R, T, Q>& operator++(mat<2, R, T, Q>& m);

template <length_t R, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR mat<2, R, T, Q>& operator--(mat<2, R, T, Q>& m);

template <length_t R, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR bool operator==(const mat<2, R, T, Q>& m1, const mat<2, R, T, Q>& m2);

template <length_t R, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR mat<2, R, T, Q> operator+(const mat<2, R, T, Q>& m1, const mat<2, R, T, Q>& m2);
template <length_t R, typename T, qualifier Q, typename U>
GLM_FUNC_DECL GLM_CONSTEXPR mat<2, R, T, Q>& operator+=(mat<2, R, T, Q>& m1, const mat<2, R, U, Q>& m2);

template <length_t R, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR mat<2, R, T, Q> operator-(const mat<2, R, T, Q>& m1, const mat<2, R, T, Q>& m2);
template <length_t R, typename T, qualifier Q, typename U>
GLM_FUNC_DECL GLM_CONSTEXPR mat<2, R, T, Q>& operator-=(mat<2, R, T, Q>& m1, const mat<2, R, U, Q>& m2);

template <length_t R, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR mat<2, R, T, Q> operator+(const mat<2, R, T, Q>& m, T scalar);
template <length_t R, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR mat<2, R, T, Q> operator+(T scalar, const mat<2, R, T, Q>& m);

template <length_t R, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR mat<2, R, T, Q> operator-(const mat<2, R, T, Q>& m, T scalar);
template <length_t R, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR mat<2, R, T, Q> operator-(T scalar, const mat<2, R, T, Q>& m);

template <length_t R, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR mat<2, R, T, Q> operator*(const mat<2, R, T, Q>& m, T scalar);
template <length_t R, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR mat<2, R, T, Q> operator*(T scalar, const mat<2, R, T, Q>& m);

template <length_t R, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR mat<2, R, T, Q> operator/(const mat<2, R, T, Q>& m, T scalar);
template <length_t R, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR mat<2, R, T, Q> operator/(T scalar, const mat<2, R, T, Q>& m);

} // namespace glm
#ifndef GLM_EXTERNAL_TEMPLATE
#include "mat2xR_common_operators.inl"
#endif
