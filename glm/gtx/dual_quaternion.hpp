/// @ref gtx_dual_quaternion
/// @file glm/gtx/dual_quaternion.hpp
/// @author Maksim Vorobiev (msomeone@gmail.com)
///
/// @see core (dependence)
/// @see gtc_constants (dependence)
/// @see gtc_quaternion (dependence)
///
/// @defgroup gtx_dual_quaternion GLM_GTX_dual_quaternion
/// @ingroup gtx
///
/// Include <glm/gtx/dual_quaternion.hpp> to use the features of this extension.
///
/// Defines a templated dual-quaternion type and several dual-quaternion operations.

#pragma once

// Dependency:
#include "../glm.hpp"
#include "../gtc/constants.hpp"
#include "../gtc/quaternion.hpp"

#ifndef GLM_ENABLE_EXPERIMENTAL
#error \
    "GLM: GLM_GTX_dual_quaternion is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it."
#elif GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#pragma message("GLM: GLM_GTX_dual_quaternion extension included")
#endif

namespace glm
{
/// @addtogroup gtx_dual_quaternion
/// @{

template <typename T, qualifier Q = defaultp>
struct tdualquat
{
    // -- Implementation detail --

    typedef T         value_type;
    typedef qua<T, Q> part_type;

    // -- Data --

    qua<T, Q> real, dual;

    // -- Component accesses --

    typedef length_t length_type;
    /// Return the count of components of a dual quaternion
    GLM_FUNC_DECL static GLM_CONSTEXPR length_type length()
    {
        return 2;
    }

    GLM_FUNC_DECL part_type&       operator[](length_type i);
    GLM_FUNC_DECL const part_type& operator[](length_type i) const;

    // -- Implicit basic constructors --

    GLM_DEFAULTED_FUNC_DECL GLM_CONSTEXPR tdualquat() GLM_DEFAULT;
    GLM_DEFAULTED_FUNC_DECL GLM_CONSTEXPR tdualquat(const tdualquat<T, Q>& d) GLM_DEFAULT;
    template <qualifier P>
    GLM_CTOR_DECL tdualquat(const tdualquat<T, P>& d);

    // -- Explicit basic constructors --

    GLM_CTOR_DECL tdualquat(const qua<T, Q>& real);
    GLM_CTOR_DECL tdualquat(const qua<T, Q>& orientation, const vec<3, T, Q>& translation);
    GLM_CTOR_DECL tdualquat(const qua<T, Q>& real, const qua<T, Q>& dual);

    // -- Conversion constructors --

    template <typename U, qualifier P>
    GLM_CTOR_DECL GLM_EXPLICIT tdualquat(const tdualquat<U, P>& q);

    GLM_CTOR_DECL GLM_EXPLICIT tdualquat(const mat<2, 4, T, Q>& holder_mat);
    GLM_CTOR_DECL GLM_EXPLICIT tdualquat(const mat<3, 4, T, Q>& aug_mat);

    // -- Unary arithmetic operators --

    GLM_DEFAULTED_FUNC_DECL tdualquat<T, Q>& operator=(const tdualquat<T, Q>& m) GLM_DEFAULT;

