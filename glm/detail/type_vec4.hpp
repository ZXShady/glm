/// @ref core
/// @file glm/detail/type_vec4.hpp

#pragma once

#include "qualifier.hpp"
#if GLM_CONFIG_SWIZZLE == GLM_SWIZZLE_OPERATOR
#include "_swizzle.hpp"
#elif GLM_CONFIG_SWIZZLE == GLM_SWIZZLE_FUNCTION
#include "_swizzle_func.hpp"
#endif
#include "vec_common_operators.hpp"
#include <cstddef>

namespace glm
{
template <typename T, qualifier Q>
struct vec<4, T, Q>
{
    // -- Implementation detail --

    typedef T               value_type;
    typedef vec<4, T, Q>    type;
    typedef vec<4, bool, Q> bool_type;

    enum is_aligned
    {
        value = detail::is_aligned<Q>::value
    };

    // -- Data --

#if GLM_SILENT_WARNINGS == GLM_ENABLE
#if GLM_COMPILER & GLM_COMPILER_GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#elif GLM_COMPILER & GLM_COMPILER_CLANG
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgnu-anonymous-struct"
#pragma clang diagnostic ignored "-Wnested-anon-types"
#elif GLM_COMPILER & GLM_COMPILER_VC
#pragma warning(push)
#pragma warning(disable : 4201) // nonstandard extension used : nameless struct/union
#endif
#endif

#if GLM_CONFIG_XYZW_ONLY
    T x, y, z, w;
#if GLM_CONFIG_SWIZZLE == GLM_SWIZZLE_FUNCTION
    GLM_SWIZZLE_GEN_VEC_FROM_VEC4_COMP(T, Q, x, y, z, w)
#endif //GLM_CONFIG_SWIZZLE
#elif GLM_CONFIG_ANONYMOUS_STRUCT == GLM_ENABLE
    union
    {
        struct
        {
            T x, y, z, w;
        };
        struct
        {
            T r, g, b, a;
        };
        struct
        {
            T s, t, p, q;
        };

        typename detail::storage<4, T, detail::is_aligned<Q>::value>::type data;

#if GLM_CONFIG_SWIZZLE == GLM_SWIZZLE_OPERATOR
        GLM_SWIZZLE4_2_MEMBERS(T, Q, x, y, z, w)
        GLM_SWIZZLE4_2_MEMBERS(T, Q, r, g, b, a)
        GLM_SWIZZLE4_2_MEMBERS(T, Q, s, t, p, q)
        GLM_SWIZZLE4_3_MEMBERS(T, Q, x, y, z, w)
        GLM_SWIZZLE4_3_MEMBERS(T, Q, r, g, b, a)
        GLM_SWIZZLE4_3_MEMBERS(T, Q, s, t, p, q)
        GLM_SWIZZLE4_4_MEMBERS(T, Q, x, y, z, w)
        GLM_SWIZZLE4_4_MEMBERS(T, Q, r, g, b, a)
        GLM_SWIZZLE4_4_MEMBERS(T, Q, s, t, p, q)
#endif
    };
#else
    union
    {
        T x, r, s;
    };
    union
    {
        T y, g, t;
    };
    union
    {
        T z, b, p;
    };
    union
    {
        T w, a, q;
    };

#if GLM_CONFIG_SWIZZLE == GLM_SWIZZLE_FUNCTION
    GLM_SWIZZLE_GEN_VEC_FROM_VEC4(T, Q)
#endif
#endif

#if GLM_SILENT_WARNINGS == GLM_ENABLE
#if GLM_COMPILER & GLM_COMPILER_CLANG
#pragma clang diagnostic pop
#elif GLM_COMPILER & GLM_COMPILER_GCC
#pragma GCC diagnostic pop
#elif GLM_COMPILER & GLM_COMPILER_VC
#pragma warning(pop)
#endif
#endif

    // -- Component accesses --

    typedef length_t length_type;

    /// Return the count of components of the vector
    GLM_FUNC_DECL static GLM_CONSTEXPR length_type length()
    {
        return 4;
    }

    GLM_FUNC_DECL GLM_CONSTEXPR T&       operator[](length_type i);
    GLM_FUNC_DECL GLM_CONSTEXPR const T& operator[](length_type i) const;

