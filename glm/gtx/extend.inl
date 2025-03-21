/// @ref gtx_extend

namespace glm
{
template <typename genType>
GLM_FUNC_QUALIFIER genType extend(const genType& Origin, const genType& Source, const genType& Distance)
{
    return Origin + (Source - Origin) * Distance;
}

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER vec<L, T, Q> extend(const vec<L, T, Q>& Origin, const vec<L, T, Q>& Source, const T& Distance)
{
    return Origin + (Source - Origin) * Distance;
}

} //namespace glm
