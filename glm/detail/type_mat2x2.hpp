/// @ref core
/// @file glm/detail/type_mat2x2.hpp

#pragma once

#include "mat2xR_common_operators.hpp"
#include "type_vec2.hpp"
#include <cstddef>
#include <limits>

namespace glm
{
template <typename T, qualifier Q>
struct mat<2, 2, T, Q>
{
    typedef vec<2, T, Q>    col_type;
    typedef vec<2, T, Q>    row_type;
    typedef mat<2, 2, T, Q> type;
    typedef mat<2, 2, T, Q> transpose_type;
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
    GLM_CTOR_DECL mat(const mat<2, 2, T, P>& m);

    GLM_CTOR_DECL GLM_EXPLICIT mat(T scalar);
    GLM_CTOR_DECL              mat(const T& x1, const T& y1, const T& x2, const T& y2);
    GLM_CTOR_DECL              mat(const col_type& v1, const col_type& v2);

    // -- Conversions --

    template <typename U, typename V, typename M, typename N>
    GLM_CTOR_DECL mat(const U& x1, const V& y1, const M& x2, const N& y2);

    template <typename U, typename V>
    GLM_CTOR_DECL mat(const vec<2, U, Q>& v1, const vec<2, V, Q>& v2);

    // -- Matrix conversions --

    template <typename U, qualifier P>
    GLM_CTOR_DECL GLM_EXPLICIT mat(const mat<2, 2, U, P>& m);

    GLM_CTOR_DECL GLM_EXPLICIT mat(const mat<3, 3, T, Q>& x);
    GLM_CTOR_DECL GLM_EXPLICIT mat(const mat<4, 4, T, Q>& x);
    GLM_CTOR_DECL GLM_EXPLICIT mat(const mat<2, 3, T, Q>& x);
    GLM_CTOR_DECL GLM_EXPLICIT mat(const mat<3, 2, T, Q>& x);
    GLM_CTOR_DECL GLM_EXPLICIT mat(const mat<2, 4, T, Q>& x);
    GLM_CTOR_DECL GLM_EXPLICIT mat(const mat<4, 2, T, Q>& x);
    GLM_CTOR_DECL GLM_EXPLICIT mat(const mat<3, 4, T, Q>& x);
    GLM_CTOR_DECL GLM_EXPLICIT mat(const mat<4, 3, T, Q>& x);

    template <typename U>
    GLM_FUNC_DECL GLM_CONSTEXPR mat& operator=(const mat<2, 2, U, Q>& m);
    template <typename U>
    GLM_FUNC_DECL GLM_CONSTEXPR mat& operator*=(const mat<2, 2, U, Q>& m);
    template <typename U>
    GLM_FUNC_DECL GLM_CONSTEXPR mat& operator/=(const mat<2, 2, U, Q>& m);
};

// -- Binary operators --

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR typename mat<2, 2, T, Q>::col_type operator*(const mat<2, 2, T, Q>&                    m,
                                                                         const typename mat<2, 2, T, Q>::row_type& v);

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR typename mat<2, 2, T, Q>::row_type operator*(const typename mat<2, 2, T, Q>::col_type& v,
                                                                         const mat<2, 2, T, Q>&                    m);

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR mat<2, 2, T, Q> operator*(const mat<2, 2, T, Q>& m1, const mat<2, 2, T, Q>& m2);

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR mat<3, 2, T, Q> operator*(const mat<2, 2, T, Q>& m1, const mat<3, 2, T, Q>& m2);

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR mat<4, 2, T, Q> operator*(const mat<2, 2, T, Q>& m1, const mat<4, 2, T, Q>& m2);

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR typename mat<2, 2, T, Q>::col_type operator/(const mat<2, 2, T, Q>&                    m,
                                                                         const typename mat<2, 2, T, Q>::row_type& v);

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR typename mat<2, 2, T, Q>::row_type operator/(const typename mat<2, 2, T, Q>::col_type& v,
                                                                         const mat<2, 2, T, Q>&                    m);

template <typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR mat<2, 2, T, Q> operator/(const mat<2, 2, T, Q>& m1, const mat<2, 2, T, Q>& m2);

} //namespace glm

#ifndef GLM_EXTERNAL_TEMPLATE
#include "type_mat2x2.inl"
#endif