    // -- Implicit basic constructors --

    GLM_DEFAULTED_DEFAULT_CTOR_DECL GLM_CONSTEXPR vec() GLM_DEFAULT_CTOR;
    GLM_DEFAULTED_FUNC_DECL GLM_CONSTEXPR         vec(const vec<4, T, Q>& v) GLM_DEFAULT;
    template <qualifier P>
    GLM_CTOR_DECL vec(const vec<4, T, P>& v);

    // -- Explicit basic constructors --

    GLM_CTOR_DECL explicit vec(T scalar);
    GLM_CTOR_DECL vec(T x, T y, T z, T w);

    // -- Conversion scalar constructors --

    template <typename U, qualifier P>
    GLM_CTOR_DECL explicit vec(const vec<1, U, P>& v);

    /// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
    template <typename X, typename Y, typename Z, typename W>
    GLM_CTOR_DECL vec(X _x, Y _y, Z _z, W _w);
    template <typename X, typename Y, typename Z, typename W>
    GLM_CTOR_DECL vec(const vec<1, X, Q>& _x, Y _y, Z _z, W _w);
    template <typename X, typename Y, typename Z, typename W>
    GLM_CTOR_DECL vec(X _x, const vec<1, Y, Q>& _y, Z _z, W _w);
    template <typename X, typename Y, typename Z, typename W>
    GLM_CTOR_DECL vec(const vec<1, X, Q>& _x, const vec<1, Y, Q>& _y, Z _z, W _w);
    template <typename X, typename Y, typename Z, typename W>
    GLM_CTOR_DECL vec(X _x, Y _y, const vec<1, Z, Q>& _z, W _w);
    template <typename X, typename Y, typename Z, typename W>
    GLM_CTOR_DECL vec(const vec<1, X, Q>& _x, Y _y, const vec<1, Z, Q>& _z, W _w);
    template <typename X, typename Y, typename Z, typename W>
    GLM_CTOR_DECL vec(X _x, const vec<1, Y, Q>& _y, const vec<1, Z, Q>& _z, W _w);
    template <typename X, typename Y, typename Z, typename W>
    GLM_CTOR_DECL vec(const vec<1, X, Q>& _x, const vec<1, Y, Q>& _y, const vec<1, Z, Q>& _z, W _w);
    template <typename X, typename Y, typename Z, typename W>
    GLM_CTOR_DECL vec(const vec<1, X, Q>& _x, Y _y, Z _z, const vec<1, W, Q>& _w);
    template <typename X, typename Y, typename Z, typename W>
    GLM_CTOR_DECL vec(X _x, const vec<1, Y, Q>& _y, Z _z, const vec<1, W, Q>& _w);
    template <typename X, typename Y, typename Z, typename W>
    GLM_CTOR_DECL vec(const vec<1, X, Q>& _x, const vec<1, Y, Q>& _y, Z _z, const vec<1, W, Q>& _w);
    template <typename X, typename Y, typename Z, typename W>
    GLM_CTOR_DECL vec(X _x, Y _y, const vec<1, Z, Q>& _z, const vec<1, W, Q>& _w);
    template <typename X, typename Y, typename Z, typename W>
    GLM_CTOR_DECL vec(const vec<1, X, Q>& _x, Y _y, const vec<1, Z, Q>& _z, const vec<1, W, Q>& _w);
    template <typename X, typename Y, typename Z, typename W>
    GLM_CTOR_DECL vec(X _x, const vec<1, Y, Q>& _y, const vec<1, Z, Q>& _z, const vec<1, W, Q>& _w);
    template <typename X, typename Y, typename Z, typename W>
    GLM_CTOR_DECL vec(const vec<1, X, Q>& _x, const vec<1, Y, Q>& _y, const vec<1, Z, Q>& _z, const vec<1, W, Q>& _w);

    // -- Conversion vector constructors --

