/// @ref gtx_texture

namespace glm
{
template <length_t L, typename T, qualifier Q>
inline T levels(const vec<L, T, Q>& Extent)
{
    return glm::log2(compMax(Extent)) + static_cast<T>(1);
}

template <typename T>
inline T levels(T Extent)
{
    return levels(vec<1, T, defaultp>(Extent));
}
} //namespace glm
