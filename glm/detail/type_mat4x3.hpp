/// @ref core
/// @file glm/detail/type_mat4x3.hpp

#pragma once

#include "mat4xR_common_operators.hpp"
#include "type_vec3.hpp"
#include "type_vec4.hpp"
#include <cstddef>
#include <limits>

namespace glm
{
template <typename T, qualifier Q>
struct mat<4, 3, T, Q>
{
    typedef vec<3, T, Q>    col_type;
    typedef vec<4, T, Q>    row_type;
    typedef mat<4, 3, T, Q> type;
    typedef mat<3, 4, T, Q> transpose_type;
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
    GLM_CTOR_DECL mat(const mat<4, 3, T, P>& m);

    GLM_CTOR_DECL GLM_EXPLICIT mat(T s);
    GLM_CTOR_DECL              mat(const T& x0,
                                   const T& y0,
                                   const T& z0,
                                   const T& x1,
                                   const T& y1,
                                   const T& z1,
                                   const T& x2,
                                   const T& y2,
                                   const T& z2,
                                   const T& x3,
                                   const T& y3,
                                   const T& z3);
    GLM_CTOR_DECL              mat(const col_type& v0, const col_type& v1, const col_type& v2, const col_type& v3);

    // -- Conversions --

    template <typename X1, typename Y1, typename Z1, typename X2, typename Y2, typename Z2, typename X3, typename Y3, typename Z3, typename X4, typename Y4, typename Z4>
    GLM_CTOR_DECL mat(X1 const& x1,
                      Y1 const& y1,
                      Z1 const& z1,
                      X2 const& x2,
                      Y2 const& y2,
                      Z2 const& z2,
                      X3 const& x3,
                      Y3 const& y3,
                      Z3 const& z3,
                      X4 const& x4,
                      Y4 const& y4,
                      Z4 const& z4);

    template <typename V1, typename V2, typename V3, typename V4>
    GLM_CTOR_DECL mat(const vec<3, V1, Q>& v1, const vec<3, V2, Q>& v2, const vec<3, V3, Q>& v3, const vec<3, V4, Q>& v4);

    // -- Matrix conversions --

    template <typename U, qualifier P>
    GLM_CTOR_DECL mat(const mat<4, 3, U, P>& m);

    GLM_CTOR_DECL mat(const mat<2, 2, T, Q>& x);
    GLM_CTOR_DECL mat(const mat<3, 3, T, Q>& x);
    GLM_CTOR_DECL mat(const mat<4, 4, T, Q>& x);
    GLM_CTOR_DECL mat(const mat<2, 3, T, Q>& x);
    GLM_CTOR_DECL mat(const mat<3, 2, T, Q>& x);
    GLM_CTOR_DECL mat(const mat<2, 4, T, Q>& x);
    GLM_CTOR_DECL mat(const mat<4, 2, T, Q>& x);
    GLM_CTOR_DECL mat(const mat<3, 4, T, Q>& x);


    template <typename U>
    GLM_FUNC_DECL GLM_CONSTEXPR mat& operator=(const mat<4, 3, U, Q>& m);
};


template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR typename mat<4, 3, T, Q>::col_type operator*(const mat<4, 3, T, Q>&                    m,
                                                                         const typename mat<4, 3, T, Q>::row_type& v);

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR typename mat<4, 3, T, Q>::row_type operator*(const typename mat<4, 3, T, Q>::col_type& v,
                                                                         const mat<4, 3, T, Q>&                    m);

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR mat<2, 3, T, Q> operator*(const mat<4, 3, T, Q>& m1, const mat<2, 4, T, Q>& m2);

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR mat<3, 3, T, Q> operator*(const mat<4, 3, T, Q>& m1, const mat<3, 4, T, Q>& m2);

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR mat<4, 3, T, Q> operator*(const mat<4, 3, T, Q>& m1, const mat<4, 4, T, Q>& m2);

} //namespace glm

#ifndef GLM_EXTERNAL_TEMPLATE
#include "type_mat4x3.inl"
#endif //GLM_EXTERNAL_TEMPLATE
