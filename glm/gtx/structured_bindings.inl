namespace glm
{
template <length_t I, length_t L, typename T, qualifier Q>
GLM_CONSTEXPR T& get(vec<L, T, Q>& v)
{
    GLM_STATIC_ASSERT(I < L, "Index out of bounds");
    return v[I];
}
template <length_t I, length_t L, typename T, qualifier Q>
GLM_CONSTEXPR const T& get(const vec<L, T, Q>& v)
{
    GLM_STATIC_ASSERT(I < L, "Index out of bounds");
    return v[I];
}

template <length_t I, length_t C, length_t R, typename T, qualifier Q>
GLM_CONSTEXPR vec<R, T, Q>& get(mat<C, R, T, Q>& m)
{
    GLM_STATIC_ASSERT(I < C, "Index out of bounds");
    return m[I];
}
template <length_t I, length_t C, length_t R, typename T, qualifier Q>
GLM_CONSTEXPR const vec<R, T, Q>& get(const mat<C, R, T, Q>& m)
{
    GLM_STATIC_ASSERT(I < C, "Index out of bounds");
    return m[I];
}

template <length_t I, typename T, qualifier Q>
GLM_CONSTEXPR T& get(qua<T, Q>& q)
{
    GLM_STATIC_ASSERT(I < 4, "Index out of bounds");
    return q[I];
}
template <length_t I, typename T, qualifier Q>
GLM_CONSTEXPR const T& get(const qua<T, Q>& q)
{
    GLM_STATIC_ASSERT(I < 4, "Index out of bounds");
    return q[I];
}

#if GLM_HAS_RVALUE_REFERENCES
template <length_t I, length_t L, typename T, qualifier Q>
GLM_CONSTEXPR T get(const vec<L, T, Q>&& v)
{
    GLM_STATIC_ASSERT(I < L, "Index out of bounds");
    return v[I];
}
template <length_t I, length_t C, length_t R, typename T, qualifier Q>
GLM_CONSTEXPR vec<R, T, Q> get(const mat<C, R, T, Q>&& m)
{
    GLM_STATIC_ASSERT(I < C, "Index out of bounds");
    return m[I];
}
template <length_t I, typename T, qualifier Q>
GLM_CONSTEXPR T get(const qua<T, Q>&& q)
{
    GLM_STATIC_ASSERT(I < 4, "Index out of bounds");
    return q[I];
}
#endif
} //namespace glm
