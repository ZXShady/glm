/// @ref core
/// @file glm/detail/func_common.inl

#include "../vector_relational.hpp"
#include "_vectorize.hpp"
#include "compute_common.hpp"
#include "type_vec1.hpp"
#include "type_vec2.hpp"
#include "type_vec3.hpp"
#include "type_vec4.hpp"
#include <limits>

namespace glm
{
// min
template <typename genType>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR genType min(genType x, genType y)
{
    static_assert(std::numeric_limits<genType>::is_iec559 || GLM_CONFIG_UNRESTRICTED_FLOAT ||
                          std::numeric_limits<genType>::is_integer,
                      "'min' only accept floating-point or integer inputs");
    return (y < x) ? y : x;
}

template <typename T>
struct TMin
{
    T operator()(const T& a, const T& b)
    {
        return min(a, b);
    }
};

// max
template <typename genType>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR genType max(genType x, genType y)
{
    static_assert(std::numeric_limits<genType>::is_iec559 || GLM_CONFIG_UNRESTRICTED_FLOAT ||
                          std::numeric_limits<genType>::is_integer,
                      "'max' only accept floating-point or integer inputs");

    return (x < y) ? y : x;
}

template <typename T>
struct TMax
{
    T operator()(const T& a, const T& b)
    {
        return max(a, b);
    }
};

// abs
GLM_FUNC_QUALIFIER GLM_CONSTEXPR int abs(int x)
{
    const int y = x >> (sizeof(int) * 8 - 1);
    return (x ^ y) - y;
}

template <typename T>
struct TAbs
{
    T operator()(const T& a)
    {
        return abs(a);
    }
};

// round
#if GLM_HAS_CXX11_STL
using ::std::round;
#else
template <typename genType>
GLM_FUNC_QUALIFIER genType round(genType x)
{
    static_assert(std::numeric_limits<genType>::is_iec559 || GLM_CONFIG_UNRESTRICTED_FLOAT,
                      "'round' only accept floating-point inputs");

    return x < static_cast<genType>(0) ? static_cast<genType>(int(x - static_cast<genType>(0.5)))
                                       : static_cast<genType>(int(x + static_cast<genType>(0.5)));
}
#endif

template <typename T>
struct TRound
{
    T operator()(const T& a)
    {
        return round(a);
    }
};

// trunc
#if GLM_HAS_CXX11_STL
using ::std::trunc;
#else
template <typename genType>
GLM_FUNC_QUALIFIER genType trunc(genType x)
{
    static_assert(std::numeric_limits<genType>::is_iec559 || GLM_CONFIG_UNRESTRICTED_FLOAT,
                      "'trunc' only accept floating-point inputs");

    return x < static_cast<genType>(0) ? -std::floor(-x) : std::floor(x);
}
#endif

template <typename T>
struct TTrunc
{
    T operator()(const T& a)
    {
        return trunc(a);
    }
};

template <typename T>
struct TFmod
{
    T operator()(const T& a, const T& b)
    {
        return std::fmod(a, b);
    }
};

} //namespace glm

