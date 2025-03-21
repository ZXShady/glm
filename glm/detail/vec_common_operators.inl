
namespace glm
{

template <length_t L, typename T, qualifier Q, typename U, qualifier P>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q>& operator+=(vec<L, T, Q>& a, const vec<1, U, P>& b)
{
    return a += b.x;
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> operator+(const vec<L, T, Q>& a, const vec<1, T, Q>& b)
{
    return a + b.x;
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> operator+(const vec<1, T, Q>& a, const vec<L, T, Q>& b)
{
    return a.x + b;
}

template <length_t L, typename T, qualifier Q, typename U, qualifier P>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q>& operator-=(vec<L, T, Q>& a, const vec<1, U, P>& b)
{
    return a -= b.x;
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> operator-(const vec<L, T, Q>& a, const vec<1, T, Q>& b)
{
    return a - b.x;
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> operator-(const vec<1, T, Q>& a, const vec<L, T, Q>& b)
{
    return a.x - b;
}

template <length_t L, typename T, qualifier Q, typename U, qualifier P>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q>& operator*=(vec<L, T, Q>& a, const vec<1, U, P>& b)
{
    return a *= b.x;
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> operator*(const vec<L, T, Q>& a, const vec<1, T, Q>& b)
{
    return a * b.x;
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> operator*(const vec<1, T, Q>& a, const vec<L, T, Q>& b)
{
    return a.x * b;
}

template <length_t L, typename T, qualifier Q, typename U, qualifier P>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q>& operator/=(vec<L, T, Q>& a, const vec<1, U, P>& b)
{
    return a /= b.x;
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> operator/(const vec<L, T, Q>& a, const vec<1, T, Q>& b)
{
    return a / b.x;
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> operator/(const vec<1, T, Q>& a, const vec<L, T, Q>& b)
{
    return a.x / b;
}

template <length_t L, typename T, qualifier Q, typename U, qualifier P>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q>& operator%=(vec<L, T, Q>& a, const vec<1, U, P>& b)
{
    return a %= b.x;
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> operator%(const vec<L, T, Q>& a, const vec<1, T, Q>& b)
{
    return a % b.x;
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> operator%(const vec<1, T, Q>& a, const vec<L, T, Q>& b)
{
    return a.x % b;
}

template <length_t L, typename T, qualifier Q, typename U, qualifier P>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q>& operator&=(vec<L, T, Q>& a, const vec<1, U, P>& b)
{
    return a &= b.x;
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> operator&(const vec<L, T, Q>& a, const vec<1, T, Q>& b)
{
    return a & b.x;
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> operator&(const vec<1, T, Q>& a, const vec<L, T, Q>& b)
{
    return a.x & b;
}

template <length_t L, typename T, qualifier Q, typename U, qualifier P>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q>& operator|=(vec<L, T, Q>& a, const vec<1, U, P>& b)
{
    return a |= b.x;
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> operator|(const vec<L, T, Q>& a, const vec<1, T, Q>& b)
{
    return a | b.x;
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> operator|(const vec<1, T, Q>& a, const vec<L, T, Q>& b)
{
    return a.x | b;
}

template <length_t L, typename T, qualifier Q, typename U, qualifier P>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q>& operator^=(vec<L, T, Q>& a, const vec<1, U, P>& b)
{
    return a ^= b.x;
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> operator^(const vec<L, T, Q>& a, const vec<1, T, Q>& b)
{
    return a ^ b.x;
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> operator^(const vec<1, T, Q>& a, const vec<L, T, Q>& b)
{
    return a.x ^ b;
}

template <length_t L, typename T, qualifier Q, typename U, qualifier P>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q>& operator<<=(vec<L, T, Q>& a, const vec<1, U, P>& b)
{
    return a <<= b.x;
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> operator<<(const vec<L, T, Q>& a, const vec<1, T, Q>& b)
{
    return a << b.x;
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> operator<<(const vec<1, T, Q>& a, const vec<L, T, Q>& b)
{
    return a.x << b;
}

template <length_t L, typename T, qualifier Q, typename U, qualifier P>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q>& operator>>=(vec<L, T, Q>& a, const vec<1, U, P>& b)
{
    return a >>= b.x;
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> operator>>(const vec<L, T, Q>& a, const vec<1, T, Q>& b)
{
    return a >> b.x;
}
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> operator>>(const vec<1, T, Q>& a, const vec<L, T, Q>& b)
{
    return a.x >> b;
}

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> operator+(T scalar, const vec<L, T, Q>& v)
{
    return v + scalar;
}

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> operator*(T scalar, const vec<L, T, Q>& v)
{
    return v * scalar;
}

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> operator&(T scalar, const vec<L, T, Q>& v)
{
    return v & scalar;
}

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> operator|(T scalar, const vec<L, T, Q>& v)
{
    return v | scalar;
}

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> operator^(T scalar, const vec<L, T, Q>& v)
{
    return v ^ scalar;
}


template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> operator+(const vec<L, T, Q>& v)
{
    return v;
}

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> operator++(vec<L, T, Q>& v, int)
{
    const vec<L, T, Q> Result(v);
    ++v;
    return Result;
}

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> operator--(vec<L, T, Q>& v, int)
{
    const vec<L, T, Q> Result(v);
    --v;
    return Result;
}

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR bool operator!=(const vec<L, T, Q>& a, const vec<L, T, Q>& b)
{
    return !(a == b);
}


} // namespace glm
