
namespace glm
{


template <length_t R, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, R, T, Q> operator-(const mat<2, R, T, Q>& m)
{
    return mat<2, R, T, Q>(-m[0], -m[1]);
}

template <length_t R, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, R, T, Q>& operator++(mat<2, R, T, Q>& m)
{
    ++m[0];
    ++m[1];
    return m;
}

template <length_t R, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, R, T, Q>& operator--(mat<2, R, T, Q>& m)
{
    --m[0];
    --m[1];
    return m;
}

template <length_t R, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR bool operator==(const mat<2, R, T, Q>& m1, const mat<2, R, T, Q>& m2)
{
    return (m1[0] == m2[0]) && (m1[1] == m2[1]);
}

template <length_t R, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, R, T, Q> operator+(const mat<2, R, T, Q>& m1, const mat<2, R, T, Q>& m2)
{
    return mat<2, R, T, Q>(m1[0] + m2[0], m1[1] + m2[1]);
}
template <length_t R, typename T, qualifier Q, typename U>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, R, T, Q>& operator+=(mat<2, R, T, Q>& m1, const mat<2, R, U, Q>& m2)
{
    m1[0] += m2[0];
    m1[1] += m2[1];
    return m1;
}

template <length_t R, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, R, T, Q> operator-(const mat<2, R, T, Q>& m1, const mat<2, R, T, Q>& m2)
{
    return mat<2, R, T, Q>(m1[0] - m2[0], m1[1] - m2[1]);
}
template <length_t R, typename T, qualifier Q, typename U>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, R, T, Q>& operator-=(mat<2, R, T, Q>& m1, const mat<2, R, U, Q>& m2)
{
    m1[0] -= m2[0];
    m1[1] -= m2[1];
    return m1;
}

template <length_t R, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, R, T, Q> operator+(const mat<2, R, T, Q>& m, T scalar)
{
    return mat<2, R, T, Q>(m[0] + scalar, m[1] + scalar);
}
template <length_t R, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, R, T, Q> operator+(T scalar, const mat<2, R, T, Q>& m)
{
    return mat<2, R, T, Q>(scalar + m[0], scalar + m[1]);
}
template <length_t R, typename T, qualifier Q, typename U>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, R, T, Q>& operator+=(mat<2, R, T, Q>& m, U scalar)
{
    m[0] += scalar;
    m[1] += scalar;
    return m;
}

template <length_t R, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, R, T, Q> operator-(const mat<2, R, T, Q>& m, T scalar)
{
    return mat<2, R, T, Q>(m[0] - scalar, m[1] - scalar);
}
template <length_t R, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, R, T, Q> operator-(T scalar, const mat<2, R, T, Q>& m)
{
    return mat<2, R, T, Q>(scalar - m[0], scalar - m[1]);
}
template <length_t R, typename T, qualifier Q, typename U>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, R, T, Q>& operator-=(mat<2, R, T, Q>& m, U scalar)
{
    m[0] -= scalar;
    m[1] -= scalar;
    return m;
}

template <length_t R, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, R, T, Q> operator*(const mat<2, R, T, Q>& m, T scalar)
{
    return mat<2, R, T, Q>(m[0] * scalar, m[1] * scalar);
}
template <length_t R, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, R, T, Q> operator*(T scalar, const mat<2, R, T, Q>& m)
{
    return mat<2, R, T, Q>(scalar * m[0], scalar * m[1]);
}
template <length_t R, typename T, qualifier Q, typename U>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, R, T, Q>& operator*=(mat<2, R, T, Q>& m, U scalar)
{
    m[0] *= scalar;
    m[1] *= scalar;
    return m;
}

template <length_t R, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, R, T, Q> operator/(const mat<2, R, T, Q>& m, T scalar)
{
    return mat<2, R, T, Q>(m[0] / scalar, m[1] / scalar);
}
template <length_t R, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, R, T, Q> operator/(T scalar, const mat<2, R, T, Q>& m)
{
    return mat<2, R, T, Q>(scalar / m[0], scalar / m[1]);
}
template <length_t R, typename T, qualifier Q, typename U>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, R, T, Q>& operator/=(mat<2, R, T, Q>& m, U scalar)
{
    m[0] /= scalar;
    m[1] /= scalar;
    return m;
}

} // namespace glm
