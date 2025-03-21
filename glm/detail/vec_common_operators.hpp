#pragma once

#include "qualifier.hpp"

namespace glm
{


template <length_t L, typename T, qualifier Q, typename U, qualifier P>
GLM_FUNC_DECL GLM_CONSTEXPR vec<L, T, Q>& operator+=(vec<L, T, Q>& a, const vec<1, U, P>& b);
template <length_t L, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<L, T, Q> operator+(const vec<L, T, Q>& a, const vec<1, T, Q>& b);
template <length_t L, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<L, T, Q> operator+(const vec<1, T, Q>& a, const vec<L, T, Q>& b);

template <length_t L, typename T, qualifier Q, typename U, qualifier P>
GLM_FUNC_DECL GLM_CONSTEXPR vec<L, T, Q>& operator-=(vec<L, T, Q>& a, const vec<1, U, P>& b);
template <length_t L, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<L, T, Q> operator-(const vec<L, T, Q>& a, const vec<1, T, Q>& b);
template <length_t L, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<L, T, Q> operator-(const vec<1, T, Q>& a, const vec<L, T, Q>& b);

template <length_t L, typename T, qualifier Q, typename U, qualifier P>
GLM_FUNC_DECL GLM_CONSTEXPR vec<L, T, Q>& operator*=(vec<L, T, Q>& a, const vec<1, U, P>& b);
template <length_t L, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<L, T, Q> operator*(const vec<L, T, Q>& a, const vec<1, T, Q>& b);
template <length_t L, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<L, T, Q> operator*(const vec<1, T, Q>& a, const vec<L, T, Q>& b);

template <length_t L, typename T, qualifier Q, typename U, qualifier P>
GLM_FUNC_DECL GLM_CONSTEXPR vec<L, T, Q>& operator/=(vec<L, T, Q>& a, const vec<1, U, P>& b);
template <length_t L, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<L, T, Q> operator/(const vec<L, T, Q>& a, const vec<1, T, Q>& b);
template <length_t L, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<L, T, Q> operator/(const vec<1, T, Q>& a, const vec<L, T, Q>& b);

template <length_t L, typename T, qualifier Q, typename U, qualifier P>
GLM_FUNC_DECL GLM_CONSTEXPR vec<L, T, Q>& operator%=(vec<L, T, Q>& a, const vec<1, U, P>& b);
template <length_t L, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<L, T, Q> operator%(const vec<L, T, Q>& a, const vec<1, T, Q>& b);
template <length_t L, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<L, T, Q> operator%(const vec<1, T, Q>& a, const vec<L, T, Q>& b);

template <length_t L, typename T, qualifier Q, typename U, qualifier P>
GLM_FUNC_DECL GLM_CONSTEXPR vec<L, T, Q>& operator&=(vec<L, T, Q>& a, const vec<1, U, P>& b);
template <length_t L, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<L, T, Q> operator&(const vec<L, T, Q>& a, const vec<1, T, Q>& b);
template <length_t L, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<L, T, Q> operator&(const vec<1, T, Q>& a, const vec<L, T, Q>& b);

template <length_t L, typename T, qualifier Q, typename U, qualifier P>
GLM_FUNC_DECL GLM_CONSTEXPR vec<L, T, Q>& operator|=(vec<L, T, Q>& a, const vec<1, U, P>& b);
template <length_t L, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<L, T, Q> operator|(const vec<L, T, Q>& a, const vec<1, T, Q>& b);
template <length_t L, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<L, T, Q> operator|(const vec<1, T, Q>& a, const vec<L, T, Q>& b);

template <length_t L, typename T, qualifier Q, typename U, qualifier P>
GLM_FUNC_DECL GLM_CONSTEXPR vec<L, T, Q>& operator^=(vec<L, T, Q>& a, const vec<1, U, P>& b);
template <length_t L, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<L, T, Q> operator^(const vec<L, T, Q>& a, const vec<1, T, Q>& b);
template <length_t L, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<L, T, Q> operator^(const vec<1, T, Q>& a, const vec<L, T, Q>& b);

template <length_t L, typename T, qualifier Q, typename U, qualifier P>
GLM_FUNC_DECL GLM_CONSTEXPR vec<L, T, Q>& operator<<=(vec<L, T, Q>& a, const vec<1, U, P>& b);
template <length_t L, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<L, T, Q> operator<<(const vec<L, T, Q>& a, const vec<1, T, Q>& b);
template <length_t L, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<L, T, Q> operator<<(const vec<1, T, Q>& a, const vec<L, T, Q>& b);

template <length_t L, typename T, qualifier Q, typename U, qualifier P>
GLM_FUNC_DECL GLM_CONSTEXPR vec<L, T, Q>& operator>>=(vec<L, T, Q>& a, const vec<1, U, P>& b);
template <length_t L, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<L, T, Q> operator>>(const vec<L, T, Q>& a, const vec<1, T, Q>& b);
template <length_t L, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<L, T, Q> operator>>(const vec<1, T, Q>& a, const vec<L, T, Q>& b);

template <length_t L, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<L, T, Q> operator+(T scalar, const vec<L, T, Q>& v);

template <length_t L, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<L, T, Q> operator*(T scalar, const vec<L, T, Q>& v);

template <length_t L, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<L, T, Q> operator&(T scalar, const vec<L, T, Q>& v);

template <length_t L, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<L, T, Q> operator|(T scalar, const vec<L, T, Q>& v);

template <length_t L, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<L, T, Q> operator^(T scalar, const vec<L, T, Q>& v);


template <length_t L, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<L, T, Q> operator++(vec<L, T, Q>& v, int);

template <length_t L, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<L, T, Q> operator--(vec<L, T, Q>& v, int);

template <length_t L, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<L, T, Q> operator+(const vec<L, T, Q>& v);

template <length_t L, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR bool operator!=(const vec<L, T, Q>& a, const vec<L, T, Q>& b);

} // namespace glm

#ifndef GLM_EXTERNAL_TEMPLATE
#include "vec_common_operators.inl"
#endif