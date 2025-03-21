/// @ref core
/// @file glm/detail/type_mat4x2.hpp

#pragma once

#include "mat4xR_common_operators.hpp"
#include "type_vec2.hpp"
#include "type_vec4.hpp"
#include <cstddef>
#include <limits>

namespace glm
{
template <typename T, qualifier Q>
struct mat<4, 2, T, Q>
{
    typedef vec<2, T, Q>    col_type;
    typedef vec<4, T, Q>    row_type;
    typedef mat<4, 2, T, Q> type;
    typedef mat<2, 4, T, Q> transpose_type;
    typedef T               value_type;

private:
    col_type value[4];

public:
    // -- Accesses --

    typedef length_t                               length_type;
    GLM_FUNC_DECL static GLM_CONSTEXPR length_type length()
    {
        return 4;
    }

    GLM_FUNC_DECL GLM_CONSTEXPR col_type&       operator[](length_type i) GLM_NOEXCEPT;
    GLM_FUNC_DECL GLM_CONSTEXPR const col_type& operator[](length_type i) const GLM_NOEXCEPT;

    // -- Constructors --

    GLM_DEFAULTED_DEFAULT_CTOR_DECL GLM_CONSTEXPR mat() GLM_DEFAULT_CTOR;
    template <qualifier P>
    GLM_CTOR_DECL mat(const mat<4, 2, T, P>& m);

    GLM_CTOR_DECL mat(T scalar);
    GLM_CTOR_DECL mat(T x0, T y0, T x1, T y1, T x2, T y2, T x3, T y3);
    GLM_CTOR_DECL mat(const col_type& v0, const col_type& v1, const col_type& v2, const col_type& v3);

    // -- Conversions --

    template <typename X0, typename Y0, typename X1, typename Y1, typename X2, typename Y2, typename X3, typename Y3>
    GLM_CTOR_DECL mat(X0 x0, Y0 y0, X1 x1, Y1 y1, X2 x2, Y2 y2, X3 x3, Y3 y3);

    template <typename V1, typename V2, typename V3, typename V4>
    GLM_CTOR_DECL mat(const vec<2, V1, Q>& v1, const vec<2, V2, Q>& v2, const vec<2, V3, Q>& v3, const vec<2, V4, Q>& v4);

    // -- Matrix conversions --

    template <typename U, qualifier P>
    GLM_CTOR_DECL mat(const mat<4, 2, U, P>& m);

    GLM_CTOR_DECL mat(const mat<2, 2, T, Q>& x);
    GLM_CTOR_DECL mat(const mat<3, 3, T, Q>& x);
    GLM_CTOR_DECL mat(const mat<4, 4, T, Q>& x);
    GLM_CTOR_DECL mat(const mat<2, 3, T, Q>& x);
    GLM_CTOR_DECL mat(const mat<3, 2, T, Q>& x);
    GLM_CTOR_DECL mat(const mat<2, 4, T, Q>& x);
    GLM_CTOR_DECL mat(const mat<4, 3, T, Q>& x);
    GLM_CTOR_DECL mat(const mat<3, 4, T, Q>& x);

    template <typename U>
    GLM_FUNC_DECL GLM_CONSTEXPR mat& operator=(const mat<4, 2, U, Q>& m);
};

// -- Unary operators --

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR typename mat<4, 2, T, Q>::col_type operator*(const mat<4, 2, T, Q>&                    m,
                                                                         const typename mat<4, 2, T, Q>::row_type& v);

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR typename mat<4, 2, T, Q>::row_type operator*(const typename mat<4, 2, T, Q>::col_type& v,
                                                                         const mat<4, 2, T, Q>&                    m);

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR mat<2, 2, T, Q> operator*(const mat<4, 2, T, Q>& m1, const mat<2, 4, T, Q>& m2);

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR mat<3, 2, T, Q> operator*(const mat<4, 2, T, Q>& m1, const mat<3, 4, T, Q>& m2);

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR mat<4, 2, T, Q> operator*(const mat<4, 2, T, Q>& m1, const mat<4, 4, T, Q>& m2);

} //namespace glm

#ifndef GLM_EXTERNAL_TEMPLATE
#include "type_mat4x2.inl"
#endif
