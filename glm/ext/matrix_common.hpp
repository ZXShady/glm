/// @ref ext_matrix_common
/// @file glm/ext/matrix_common.hpp
///
/// @defgroup ext_matrix_common GLM_EXT_matrix_common
/// @ingroup ext
///
/// Defines functions for common matrix operations.
///
/// Include <glm/ext/matrix_common.hpp> to use the features of this extension.
///
/// @see ext_matrix_common

#pragma once

#include "../detail/_fixes.hpp"
#include "../detail/qualifier.hpp"

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#pragma message("GLM: GLM_EXT_matrix_common extension included")
#endif

namespace glm
{
/// @addtogroup ext_matrix_common
/// @{

template <length_t C, length_t R, typename T, typename U, qualifier Q>
GLM_FUNC_DECL mat<C, R, T, Q> mix(const mat<C, R, T, Q>& x, const mat<C, R, T, Q>& y, const mat<C, R, U, Q>& a);

template <length_t C, length_t R, typename T, typename U, qualifier Q>
GLM_FUNC_DECL mat<C, R, T, Q> mix(const mat<C, R, T, Q>& x, const mat<C, R, T, Q>& y, U a);

template <length_t C, length_t R, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR mat<C, R, T, Q> abs(const mat<C, R, T, Q>& x);

/// @}
} //namespace glm

#include "matrix_common.inl"
