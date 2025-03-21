/// @ref gtx_extended_min_max
/// @file glm/gtx/extended_min_max.hpp
///
/// @see core (dependence)
///
/// @defgroup gtx_extended_min_max GLM_GTX_extended_min_max
/// @ingroup gtx
///
/// Include <glm/gtx/extended_min_max.hpp> to use the features of this extension.
///
/// Min and max functions for 3 to 4 parameters.

#pragma once

// Dependency:
#include "../ext/vector_common.hpp"
#include "../glm.hpp"

#ifndef GLM_ENABLE_EXPERIMENTAL
#error \
    "GLM: GLM_GTX_extended_min_max is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it."
#elif GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#pragma message("GLM: GLM_GTX_extended_min_max extension included")
#endif

namespace glm
{
/// @addtogroup gtx_extended_min_max
/// @{

/// Return the minimum component-wise values of 3 inputs
/// @see gtx_extented_min_max
template <typename T>
GLM_FUNC_DECL T min(const T& x, const T& y, const T& z);

/// @see gtx_extented_min_max
template <typename T>
GLM_FUNC_DECL T min(const T& x, const T& y, const T& z, const T& w);

/// Return the maximum component-wise values of 3 inputs
/// @see gtx_extented_min_max
template <typename T>
GLM_FUNC_DECL T max(const T& x, const T& y, const T& z);

/// Return the maximum component-wise values of 4 inputs
/// @see gtx_extented_min_max
template <typename T>
GLM_FUNC_DECL T max(const T& x, const T& y, const T& z, const T& w);

/// @}
} //namespace glm

#include "extended_min_max.inl"
