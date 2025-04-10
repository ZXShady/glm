/// @ref gtx_type_trait
/// @file glm/gtx/type_trait.hpp
///
/// @see core (dependence)
///
/// @defgroup gtx_type_trait GLM_GTX_type_trait
/// @ingroup gtx
///
/// Include <glm/gtx/type_trait.hpp> to use the features of this extension.
///
/// Defines traits for each type.

#pragma once

#ifndef GLM_ENABLE_EXPERIMENTAL
#error \
    "GLM: GLM_GTX_type_trait is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it."
#elif GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#pragma message("GLM: GLM_GTX_type_trait extension included")
#endif

// Dependency:
#include "../detail/qualifier.hpp"
#include "../gtc/quaternion.hpp"
#include "../gtx/dual_quaternion.hpp"

namespace glm
{
/// @addtogroup gtx_type_trait
/// @{

template <typename T>
struct type
{
    static constexpr bool     is_vec     = false;
    static constexpr bool     is_mat     = false;
    static constexpr bool     is_quat    = false;
    static constexpr length_t components = 0;
    static constexpr length_t cols       = 0;
    static constexpr length_t rows       = 0;
};

template <length_t L, typename T, qualifier Q>
struct type<vec<L, T, Q>>
{
    static constexpr bool     is_vec     = true;
    static constexpr bool     is_mat     = false;
    static constexpr bool     is_quat    = false;
    static constexpr length_t components = L;
};

template <length_t C, length_t R, typename T, qualifier Q>
struct type<mat<C, R, T, Q>>
{
    static constexpr bool     is_vec     = false;
    static constexpr bool     is_mat     = true;
    static constexpr bool     is_quat    = false;
    static constexpr length_t components = C;
    static constexpr length_t cols       = C;
    static constexpr length_t rows       = R;
};

template <typename T, qualifier Q>
struct type<qua<T, Q>>
{
    static constexpr bool     is_vec     = false;
    static constexpr bool     is_mat     = false;
    static constexpr bool     is_quat    = true;
    static constexpr length_t components = 4;
};

template <typename T, qualifier Q>
struct type<tdualquat<T, Q>>
{
    static constexpr bool     is_vec     = false;
    static constexpr bool     is_mat     = false;
    static constexpr bool     is_quat    = true;
    static constexpr length_t components = 8;
};

/// @}
} //namespace glm