    /// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
    template <typename A, typename B, typename C, qualifier P>
    GLM_CTOR_DECL vec(const vec<2, A, P>& _xy, B _z, C _w);
    /// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
    template <typename A, typename B, typename C, qualifier P>
    GLM_CTOR_DECL vec(const vec<2, A, P>& _xy, const vec<1, B, P>& _z, C _w);
    /// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
    template <typename A, typename B, typename C, qualifier P>
    GLM_CTOR_DECL vec(const vec<2, A, P>& _xy, B _z, const vec<1, C, P>& _w);
    /// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
    template <typename A, typename B, typename C, qualifier P>
    GLM_CTOR_DECL vec(const vec<2, A, P>& _xy, const vec<1, B, P>& _z, const vec<1, C, P>& _w);
    /// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
    template <typename A, typename B, typename C, qualifier P>
    GLM_CTOR_DECL vec(A _x, const vec<2, B, P>& _yz, C _w);
    /// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
    template <typename A, typename B, typename C, qualifier P>
    GLM_CTOR_DECL vec(const vec<1, A, P>& _x, const vec<2, B, P>& _yz, C _w);
    /// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
    template <typename A, typename B, typename C, qualifier P>
    GLM_CTOR_DECL vec(A _x, const vec<2, B, P>& _yz, const vec<1, C, P>& _w);
    /// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
    template <typename A, typename B, typename C, qualifier P>
    GLM_CTOR_DECL vec(const vec<1, A, P>& _x, const vec<2, B, P>& _yz, const vec<1, C, P>& _w);
    /// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
    template <typename A, typename B, typename C, qualifier P>
    GLM_CTOR_DECL vec(A _x, B _y, const vec<2, C, P>& _zw);
    /// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
    template <typename A, typename B, typename C, qualifier P>
    GLM_CTOR_DECL vec(const vec<1, A, P>& _x, B _y, const vec<2, C, P>& _zw);
    /// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
    template <typename A, typename B, typename C, qualifier P>
    GLM_CTOR_DECL vec(A _x, const vec<1, B, P>& _y, const vec<2, C, P>& _zw);
    /// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
    template <typename A, typename B, typename C, qualifier P>
    GLM_CTOR_DECL vec(const vec<1, A, P>& _x, const vec<1, B, P>& _y, const vec<2, C, P>& _zw);
    /// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
    template <typename A, typename B, qualifier P>
    GLM_CTOR_DECL vec(const vec<3, A, P>& _xyz, B _w);
    /// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
    template <typename A, typename B, qualifier P>
    GLM_CTOR_DECL vec(const vec<3, A, P>& _xyz, const vec<1, B, P>& _w);
    /// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
    template <typename A, typename B, qualifier P>
    GLM_CTOR_DECL vec(A _x, const vec<3, B, P>& _yzw);
    /// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
    template <typename A, typename B, qualifier P>
    GLM_CTOR_DECL vec(const vec<1, A, P>& _x, const vec<3, B, P>& _yzw);
    /// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
    template <typename A, typename B, qualifier P>
    GLM_CTOR_DECL vec(const vec<2, A, P>& _xy, const vec<2, B, P>& _zw);

    /// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
    template <typename U, qualifier P>
    GLM_CTOR_DECL GLM_EXPLICIT vec(const vec<4, U, P>& v);

    // -- Swizzle constructors --
#if GLM_CONFIG_SWIZZLE == GLM_SWIZZLE_OPERATOR
    template <int E0, int E1, int E2, int E3>
    GLM_FUNC_DISCARD_DECL vec(const detail::_swizzle<4, T, Q, E0, E1, E2, E3>& that)
    {
        *this = that();
    }

    template <int E0, int E1, int F0, int F1>
    GLM_FUNC_DISCARD_DECL vec(const detail::_swizzle<2, T, Q, E0, E1, -1, -2>& v,
                              const detail::_swizzle<2, T, Q, F0, F1, -1, -2>& u)
    {
        *this = vec<4, T, Q>(v(), u());
    }

    template <int E0, int E1>
    GLM_FUNC_DISCARD_DECL vec(const T& x, const T& y, const detail::_swizzle<2, T, Q, E0, E1, -1, -2>& v)
    {
        *this = vec<4, T, Q>(x, y, v());
    }

    template <int E0, int E1>
    GLM_FUNC_DISCARD_DECL vec(const T& x, const detail::_swizzle<2, T, Q, E0, E1, -1, -2>& v, const T& w)
    {
        *this = vec<4, T, Q>(x, v(), w);
    }

    template <int E0, int E1>
    GLM_FUNC_DISCARD_DECL vec(const detail::_swizzle<2, T, Q, E0, E1, -1, -2>& v, const T& z, const T& w)
    {
        *this = vec<4, T, Q>(v(), z, w);
    }

