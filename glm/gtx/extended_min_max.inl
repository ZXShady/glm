/// @ref gtx_extended_min_max

namespace glm
{

template <typename T>
GLM_FUNC_QUALIFIER T min(const T& x, const T& y, const T& z)
{
    return glm::min(glm::min(x, y), z);
}

template <typename T>
GLM_FUNC_QUALIFIER T min(const T& x, const T& y, const T& z, const T& w)
{
    return glm::min(glm::min(x, y), glm::min(z, w));
}


template <typename T>
GLM_FUNC_QUALIFIER T max(const T& x, const T& y, const T& z)
{
    return glm::max(glm::max(x, y), z);
}

template <typename T>
GLM_FUNC_QUALIFIER T max(const T& x, const T& y, const T& z, const T& w)
{
    return glm::max(glm::max(x, y), glm::max(z, w));
}

} //namespace glm
