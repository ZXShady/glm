/// @ref core
/// @file glm/detail/func_exponential_simd.inl

#include "../simd/exponential.h"

#if GLM_ARCH & GLM_ARCH_SSE2_BIT

namespace glm
{
namespace detail
{
template <qualifier Q>
struct compute_sqrt<4, float, Q, true>
{
    GLM_FUNC_QUALIFIER static vec<4, float, Q> call(const vec<4, float, Q>& v)
    {
        vec<4, float, Q> Result;
        Result.data = _mm_sqrt_ps(v.data);
        return Result;
    }
};

#if GLM_CONFIG_ALIGNED_GENTYPES == GLM_ENABLE
template <>
struct compute_sqrt<4, float, aligned_lowp, true>
{
    GLM_FUNC_QUALIFIER static vec<4, float, aligned_lowp> call(const vec<4, float, aligned_lowp>& v)
    {
        vec<4, float, aligned_lowp> Result;
        Result.data = glm_vec4_sqrt_lowp(v.data);
        return Result;
    }
};
#endif
} //namespace detail
} //namespace glm

#endif //GLM_ARCH & GLM_ARCH_SSE2_BIT