    template <int E0, int E1, int E2>
    GLM_FUNC_DISCARD_DECL vec(const detail::_swizzle<3, T, Q, E0, E1, E2, 3>& v, const T& w)
    {
        *this = vec<4, T, Q>(v(), w);
    }

    template <int E0, int E1, int E2>
    GLM_FUNC_DISCARD_DECL vec(const T& x, const detail::_swizzle<3, T, Q, E0, E1, E2, 3>& v)
    {
        *this = vec<4, T, Q>(x, v());
    }
#endif //GLM_CONFIG_SWIZZLE == GLM_SWIZZLE_OPERATOR

    // -- Unary arithmetic operators --

    GLM_DEFAULTED_FUNC_DECL GLM_CONSTEXPR vec<4, T, Q>& operator=(const vec<4, T, Q>& v) GLM_DEFAULT;

    template <typename U>
    GLM_FUNC_DISCARD_DECL GLM_CONSTEXPR vec<4, T, Q>& operator=(const vec<4, U, Q>& v);
    template <typename U>
    GLM_FUNC_DISCARD_DECL GLM_CONSTEXPR vec<4, T, Q>& operator+=(U scalar);
    template <typename U>
    GLM_FUNC_DISCARD_DECL GLM_CONSTEXPR vec<4, T, Q>& operator+=(const vec<1, U, Q>& v);
    template <typename U>
    GLM_FUNC_DISCARD_DECL GLM_CONSTEXPR vec<4, T, Q>& operator+=(const vec<4, U, Q>& v);
    template <typename U>
    GLM_FUNC_DISCARD_DECL GLM_CONSTEXPR vec<4, T, Q>& operator-=(U scalar);
    template <typename U>
    GLM_FUNC_DISCARD_DECL GLM_CONSTEXPR vec<4, T, Q>& operator-=(const vec<1, U, Q>& v);
    template <typename U>
    GLM_FUNC_DISCARD_DECL GLM_CONSTEXPR vec<4, T, Q>& operator-=(const vec<4, U, Q>& v);
    template <typename U>
    GLM_FUNC_DISCARD_DECL GLM_CONSTEXPR vec<4, T, Q>& operator*=(U scalar);
    template <typename U>
    GLM_FUNC_DISCARD_DECL GLM_CONSTEXPR vec<4, T, Q>& operator*=(const vec<1, U, Q>& v);
    template <typename U>
    GLM_FUNC_DISCARD_DECL GLM_CONSTEXPR vec<4, T, Q>& operator*=(const vec<4, U, Q>& v);
    template <typename U>
    GLM_FUNC_DISCARD_DECL GLM_CONSTEXPR vec<4, T, Q>& operator/=(U scalar);
    template <typename U>
    GLM_FUNC_DISCARD_DECL GLM_CONSTEXPR vec<4, T, Q>& operator/=(const vec<1, U, Q>& v);
    template <typename U>
    GLM_FUNC_DISCARD_DECL GLM_CONSTEXPR vec<4, T, Q>& operator/=(const vec<4, U, Q>& v);

    // -- Increment and decrement operators --

    GLM_FUNC_DISCARD_DECL GLM_CONSTEXPR vec<4, T, Q>& operator++();
    GLM_FUNC_DISCARD_DECL GLM_CONSTEXPR vec<4, T, Q>& operator--();
    // -- Unary bit operators --