    template <typename U>
    GLM_FUNC_DISCARD_DECL tdualquat<T, Q>& operator=(const tdualquat<U, Q>& m);
    template <typename U>
    GLM_FUNC_DISCARD_DECL tdualquat<T, Q>& operator*=(U s);
    template <typename U>
    GLM_FUNC_DISCARD_DECL tdualquat<T, Q>& operator/=(U s);
};

// -- Unary bit operators --

template <typename T, qualifier Q>
GLM_FUNC_DECL tdualquat<T, Q> operator+(const tdualquat<T, Q>& q);

template <typename T, qualifier Q>
GLM_FUNC_DECL tdualquat<T, Q> operator-(const tdualquat<T, Q>& q);

// -- Binary operators --

template <typename T, qualifier Q>
GLM_FUNC_DECL tdualquat<T, Q> operator+(const tdualquat<T, Q>& q, const tdualquat<T, Q>& p);

template <typename T, qualifier Q>
GLM_FUNC_DECL tdualquat<T, Q> operator*(const tdualquat<T, Q>& q, const tdualquat<T, Q>& p);

template <typename T, qualifier Q>
GLM_FUNC_DECL vec<3, T, Q> operator*(const tdualquat<T, Q>& q, const vec<3, T, Q>& v);

template <typename T, qualifier Q>
GLM_FUNC_DECL vec<3, T, Q> operator*(const vec<3, T, Q>& v, const tdualquat<T, Q>& q);

template <typename T, qualifier Q>
GLM_FUNC_DECL vec<4, T, Q> operator*(const tdualquat<T, Q>& q, const vec<4, T, Q>& v);

template <typename T, qualifier Q>
GLM_FUNC_DECL vec<4, T, Q> operator*(const vec<4, T, Q>& v, const tdualquat<T, Q>& q);

template <typename T, qualifier Q>
GLM_FUNC_DECL tdualquat<T, Q> operator*(const tdualquat<T, Q>& q, const T& s);

template <typename T, qualifier Q>
GLM_FUNC_DECL tdualquat<T, Q> operator*(const T& s, const tdualquat<T, Q>& q);

template <typename T, qualifier Q>
GLM_FUNC_DECL tdualquat<T, Q> operator/(const tdualquat<T, Q>& q, const T& s);

// -- Boolean operators --

template <typename T, qualifier Q>
GLM_FUNC_DECL bool operator==(const tdualquat<T, Q>& q1, const tdualquat<T, Q>& q2);

template <typename T, qualifier Q>
GLM_FUNC_DECL bool operator!=(const tdualquat<T, Q>& q1, const tdualquat<T, Q>& q2);

/// Creates an identity dual quaternion.
///
/// @see gtx_dual_quaternion
template <typename T, qualifier Q>
GLM_FUNC_DECL tdualquat<T, Q> dual_quat_identity();

/// Returns the normalized quaternion.
///
/// @see gtx_dual_quaternion
template <typename T, qualifier Q>
GLM_FUNC_DECL tdualquat<T, Q> normalize(const tdualquat<T, Q>& q);

/// Returns the linear interpolation of two dual quaternion.
///
/// @see gtc_dual_quaternion
template <typename T, qualifier Q>
GLM_FUNC_DECL tdualquat<T, Q> lerp(const tdualquat<T, Q>& x, const tdualquat<T, Q>& y, const T& a);

/// Returns the q inverse.
///
/// @see gtx_dual_quaternion
template <typename T, qualifier Q>
GLM_FUNC_DECL tdualquat<T, Q> inverse(const tdualquat<T, Q>& q);

/// Converts a quaternion to a 2 * 4 matrix.
///
/// @see gtx_dual_quaternion
template <typename T, qualifier Q>
GLM_FUNC_DECL mat<2, 4, T, Q> mat2x4_cast(const tdualquat<T, Q>& x);

/// Converts a quaternion to a 3 * 4 matrix.
///
/// @see gtx_dual_quaternion
template <typename T, qualifier Q>
GLM_FUNC_DECL mat<3, 4, T, Q> mat3x4_cast(const tdualquat<T, Q>& x);

/// Converts a 2 * 4 matrix (matrix which holds real and dual parts) to a quaternion.
///
/// @see gtx_dual_quaternion
template <typename T, qualifier Q>
GLM_FUNC_DECL tdualquat<T, Q> dualquat_cast(const mat<2, 4, T, Q>& x);

/// Converts a 3 * 4 matrix (augmented matrix rotation + translation) to a quaternion.
///
/// @see gtx_dual_quaternion
template <typename T, qualifier Q>
GLM_FUNC_DECL tdualquat<T, Q> dualquat_cast(const mat<3, 4, T, Q>& x);


/// Dual-quaternion of low single-qualifier floating-point numbers.
///
/// @see gtx_dual_quaternion
typedef tdualquat<float, lowp> lowp_dualquat;

/// Dual-quaternion of medium single-qualifier floating-point numbers.
///
/// @see gtx_dual_quaternion
typedef tdualquat<float, mediump> mediump_dualquat;

/// Dual-quaternion of high single-qualifier floating-point numbers.
///
/// @see gtx_dual_quaternion
typedef tdualquat<float, highp> highp_dualquat;


/// Dual-quaternion of low single-qualifier floating-point numbers.
///
/// @see gtx_dual_quaternion
typedef tdualquat<float, lowp> lowp_fdualquat;

/// Dual-quaternion of medium single-qualifier floating-point numbers.
///
/// @see gtx_dual_quaternion
typedef tdualquat<float, mediump> mediump_fdualquat;

/// Dual-quaternion of high single-qualifier floating-point numbers.
///
/// @see gtx_dual_quaternion
typedef tdualquat<float, highp> highp_fdualquat;


/// Dual-quaternion of low double-qualifier floating-point numbers.
///
/// @see gtx_dual_quaternion
typedef tdualquat<double, lowp> lowp_ddualquat;

/// Dual-quaternion of medium double-qualifier floating-point numbers.
///
/// @see gtx_dual_quaternion
typedef tdualquat<double, mediump> mediump_ddualquat;

/// Dual-quaternion of high double-qualifier floating-point numbers.
///
/// @see gtx_dual_quaternion
typedef tdualquat<double, highp> highp_ddualquat;


#if (!defined(GLM_PRECISION_HIGHP_FLOAT) && !defined(GLM_PRECISION_MEDIUMP_FLOAT) && !defined(GLM_PRECISION_LOWP_FLOAT))
/// Dual-quaternion of floating-point numbers.
///
/// @see gtx_dual_quaternion
typedef highp_fdualquat dualquat;

/// Dual-quaternion of single-qualifier floating-point numbers.
///
/// @see gtx_dual_quaternion
typedef highp_fdualquat fdualquat;
#elif (defined(GLM_PRECISION_HIGHP_FLOAT) && !defined(GLM_PRECISION_MEDIUMP_FLOAT) && !defined(GLM_PRECISION_LOWP_FLOAT))
typedef highp_fdualquat dualquat;
typedef highp_fdualquat fdualquat;
#elif (!defined(GLM_PRECISION_HIGHP_FLOAT) && defined(GLM_PRECISION_MEDIUMP_FLOAT) && !defined(GLM_PRECISION_LOWP_FLOAT))
typedef mediump_fdualquat dualquat;
typedef mediump_fdualquat fdualquat;
#elif (!defined(GLM_PRECISION_HIGHP_FLOAT) && !defined(GLM_PRECISION_MEDIUMP_FLOAT) && defined(GLM_PRECISION_LOWP_FLOAT))
typedef lowp_fdualquat dualquat;
typedef lowp_fdualquat fdualquat;
#else
#error "GLM error: multiple default precision requested for single-precision floating-point types"
#endif


#if (!defined(GLM_PRECISION_HIGHP_DOUBLE) && !defined(GLM_PRECISION_MEDIUMP_DOUBLE) && !defined(GLM_PRECISION_LOWP_DOUBLE))
/// Dual-quaternion of default double-qualifier floating-point numbers.
///
/// @see gtx_dual_quaternion
typedef highp_ddualquat ddualquat;
#elif (defined(GLM_PRECISION_HIGHP_DOUBLE) && !defined(GLM_PRECISION_MEDIUMP_DOUBLE) && \
       !defined(GLM_PRECISION_LOWP_DOUBLE))
typedef highp_ddualquat ddualquat;
#elif (!defined(GLM_PRECISION_HIGHP_DOUBLE) && defined(GLM_PRECISION_MEDIUMP_DOUBLE) && \
       !defined(GLM_PRECISION_LOWP_DOUBLE))
typedef mediump_ddualquat ddualquat;
#elif (!defined(GLM_PRECISION_HIGHP_DOUBLE) && !defined(GLM_PRECISION_MEDIUMP_DOUBLE) && \
       defined(GLM_PRECISION_LOWP_DOUBLE))
typedef lowp_ddualquat ddualquat;
#else
#error "GLM error: Multiple default precision requested for double-precision floating-point types"
#endif

/// @}
} //namespace glm

#include "dual_quaternion.inl"
