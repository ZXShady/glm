/// @ref gtx_vector_angle

namespace glm
{
template <typename genType>
GLM_FUNC_QUALIFIER genType angle(const genType& x, const genType& y)
{
    GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'angle' only accept floating-point inputs");
    return acos(clamp(dot(x, y), genType(-1), genType(1)));
}

template <length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER T angle(const vec<L, T, Q>& x, const vec<L, T, Q>& y)
{
    GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559 || GLM_CONFIG_UNRESTRICTED_FLOAT,
                      "'angle' only accept floating-point inputs");
    return acos(clamp(dot(x, y), T(-1), T(1)));
}

template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER T orientedAngle(const vec<2, T, Q>& x, const vec<2, T, Q>& y)
{
    GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559 || GLM_CONFIG_UNRESTRICTED_FLOAT,
                      "'orientedAngle' only accept floating-point inputs");
    const T Angle(acos(clamp(dot(x, y), T(-1), T(1))));

    const T partialCross = x.x * y.y - y.x * x.y;

    if (partialCross > T(0))
        return Angle;
    else
        return -Angle;
}

template <typename T, qualifier Q>
GLM_FUNC_QUALIFIER T orientedAngle(const vec<3, T, Q>& x, const vec<3, T, Q>& y, const vec<3, T, Q>& ref)
{
    GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559 || GLM_CONFIG_UNRESTRICTED_FLOAT,
                      "'orientedAngle' only accept floating-point inputs");

    const T Angle(acos(clamp(dot(x, y), T(-1), T(1))));
    return mix(Angle, -Angle, dot(ref, cross(x, y)) < T(0));
}
} //namespace glm