    template <typename U>
    GLM_FUNC_DECL GLM_CONSTEXPR vec<4, T, Q>& operator%=(U scalar);
    template <typename U>
    GLM_FUNC_DECL GLM_CONSTEXPR vec<4, T, Q>& operator%=(const vec<4, U, Q>& v);
    template <typename U>
    GLM_FUNC_DECL GLM_CONSTEXPR vec<4, T, Q>& operator&=(U scalar);
    template <typename U>
    GLM_FUNC_DECL GLM_CONSTEXPR vec<4, T, Q>& operator&=(const vec<4, U, Q>& v);
    template <typename U>
    GLM_FUNC_DECL GLM_CONSTEXPR vec<4, T, Q>& operator|=(U scalar);
    template <typename U>
    GLM_FUNC_DECL GLM_CONSTEXPR vec<4, T, Q>& operator|=(const vec<4, U, Q>& v);
    template <typename U>
    GLM_FUNC_DECL GLM_CONSTEXPR vec<4, T, Q>& operator^=(U scalar);
    template <typename U>
    GLM_FUNC_DECL GLM_CONSTEXPR vec<4, T, Q>& operator^=(const vec<4, U, Q>& v);
    template <typename U>
    GLM_FUNC_DECL GLM_CONSTEXPR vec<4, T, Q>& operator<<=(U scalar);
    template <typename U>
    GLM_FUNC_DECL GLM_CONSTEXPR vec<4, T, Q>& operator<<=(const vec<4, U, Q>& v);
    template <typename U>
    GLM_FUNC_DECL GLM_CONSTEXPR vec<4, T, Q>& operator>>=(U scalar);
    template <typename U>
    GLM_FUNC_DECL GLM_CONSTEXPR vec<4, T, Q>& operator>>=(const vec<4, U, Q>& v);
};


// -- Unary operators --

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<4, T, Q> operator-(const vec<4, T, Q>& v);

// -- Binary operators --

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<4, T, Q> operator+(const vec<4, T, Q>& v, T scalar);

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<4, T, Q> operator+(const vec<4, T, Q>& v1, const vec<4, T, Q>& v2);

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<4, T, Q> operator-(const vec<4, T, Q>& v, T scalar);

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<4, T, Q> operator-(T scalar, const vec<4, T, Q>& v);

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<4, T, Q> operator-(const vec<4, T, Q>& v1, const vec<4, T, Q>& v2);

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<4, T, Q> operator*(const vec<4, T, Q>& v, T scalar);

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<4, T, Q> operator*(const vec<4, T, Q>& v1, const vec<4, T, Q>& v2);

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<4, T, Q> operator/(const vec<4, T, Q>& v, T scalar);

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<4, T, Q> operator/(T scalar, const vec<4, T, Q>& v);

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<4, T, Q> operator/(const vec<4, T, Q>& v1, const vec<4, T, Q>& v2);

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<4, T, Q> operator%(const vec<4, T, Q>& v, T scalar);

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<4, T, Q> operator%(T scalar, const vec<4, T, Q>& v);

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<4, T, Q> operator%(const vec<4, T, Q>& v1, const vec<4, T, Q>& v2);

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<4, T, Q> operator&(const vec<4, T, Q>& v, T scalar);

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<4, T, Q> operator&(const vec<4, T, Q>& v1, const vec<4, T, Q>& v2);

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<4, T, Q> operator|(const vec<4, T, Q>& v, T scalar);

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<4, T, Q> operator|(const vec<4, T, Q>& v1, const vec<4, T, Q>& v2);

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<4, T, Q> operator^(const vec<4, T, Q>& v, T scalar);

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<4, T, Q> operator^(const vec<4, T, Q>& v1, const vec<4, T, Q>& v2);

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<4, T, Q> operator<<(const vec<4, T, Q>& v, T scalar);

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<4, T, Q> operator<<(T scalar, const vec<4, T, Q>& v);

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<4, T, Q> operator<<(const vec<4, T, Q>& v1, const vec<4, T, Q>& v2);

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<4, T, Q> operator>>(const vec<4, T, Q>& v, T scalar);

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<4, T, Q> operator>>(T scalar, const vec<4, T, Q>& v);

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<4, T, Q> operator>>(const vec<4, T, Q>& v1, const vec<4, T, Q>& v2);

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<4, T, Q> operator~(const vec<4, T, Q>& v);

// -- Boolean operators --

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR bool operator==(const vec<4, T, Q>& v1, const vec<4, T, Q>& v2);

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR bool operator!=(const vec<4, T, Q>& v1, const vec<4, T, Q>& v2);

template <qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<4, bool, Q> operator&&(const vec<4, bool, Q>& v1, const vec<4, bool, Q>& v2);

template <qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<4, bool, Q> operator||(const vec<4, bool, Q>& v1, const vec<4, bool, Q>& v2);
} //namespace glm

#ifndef GLM_EXTERNAL_TEMPLATE
#include "type_vec4.inl"
#endif //GLM_EXTERNAL_TEMPLATE