namespace glm
{
namespace detail
{
template <length_t L, typename T, qualifier Q, bool Aligned>
struct compute_abs_vector
{
    GLM_FUNC_QUALIFIER GLM_CONSTEXPR static vec<L, T, Q> call(const vec<L, T, Q>& x)
    {
        return detail::functor1<vec, L, T, T, Q>::call(abs, x);
    }
};

template <length_t L, typename T, typename U, qualifier Q, bool Aligned>
struct compute_mix_vector
{
    GLM_FUNC_QUALIFIER static vec<L, T, Q> call(const vec<L, T, Q>& x, const vec<L, T, Q>& y, const vec<L, U, Q>& a)
    {
        static_assert(std::numeric_limits<U>::is_iec559 || GLM_CONFIG_UNRESTRICTED_FLOAT || GLM_CONFIG_UNRESTRICTED_GENTYPE,
                          "'mix' only accept floating-point inputs for the interpolator a");

        return vec<L, T, Q>(vec<L, U, Q>(x) * (static_cast<U>(1) - a) + vec<L, U, Q>(y) * a);
    }
};

template <length_t L, typename T, qualifier Q, bool Aligned>
struct compute_mix_vector<L, T, bool, Q, Aligned>
{
    GLM_FUNC_QUALIFIER static vec<L, T, Q> call(const vec<L, T, Q>& x, const vec<L, T, Q>& y, const vec<L, bool, Q>& a)
    {
        vec<L, T, Q> Result(0);
        for (length_t i = 0; i < x.length(); ++i)
            Result[i] = a[i] ? y[i] : x[i];
        return Result;
    }
};

template <length_t L, typename T, typename U, qualifier Q, bool Aligned>
struct compute_mix_scalar
{
    GLM_FUNC_QUALIFIER static vec<L, T, Q> call(const vec<L, T, Q>& x, const vec<L, T, Q>& y, const U& a)
    {
        static_assert(std::numeric_limits<U>::is_iec559 || GLM_CONFIG_UNRESTRICTED_FLOAT || GLM_CONFIG_UNRESTRICTED_GENTYPE,
                          "'mix' only accept floating-point inputs for the interpolator a");

        return vec<L, T, Q>(vec<L, U, Q>(x) * (static_cast<U>(1) - a) + vec<L, U, Q>(y) * a);
    }
};

template <length_t L, typename T, qualifier Q, bool Aligned>
struct compute_mix_scalar<L, T, bool, Q, Aligned>
{
    GLM_FUNC_QUALIFIER static vec<L, T, Q> call(const vec<L, T, Q>& x, const vec<L, T, Q>& y, const bool& a)
    {
        return a ? y : x;
    }
};

template <typename T, typename U>
struct compute_mix
{
    GLM_FUNC_QUALIFIER static T call(const T& x, const T& y, const U& a)
    {
        static_assert(std::numeric_limits<U>::is_iec559 || GLM_CONFIG_UNRESTRICTED_FLOAT || GLM_CONFIG_UNRESTRICTED_GENTYPE,
                          "'mix' only accept floating-point inputs for the interpolator a");

        return static_cast<T>(static_cast<U>(x) * (static_cast<U>(1) - a) + static_cast<U>(y) * a);
    }
};

template <typename T>
struct compute_mix<T, bool>
{
    GLM_FUNC_QUALIFIER static T call(const T& x, const T& y, const bool& a)
    {
        return a ? y : x;
    }
};

template <length_t L, typename T, qualifier Q, bool isFloat, bool Aligned>
struct compute_sign
{
    GLM_FUNC_QUALIFIER static vec<L, T, Q> call(const vec<L, T, Q>& x)
    {
        return vec<L, T, Q>(glm::lessThan(vec<L, T, Q>(0), x)) - vec<L, T, Q>(glm::lessThan(x, vec<L, T, Q>(0)));
    }
};

#if GLM_ARCH == GLM_ARCH_X86
template <length_t L, typename T, qualifier Q, bool Aligned>
struct compute_sign<L, T, Q, false, Aligned>
{
    GLM_FUNC_QUALIFIER static vec<L, T, Q> call(const vec<L, T, Q>& x)
    {
        const T            Shift(static_cast<T>(sizeof(T) * 8 - 1));
        const vec<L, T, Q> y(
            vec<L, typename detail::make_unsigned<T>::type, Q>(-x) >> typename detail::make_unsigned<T>::type(Shift));

        return (x >> Shift) | y;
    }
};
#endif

template <length_t L, typename T, qualifier Q, bool Aligned>
struct compute_floor
{
    GLM_FUNC_QUALIFIER static vec<L, T, Q> call(const vec<L, T, Q>& x)
    {
        return detail::functor1<vec, L, T, T, Q>::call(std::floor, x);
    }
};

template <length_t L, typename T, qualifier Q, bool Aligned>
struct compute_ceil
{
    GLM_FUNC_QUALIFIER static vec<L, T, Q> call(const vec<L, T, Q>& x)
    {
        return detail::functor1<vec, L, T, T, Q>::call(std::ceil, x);
    }
};

template <length_t L, typename T, qualifier Q, bool Aligned>
struct compute_fract
{
    GLM_FUNC_QUALIFIER static vec<L, T, Q> call(const vec<L, T, Q>& x)
    {
        return x - floor(x);
    }
};

template <length_t L, typename T, qualifier Q, bool Aligned>
struct compute_trunc
{
    GLM_FUNC_QUALIFIER static vec<L, T, Q> call(const vec<L, T, Q>& x)
    {
        return detail::functor1<vec, L, T, T, Q>::call(trunc, x);
    }
};

template <length_t L, typename T, qualifier Q, bool Aligned>
struct compute_round
{
    GLM_FUNC_QUALIFIER static vec<L, T, Q> call(const vec<L, T, Q>& x)
    {
        return detail::functor1<vec, L, T, T, Q>::call(round, x);
    }
};

template <length_t L, typename T, qualifier Q, bool Aligned>
struct compute_mod
{
    GLM_FUNC_QUALIFIER static vec<L, T, Q> call(const vec<L, T, Q>& a, const vec<L, T, Q>& b)
    {
        static_assert(std::numeric_limits<T>::is_iec559 || GLM_CONFIG_UNRESTRICTED_FLOAT,
                          "'mod' only accept floating-point inputs. Include <glm/gtc/integer.hpp> for integer inputs.");
        return a - b * floor(a / b);
    }
};

template <length_t L, typename T, qualifier Q, bool Aligned>
struct compute_fma
{
    GLM_FUNC_QUALIFIER static vec<L, T, Q> call(const vec<L, T, Q>& a, const vec<L, T, Q>& b, const vec<L, T, Q>& c)
    {
        return a * b + c;
    }
};

template <length_t L, typename T, qualifier Q, bool Aligned>
struct compute_min_vector
{
    GLM_FUNC_QUALIFIER static vec<L, T, Q> call(const vec<L, T, Q>& x, const vec<L, T, Q>& y)
    {
        return detail::functor2<vec, L, T, Q>::call(TMin<T>(), x, y);
    }
};

template <length_t L, typename T, qualifier Q, bool Aligned>
struct compute_max_vector
{
    GLM_FUNC_QUALIFIER static vec<L, T, Q> call(const vec<L, T, Q>& x, const vec<L, T, Q>& y)
    {
        return detail::functor2<vec, L, T, Q>::call(TMax<T>(), x, y);
    }
};

template <length_t L, typename T, qualifier Q, bool Aligned>
struct compute_clamp_vector
{
    GLM_FUNC_QUALIFIER static vec<L, T, Q> call(const vec<L, T, Q>& x, const vec<L, T, Q>& minVal, const vec<L, T, Q>& maxVal)
    {
        return min(max(x, minVal), maxVal);
    }
};

template <length_t L, typename T, qualifier Q, bool Aligned>
struct compute_step_vector
{
    GLM_FUNC_QUALIFIER static vec<L, T, Q> call(const vec<L, T, Q>& edge, const vec<L, T, Q>& x)
    {
        return mix(vec<L, T, Q>(1), vec<L, T, Q>(0), glm::lessThan(x, edge));
    }
};

template <length_t L, typename T, qualifier Q, bool Aligned>
struct compute_smoothstep_vector
{
    GLM_FUNC_QUALIFIER static vec<L, T, Q> call(const vec<L, T, Q>& edge0, const vec<L, T, Q>& edge1, const vec<L, T, Q>& x)
    {
        static_assert(std::numeric_limits<T>::is_iec559 || GLM_CONFIG_UNRESTRICTED_FLOAT || GLM_CONFIG_UNRESTRICTED_GENTYPE,
                          "'smoothstep' only accept floating-point inputs");
        const vec<L, T, Q> tmp(clamp((x - edge0) / (edge1 - edge0), static_cast<T>(0), static_cast<T>(1)));
        return tmp * tmp * (static_cast<T>(3) - static_cast<T>(2) * tmp);
    }
};

template <typename T, qualifier Q, bool Aligned>
struct convert_vec3_to_vec4W0
{
    GLM_FUNC_QUALIFIER static vec<4, T, Q> call(const vec<3, T, Q>& a)
    {
        return vec<4, T, Q>(a.x, a.y, a.z, 0.0f);
    }
};

template <typename T, qualifier Q, bool Aligned>
struct convert_vec3_to_vec4WZ
{
    GLM_FUNC_QUALIFIER static vec<4, T, Q> call(const vec<3, T, Q>& a)
    {
        return vec<4, T, Q>(a.x, a.y, a.z, a.z);
    }
};

template <typename T, qualifier Q, bool Aligned>
struct convert_vec3_to_vec4W1
{
    GLM_FUNC_QUALIFIER static vec<4, T, Q> call(const vec<3, T, Q>& a)
    {
        return vec<4, T, Q>(a.x, a.y, a.z, 1.0f);
    }
};

template <typename T, qualifier Q, bool Aligned>
struct convert_vec4_to_vec3
{
    GLM_FUNC_QUALIFIER static vec<4, T, Q> call(const vec<3, T, Q>& a)
    {
        return vec<4, T, Q>(a.x, a.y, a.z, 0.0f);
    }
};

template <length_t L, typename T, qualifier Q, bool Aligned>
struct convert_splat
{
    template <int c>
    GLM_FUNC_QUALIFIER GLM_CONSTEXPR static vec<L, T, Q> call(const vec<L, T, Q>& a)
    {
        vec<L, T, Q> v(0.0f);
        for (int i = 0; i < L; ++i)
            v[i] = a[c];
        return v;
    }
};


} //namespace detail

template <typename genFIType>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR genFIType abs(genFIType x)
{
    return detail::compute_abs<genFIType, std::numeric_limits<genFIType>::is_signed>::call(x);
}

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> abs(const vec<L, T, Q>& x)
{
    return detail::compute_abs_vector<L, T, Q, detail::is_aligned<Q>::value>::call(x);
}

// sign
// fast and works for any type
template <typename genFIType>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR genFIType sign(genFIType x)
{
    static_assert(std::numeric_limits<genFIType>::is_iec559 || GLM_CONFIG_UNRESTRICTED_FLOAT ||
                          (std::numeric_limits<genFIType>::is_signed && std::numeric_limits<genFIType>::is_integer),
                      "'sign' only accept signed inputs");

    return detail::compute_sign<1, genFIType, defaultp, std::numeric_limits<genFIType>::is_iec559, detail::is_aligned<highp>::value>::call(
               vec<1, genFIType>(x))
        .x;
}

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> sign(const vec<L, T, Q>& x)
{
    static_assert(std::numeric_limits<T>::is_iec559 || GLM_CONFIG_UNRESTRICTED_FLOAT ||
                          (std::numeric_limits<T>::is_signed && std::numeric_limits<T>::is_integer),
                      "'sign' only accept signed inputs");

    return detail::compute_sign<L, T, Q, std::numeric_limits<T>::is_iec559, detail::is_aligned<Q>::value>::call(x);
}

// floor
using ::std::floor;
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER vec<L, T, Q> floor(const vec<L, T, Q>& x)
{
    static_assert(std::numeric_limits<T>::is_iec559 || GLM_CONFIG_UNRESTRICTED_FLOAT,
                      "'floor' only accept floating-point inputs.");
    return detail::compute_floor<L, T, Q, detail::is_aligned<Q>::value>::call(x);
}

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER vec<L, T, Q> trunc(const vec<L, T, Q>& x)
{
    static_assert(std::numeric_limits<T>::is_iec559 || GLM_CONFIG_UNRESTRICTED_FLOAT,
                      "'trunc' only accept floating-point inputs");
    return detail::compute_trunc<L, T, Q, detail::is_aligned<Q>::value>::call(x);
}

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER vec<L, T, Q> round(const vec<L, T, Q>& x)
{
    static_assert(std::numeric_limits<T>::is_iec559 || GLM_CONFIG_UNRESTRICTED_FLOAT,
                      "'round' only accept floating-point inputs");
    return detail::compute_round<L, T, Q, detail::is_aligned<Q>::value>::call(x);
}

/*
	// roundEven
	template<typename genType>
	GLM_FUNC_QUALIFIER genType roundEven(genType const& x)
	{
		static_assert(std::numeric_limits<genType>::is_iec559 || GLM_CONFIG_UNRESTRICTED_FLOAT, "'roundEven' only accept floating-point inputs");

		return genType(int(x + genType(int(x) % 2)));
	}
*/

// roundEven
template <typename genType>
GLM_FUNC_QUALIFIER genType roundEven(genType x)
{
    static_assert(std::numeric_limits<genType>::is_iec559 || GLM_CONFIG_UNRESTRICTED_FLOAT,
                      "'roundEven' only accept floating-point inputs");

    int     Integer        = static_cast<int>(x);
    genType IntegerPart    = static_cast<genType>(Integer);
    genType FractionalPart = fract(x);

    if (FractionalPart > static_cast<genType>(0.5) || FractionalPart < static_cast<genType>(0.5))
    {
        return round(x);
    }
    else if ((Integer % 2) == 0)
    {
        return IntegerPart;
    }
    else if (x <= static_cast<genType>(0)) // Work around...
    {
        return IntegerPart - static_cast<genType>(1);
    }
    else
    {
        return IntegerPart + static_cast<genType>(1);
    }
    //else // Bug on MinGW 4.5.2
    //{
    //	return mix(IntegerPart + genType(-1), IntegerPart + genType(1), x <= genType(0));
    //}
}

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER vec<L, T, Q> roundEven(const vec<L, T, Q>& x)
{
    static_assert(std::numeric_limits<T>::is_iec559 || GLM_CONFIG_UNRESTRICTED_FLOAT,
                      "'roundEven' only accept floating-point inputs");
    return detail::functor1<vec, L, T, T, Q>::call(roundEven, x);
}

// ceil
using ::std::ceil;
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER vec<L, T, Q> ceil(const vec<L, T, Q>& x)
{
    static_assert(std::numeric_limits<T>::is_iec559 || GLM_CONFIG_UNRESTRICTED_FLOAT,
                      "'ceil' only accept floating-point inputs");
    return detail::compute_ceil<L, T, Q, detail::is_aligned<Q>::value>::call(x);
}

// fract
template <typename genType>
GLM_FUNC_QUALIFIER genType fract(genType x)
{
    return fract(vec<1, genType>(x)).x;
}

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER vec<L, T, Q> fract(const vec<L, T, Q>& x)
{
    static_assert(std::numeric_limits<T>::is_iec559 || GLM_CONFIG_UNRESTRICTED_FLOAT,
                      "'fract' only accept floating-point inputs");
    return detail::compute_fract<L, T, Q, detail::is_aligned<Q>::value>::call(x);
}

// mod
template <typename genType>
GLM_FUNC_QUALIFIER genType mod(genType x, genType y)
{
#if (GLM_COMPILER & GLM_COMPILER_CUDA) || (GLM_COMPILER & GLM_COMPILER_HIP)
    // Another Cuda compiler bug https://github.com/g-truc/glm/issues/530
    vec<1, genType, defaultp> Result(mod(vec<1, genType, defaultp>(x), y));
    return Result.x;
#else
    return mod(vec<1, genType, defaultp>(x), y).x;
#endif
}

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER vec<L, T, Q> mod(const vec<L, T, Q>& x, T y)
{
    return detail::compute_mod<L, T, Q, detail::is_aligned<Q>::value>::call(x, vec<L, T, Q>(y));
}

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER vec<L, T, Q> mod(const vec<L, T, Q>& x, const vec<L, T, Q>& y)
{
    return detail::compute_mod<L, T, Q, detail::is_aligned<Q>::value>::call(x, y);
}

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER vec<L, T, Q> fma(const vec<L, T, Q>& a, const vec<L, T, Q>& b, const vec<L, T, Q>& c)
{
    return detail::compute_fma<L, T, Q, detail::is_aligned<Q>::value>::call(a, b, c);
}

template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER vec<4, T, Q> xyz0(const vec<3, T, Q>& a)
{
    return detail::convert_vec3_to_vec4W0<T, Q, detail::is_aligned<Q>::value>::call(a);
}

template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER vec<4, T, Q> xyz1(const vec<3, T, Q>& a)
{
    return detail::convert_vec3_to_vec4W1<T, Q, detail::is_aligned<Q>::value>::call(a);
}

template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER vec<4, T, Q> xyzz(const vec<3, T, Q>& a)
{
    return detail::convert_vec3_to_vec4WZ<T, Q, detail::is_aligned<Q>::value>::call(a);
}

template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER vec<3, T, Q> xyz(const vec<4, T, Q>& a)
{
    return detail::convert_vec4_to_vec3<T, Q, detail::is_aligned<Q>::value>::call(a);
}

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER vec<L, T, Q> splatX(const vec<L, T, Q>& a)
{
    return detail::convert_splat<L, T, Q, detail::is_aligned<Q>::value>::template call<0>(a);
}

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER vec<L, T, Q> splatY(const vec<L, T, Q>& a)
{
    return detail::convert_splat<L, T, Q, detail::is_aligned<Q>::value>::template call<1>(a);
}

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER vec<L, T, Q> splatZ(const vec<L, T, Q>& a)
{
    return detail::convert_splat<L, T, Q, detail::is_aligned<Q>::value>::template call<2>(a);
}

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER vec<L, T, Q> splatW(const vec<L, T, Q>& a)
{
    return detail::convert_splat<L, T, Q, detail::is_aligned<Q>::value>::template call<3>(a);
}


// modf
template <typename genType>
GLM_FUNC_QUALIFIER genType modf(genType x, genType& i)
{
    static_assert(std::numeric_limits<genType>::is_iec559 || GLM_CONFIG_UNRESTRICTED_FLOAT,
                      "'modf' only accept floating-point inputs");
    return std::modf(x, &i);
}

template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER vec<1, T, Q> modf(const vec<1, T, Q>& x, vec<1, T, Q>& i)
{
    return vec<1, T, Q>(modf(x.x, i.x));
}

template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER vec<2, T, Q> modf(const vec<2, T, Q>& x, vec<2, T, Q>& i)
{
    return vec<2, T, Q>(modf(x.x, i.x), modf(x.y, i.y));
}

template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER vec<3, T, Q> modf(const vec<3, T, Q>& x, vec<3, T, Q>& i)
{
    return vec<3, T, Q>(modf(x.x, i.x), modf(x.y, i.y), modf(x.z, i.z));
}

template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER vec<4, T, Q> modf(const vec<4, T, Q>& x, vec<4, T, Q>& i)
{
    return vec<4, T, Q>(modf(x.x, i.x), modf(x.y, i.y), modf(x.z, i.z), modf(x.w, i.w));
}

//// Only valid if (INT_MIN <= x-y <= INT_MAX)
//// min(x,y)
//r = y + ((x - y) & ((x - y) >> (sizeof(int) *
//CHAR_BIT - 1)));
//// max(x,y)
//r = x - ((x - y) & ((x - y) >> (sizeof(int) *
//CHAR_BIT - 1)));

// min
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> min(const vec<L, T, Q>& a, T b)
{
    static_assert(std::numeric_limits<T>::is_iec559 || GLM_CONFIG_UNRESTRICTED_FLOAT || std::numeric_limits<T>::is_integer,
                      "'min' only accept floating-point or integer inputs");
    return detail::compute_min_vector<L, T, Q, detail::is_aligned<Q>::value>::call(a, vec<L, T, Q>(b));
}

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> min(const vec<L, T, Q>& a, const vec<L, T, Q>& b)
{
    return detail::compute_min_vector<L, T, Q, detail::is_aligned<Q>::value>::call(a, b);
}

// max
template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> max(const vec<L, T, Q>& a, T b)
{
    static_assert(std::numeric_limits<T>::is_iec559 || GLM_CONFIG_UNRESTRICTED_FLOAT || std::numeric_limits<T>::is_integer,
                      "'max' only accept floating-point or integer inputs");
    return detail::compute_max_vector<L, T, Q, detail::is_aligned<Q>::value>::call(a, vec<L, T, Q>(b));
}

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> max(const vec<L, T, Q>& a, const vec<L, T, Q>& b)
{
    return detail::compute_max_vector<L, T, Q, detail::is_aligned<Q>::value>::call(a, b);
}

// clamp
template <typename genType>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR genType clamp(genType x, genType minVal, genType maxVal)
{
    static_assert(std::numeric_limits<genType>::is_iec559 || GLM_CONFIG_UNRESTRICTED_FLOAT ||
                          std::numeric_limits<genType>::is_integer,
                      "'clamp' only accept floating-point or integer inputs");
    return min(max(x, minVal), maxVal);
}

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> clamp(const vec<L, T, Q>& x, T minVal, T maxVal)
{
    static_assert(std::numeric_limits<T>::is_iec559 || GLM_CONFIG_UNRESTRICTED_FLOAT || std::numeric_limits<T>::is_integer,
                      "'clamp' only accept floating-point or integer inputs");
    return detail::compute_clamp_vector<L, T, Q, detail::is_aligned<Q>::value>::call(x, vec<L, T, Q>(minVal), vec<L, T, Q>(maxVal));
}

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> clamp(const vec<L, T, Q>& x, const vec<L, T, Q>& minVal, const vec<L, T, Q>& maxVal)
{
    static_assert(std::numeric_limits<T>::is_iec559 || GLM_CONFIG_UNRESTRICTED_FLOAT || std::numeric_limits<T>::is_integer,
                      "'clamp' only accept floating-point or integer inputs");
    return detail::compute_clamp_vector<L, T, Q, detail::is_aligned<Q>::value>::call(x, minVal, maxVal);
}

template <typename genTypeT, typename genTypeU>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR genTypeT mix(genTypeT x, genTypeT y, genTypeU a)
{
    return detail::compute_mix<genTypeT, genTypeU>::call(x, y, a);
}

template <length_t L, typename T, typename U, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> mix(const vec<L, T, Q>& x, const vec<L, T, Q>& y, U a)
{
    return detail::compute_mix_scalar<L, T, U, Q, detail::is_aligned<Q>::value>::call(x, y, a);
}

template <length_t L, typename T, typename U, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> mix(const vec<L, T, Q>& x, const vec<L, T, Q>& y, const vec<L, U, Q>& a)
{
    return detail::compute_mix_vector<L, T, U, Q, detail::is_aligned<Q>::value>::call(x, y, a);
}

// step
template <typename genType>
GLM_FUNC_QUALIFIER genType step(genType edge, genType x)
{
    return mix(static_cast<genType>(1), static_cast<genType>(0), x < edge);
}

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER vec<L, T, Q> step(T edge, const vec<L, T, Q>& x)
{
    return detail::compute_step_vector<L, T, Q, detail::is_aligned<Q>::value>::call(vec<L, T, Q>(edge), x);
}

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER vec<L, T, Q> step(const vec<L, T, Q>& edge, const vec<L, T, Q>& x)
{
    return detail::compute_step_vector<L, T, Q, detail::is_aligned<Q>::value>::call(edge, x);
}

// smoothstep
template <typename genType>
GLM_FUNC_QUALIFIER genType smoothstep(genType edge0, genType edge1, genType x)
{
    static_assert(std::numeric_limits<genType>::is_iec559 || GLM_CONFIG_UNRESTRICTED_FLOAT ||
                          GLM_CONFIG_UNRESTRICTED_GENTYPE,
                      "'smoothstep' only accept floating-point inputs");

    const genType tmp(clamp((x - edge0) / (edge1 - edge0), genType(0), genType(1)));
    return tmp * tmp * (genType(3) - genType(2) * tmp);
}

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER vec<L, T, Q> smoothstep(T edge0, T edge1, const vec<L, T, Q>& x)
{
    return detail::compute_smoothstep_vector<L, T, Q, detail::is_aligned<Q>::value>::call(vec<L, T, Q>(edge0),
                                                                                          vec<L, T, Q>(edge1),
                                                                                          x);
}

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER vec<L, T, Q> smoothstep(const vec<L, T, Q>& edge0, const vec<L, T, Q>& edge1, const vec<L, T, Q>& x)
{
    return detail::compute_smoothstep_vector<L, T, Q, detail::is_aligned<Q>::value>::call(edge0, edge1, x);
}

#if GLM_HAS_CXX11_STL
using std::isnan;
#else
template <typename genType>
GLM_FUNC_QUALIFIER bool isnan(genType x)
{
    static_assert(std::numeric_limits<genType>::is_iec559 || GLM_CONFIG_UNRESTRICTED_FLOAT,
                      "'isnan' only accept floating-point inputs");

#if GLM_HAS_CXX11_STL
    return std::isnan(x);
#elif GLM_COMPILER & GLM_COMPILER_VC
    return _isnan(x) != 0;
#elif GLM_COMPILER & GLM_COMPILER_INTEL
#if GLM_PLATFORM & GLM_PLATFORM_WINDOWS
    return _isnan(x) != 0;
#else
    return ::isnan(x) != 0;
#endif
#elif (GLM_COMPILER & (GLM_COMPILER_GCC | GLM_COMPILER_CLANG)) && (GLM_PLATFORM & GLM_PLATFORM_ANDROID) && \
    __cplusplus < 201103L
    return _isnan(x) != 0;
#elif (GLM_COMPILER & GLM_COMPILER_CUDA) || (GLM_COMPILER & GLM_COMPILER_HIP)
    return ::isnan(x) != 0;
#else
    return std::isnan(x);
#endif
}
#endif

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER vec<L, bool, Q> isnan(const vec<L, T, Q>& v)
{
    static_assert(std::numeric_limits<T>::is_iec559 || GLM_CONFIG_UNRESTRICTED_FLOAT,
                      "'isnan' only accept floating-point inputs");

    vec<L, bool, Q> Result(0);
    for (length_t l = 0; l < v.length(); ++l)
        Result[l] = glm::isnan(v[l]);
    return Result;
}

#if GLM_HAS_CXX11_STL
using std::isinf;
#else
template <typename genType>
GLM_FUNC_QUALIFIER bool isinf(genType x)
{
    static_assert(std::numeric_limits<genType>::is_iec559 || GLM_CONFIG_UNRESTRICTED_FLOAT,
                      "'isinf' only accept floating-point inputs");

#if GLM_HAS_CXX11_STL
    return std::isinf(x);
#elif GLM_COMPILER & (GLM_COMPILER_INTEL | GLM_COMPILER_VC)
#if (GLM_PLATFORM & GLM_PLATFORM_WINDOWS)
    return _fpclass(x) == _FPCLASS_NINF || _fpclass(x) == _FPCLASS_PINF;
#else
    return ::isinf(x);
#endif
#elif GLM_COMPILER & (GLM_COMPILER_GCC | GLM_COMPILER_CLANG)
#if (GLM_PLATFORM & GLM_PLATFORM_ANDROID && __cplusplus < 201103L)
    return _isinf(x) != 0;
#else
    return std::isinf(x);
#endif
#elif (GLM_COMPILER & GLM_COMPILER_CUDA) || (GLM_COMPILER & GLM_COMPILER_HIP)
    // http://developer.download.nvidia.com/compute/cuda/4_2/rel/toolkit/docs/online/group__CUDA__MATH__DOUBLE_g13431dd2b40b51f9139cbb7f50c18fab.html#g13431dd2b40b51f9139cbb7f50c18fab
    return ::isinf(double(x)) != 0;
#else
    return std::isinf(x);
#endif
}
#endif

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER vec<L, bool, Q> isinf(const vec<L, T, Q>& v)
{
    static_assert(std::numeric_limits<T>::is_iec559 || GLM_CONFIG_UNRESTRICTED_FLOAT,
                      "'isinf' only accept floating-point inputs");

    vec<L, bool, Q> Result(0);
    for (length_t l = 0; l < v.length(); ++l)
        Result[l] = glm::isinf(v[l]);
    return Result;
}

GLM_FUNC_QUALIFIER int floatBitsToInt(float v)
{
    union
    {
        float in;
        int   out;
    } u;

    u.in = v;

    return u.out;
}

template <length_t L, qualifier Q>
GLM_FUNC_QUALIFIER vec<L, int, Q> floatBitsToInt(const vec<L, float, Q>& v)
{
    return detail::functor1<vec, L, int, float, Q>::call(floatBitsToInt, v);
}

GLM_FUNC_QUALIFIER uint floatBitsToUint(float v)
{
    union
    {
        float in;
        uint  out;
    } u;

    u.in = v;

    return u.out;
}

template <length_t L, qualifier Q>
GLM_FUNC_QUALIFIER vec<L, uint, Q> floatBitsToUint(const vec<L, float, Q>& v)
{
    return detail::functor1<vec, L, uint, float, Q>::call(floatBitsToUint, v);
}

GLM_FUNC_QUALIFIER float intBitsToFloat(int v)
{
    union
    {
        int   in;
        float out;
    } u;

    u.in = v;

    return u.out;
}

template <length_t L, qualifier Q>
GLM_FUNC_QUALIFIER vec<L, float, Q> intBitsToFloat(const vec<L, int, Q>& v)
{
    return detail::functor1<vec, L, float, int, Q>::call(intBitsToFloat, v);
}

GLM_FUNC_QUALIFIER float uintBitsToFloat(uint v)
{
    union
    {
        uint  in;
        float out;
    } u;

    u.in = v;

    return u.out;
}

template <length_t L, qualifier Q>
GLM_FUNC_QUALIFIER vec<L, float, Q> uintBitsToFloat(const vec<L, uint, Q>& v)
{
    return reinterpret_cast<vec<L, float, Q>&>(const_cast<vec<L, uint, Q>&>(v));
}

#if GLM_HAS_CXX11_STL
using std::fma;
#else
template <typename genType>
GLM_FUNC_QUALIFIER genType fma(const genType& a, const genType& b, const genType& c)
{
    return a * b + c;
}
#endif

template <typename genType>
GLM_FUNC_QUALIFIER genType frexp(genType x, int& exp)
{
    static_assert(std::numeric_limits<genType>::is_iec559 || GLM_CONFIG_UNRESTRICTED_FLOAT,
                      "'frexp' only accept floating-point inputs");

    return std::frexp(x, &exp);
}

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER vec<L, T, Q> frexp(const vec<L, T, Q>& v, vec<L, int, Q>& exp)
{
    static_assert(std::numeric_limits<T>::is_iec559 || GLM_CONFIG_UNRESTRICTED_FLOAT,
                      "'frexp' only accept floating-point inputs");

    vec<L, T, Q> Result(0);
    for (length_t l = 0; l < v.length(); ++l)
        Result[l] = std::frexp(v[l], &exp[l]);
    return Result;
}

template <typename genType>
GLM_FUNC_QUALIFIER genType ldexp(const genType& x, const int& exp)
{
    static_assert(std::numeric_limits<genType>::is_iec559 || GLM_CONFIG_UNRESTRICTED_FLOAT,
                      "'ldexp' only accept floating-point inputs");

    return std::ldexp(x, exp);
}

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER vec<L, T, Q> ldexp(const vec<L, T, Q>& v, const vec<L, int, Q>& exp)
{
    static_assert(std::numeric_limits<T>::is_iec559 || GLM_CONFIG_UNRESTRICTED_FLOAT,
                      "'ldexp' only accept floating-point inputs");

    vec<L, T, Q> Result(0);
    for (length_t l = 0; l < v.length(); ++l)
        Result[l] = std::ldexp(v[l], exp[l]);
    return Result;
}
} //namespace glm

#if GLM_CONFIG_SIMD == GLM_ENABLE
#include "func_common_simd.inl"
#endif
