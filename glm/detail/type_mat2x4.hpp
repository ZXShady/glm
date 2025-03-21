/// @ref core
/// @file glm/detail/type_mat2x4.hpp

#pragma once

#include "mat2xR_common_operators.hpp"
#include "type_vec2.hpp"
#include "type_vec4.hpp"
#include <cstddef>
#include <limits>

namespace glm
{
template <typename T, qualifier Q>
struct mat<2, 4, T, Q>
{
    typedef vec<4, T, Q>    col_type;
    typedef vec<2, T, Q>    row_type;
    typedef mat<2, 4, T, Q> type;
    typedef mat<4, 2, T, Q> transpose_type;
    typedef T               value_type;

private:
    col_type value[2];

public:
    // -- Accesses --

    typedef length_t                               length_type;
    GLM_FUNC_DECL static GLM_CONSTEXPR length_type length()
    {
        return 2;
    }

    GLM_FUNC_DECL GLM_CONSTEXPR col_type&       operator[](length_type i) GLM_NOEXCEPT;
    GLM_FUNC_DECL GLM_CONSTEXPR const col_type& operator[](length_type i) const GLM_NOEXCEPT;

    // -- Constructors --

    GLM_DEFAULTED_DEFAULT_CTOR_DECL GLM_CONSTEXPR mat() GLM_DEFAULT_CTOR;
    template <qualifier P>
    GLM_CTOR_DECL mat(const mat<2, 4, T, P>& m);

    GLM_CTOR_DECL GLM_EXPLICIT mat(T scalar);
    GLM_CTOR_DECL              mat(T x0, T y0, T z0, T w0, T x1, T y1, T z1, T w1);
    GLM_CTOR_DECL              mat(const col_type& v0, const col_type& v1);

    // -- Conversions --

    template <typename X1, typename Y1, typename Z1, typename W1, typename X2, typename Y2, typename Z2, typename W2>
    GLM_CTOR_DECL mat(X1 x1, Y1 y1, Z1 z1, W1 w1, X2 x2, Y2 y2, Z2 z2, W2 w2);

    template <typename U, typename V>
    GLM_CTOR_DECL mat(const vec<4, U, Q>& v1, const vec<4, V, Q>& v2);

    // -- Matrix conversions --

    template <typename U, qualifier P>
    GLM_CTOR_DECL GLM_EXPLICIT mat(const mat<2, 4, U, P>& m);

    GLM_CTOR_DECL GLM_EXPLICIT mat(const mat<2, 2, T, Q>& x);
    GLM_CTOR_DECL GLM_EXPLICIT mat(const mat<3, 3, T, Q>& x);
    GLM_CTOR_DECL GLM_EXPLICIT mat(const mat<4, 4, T, Q>& x);
    GLM_CTOR_DECL GLM_EXPLICIT mat(const mat<2, 3, T, Q>& x);
    GLM_CTOR_DECL GLM_EXPLICIT mat(const mat<3, 2, T, Q>& x);
    GLM_CTOR_DECL GLM_EXPLICIT mat(const mat<3, 4, T, Q>& x);
    GLM_CTOR_DECL GLM_EXPLICIT mat(const mat<4, 2, T, Q>& x);
    GLM_CTOR_DECL GLM_EXPLICIT mat(const mat<4, 3, T, Q>& x);

    // -- Unary arithmetic operators --

    template <typename U>
    GLM_FUNC_DISCARD_DECL GLM_CONSTEXPR mat& operator=(const mat<2, 4, U, Q>& m);
};

// -- Binary operators --

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR typename mat<2, 4, T, Q>::col_type operator*(const mat<2, 4, T, Q>&                    m,
                                                                         const typename mat<2, 4, T, Q>::row_type& v);

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR typename mat<2, 4, T, Q>::row_type operator*(const typename mat<2, 4, T, Q>::col_type& v,
                                                                         const mat<2, 4, T, Q>&                    m);

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR mat<4, 4, T, Q> operator*(const mat<2, 4, T, Q>& m1, const mat<4, 2, T, Q>& m2);

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR mat<2, 4, T, Q> operator*(const mat<2, 4, T, Q>& m1, const mat<2, 2, T, Q>& m2);

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR mat<3, 4, T, Q> operator*(const mat<2, 4, T, Q>& m1, const mat<3, 2, T, Q>& m2);

} //namespace glm

#ifndef GLM_EXTERNAL_TEMPLATE
#include "type_mat2x4.inl"
#endif
