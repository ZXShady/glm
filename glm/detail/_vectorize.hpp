#pragma once
#include "qualifier.hpp"

namespace glm
{
namespace detail
{

template <typename Func, typename T, qualifier Q>
GLM_FUNC_QUALIFIER constexpr auto vectorize(Func func, vec<2, T, Q> const& a) -> vec<2, decltype(func(a.x)), Q>
{
    return vec<2, decltype(func(a.x)), Q>(func(a.x), func(a.y));
}

template <typename Func, typename T, typename U, qualifier Q>
GLM_FUNC_QUALIFIER constexpr auto vectorize(Func func, vec<2, T, Q> const& a, U const& b) -> vec<2, decltype(func(a.x, b)), Q>
{
    return vec<2, decltype(func(a.x, b)), Q>(func(a.x, b), func(a.y, b));
}

template <typename Func, typename T, typename U, qualifier Q>
GLM_FUNC_QUALIFIER constexpr auto vectorize(Func func, vec<2, T, Q> const& a, vec<2, U, Q> const& b)
    -> vec<2, decltype(func(a.x, b.x)), Q>
{
    return vec<2, decltype(func(a.x, b.x)), Q>(func(a.x, b.x), func(a.y, b.y));
}


template <typename Func, typename T, qualifier Q>
GLM_FUNC_QUALIFIER constexpr auto vectorize(Func func, vec<3, T, Q> const& a) -> vec<3, decltype(func(a.x)), Q>
{
    return vec<3, decltype(func(a.x)), Q>(func(a.x), func(a.y), func(a.z));
}

template <typename Func, typename T, typename U, qualifier Q>
GLM_FUNC_QUALIFIER constexpr auto vectorize(Func func, vec<3, T, Q> const& a, U const& b) -> vec<3, decltype(func(a.x, b)), Q>
{
    return vec<3, decltype(func(a.x, b)), Q>(func(a.x, b), func(a.y, b), func(a.z, b));
}

template <typename Func, typename T, typename U, qualifier Q>
GLM_FUNC_QUALIFIER constexpr auto vectorize(Func func, vec<3, T, Q> const& a, vec<3, U, Q> const& b)
    -> vec<3, decltype(func(a.x, b.x)), Q>
{
    return vec<3, decltype(func(a.x, b.x)), Q>(func(a.x, b.x), func(a.y, b.y), func(a.z, b.z));
}


template <typename Func, typename T, qualifier Q>
GLM_FUNC_QUALIFIER constexpr auto vectorize(Func func, vec<4, T, Q> const& a) -> vec<4, decltype(func(a.x)), Q>
{
    return vec<4, decltype(func(a.x)), Q>(func(a.x), func(a.y), func(a.z), func(a.w));
}

template <typename Func, typename T, typename U, qualifier Q>
GLM_FUNC_QUALIFIER constexpr auto vectorize(Func func, vec<4, T, Q> const& a, U const& b) -> vec<4, decltype(func(a.x, b)), Q>
{
    return vec<4, decltype(func(a.x, b)), Q>(func(a.x, b), func(a.y, b), func(a.z, b), func(a.w, b));
}

template <typename Func, typename T, typename U, qualifier Q>
GLM_FUNC_QUALIFIER constexpr auto vectorize(Func func, vec<4, T, Q> const& a, vec<4, U, Q> const& b)
    -> vec<4, decltype(func(a.x, b.x)), Q>
{
    return vec<4, decltype(func(a.x, b.x)), Q>(func(a.x, b.x), func(a.y, b.y), func(a.z, b.z), func(a.w, b.w));
}

template <template <length_t L, typename T, qualifier Q> class vec, length_t L, typename R, typename T, qualifier Q>
struct functor1
{
};

template <template <length_t L, typename T, qualifier Q> class vec, typename R, typename T, qualifier Q>
struct functor1<vec, 1, R, T, Q>
{
    GLM_FUNC_QUALIFIER GLM_CONSTEXPR static vec<1, R, Q> call(R (*Func)(T x), vec<1, T, Q> const& v)
    {
        return vec<1, R, Q>(Func(v.x));
    }
};

template <template <length_t L, typename T, qualifier Q> class vec, typename R, typename T, qualifier Q>
struct functor1<vec, 2, R, T, Q>
{
    GLM_FUNC_QUALIFIER GLM_CONSTEXPR static vec<2, R, Q> call(R (*Func)(T x), vec<2, T, Q> const& v)
    {
        return vec<2, R, Q>(Func(v.x), Func(v.y));
    }
};

template <template <length_t L, typename T, qualifier Q> class vec, typename R, typename T, qualifier Q>
struct functor1<vec, 3, R, T, Q>
{
    GLM_FUNC_QUALIFIER GLM_CONSTEXPR static vec<3, R, Q> call(R (*Func)(T x), vec<3, T, Q> const& v)
    {
        return vec<3, R, Q>(Func(v.x), Func(v.y), Func(v.z));
    }
};

template <template <length_t L, typename T, qualifier Q> class vec, typename R, typename T, qualifier Q>
struct functor1<vec, 4, R, T, Q>
{
    GLM_FUNC_QUALIFIER GLM_CONSTEXPR static vec<4, R, Q> call(R (*Func)(T x), vec<4, T, Q> const& v)
    {
        return vec<4, R, Q>(Func(v.x), Func(v.y), Func(v.z), Func(v.w));
    }
};

template <template <length_t L, typename T, qualifier Q> class vec, length_t L, typename T, qualifier Q>
struct functor2
{
};

template <template <length_t L, typename T, qualifier Q> class vec, typename T, qualifier Q>
struct functor2<vec, 1, T, Q>
{
    GLM_FUNC_QUALIFIER static vec<1, T, Q> call(T (*Func)(T x, T y), vec<1, T, Q> const& a, vec<1, T, Q> const& b)
    {
        return vec<1, T, Q>(Func(a.x, b.x));
    }

    template <typename Fct>
    GLM_FUNC_QUALIFIER GLM_CONSTEXPR static vec<1, T, Q> call(Fct Func, vec<1, T, Q> const& a, vec<1, T, Q> const& b)
    {
        return vec<1, T, Q>(Func(a.x, b.x));
    }
};

template <template <length_t L, typename T, qualifier Q> class vec, typename T, qualifier Q>
struct functor2<vec, 2, T, Q>
{
    GLM_FUNC_QUALIFIER static vec<2, T, Q> call(T (*Func)(T x, T y), vec<2, T, Q> const& a, vec<2, T, Q> const& b)
    {
        return vec<2, T, Q>(Func(a.x, b.x), Func(a.y, b.y));
    }

    template <typename Fct>
    GLM_FUNC_QUALIFIER GLM_CONSTEXPR static vec<2, T, Q> call(Fct Func, vec<2, T, Q> const& a, vec<2, T, Q> const& b)
    {
        return vec<2, T, Q>(Func(a.x, b.x), Func(a.y, b.y));
    }
};

template <template <length_t L, typename T, qualifier Q> class vec, typename T, qualifier Q>
struct functor2<vec, 3, T, Q>
{
    GLM_FUNC_QUALIFIER static vec<3, T, Q> call(T (*Func)(T x, T y), vec<3, T, Q> const& a, vec<3, T, Q> const& b)
    {
        return vec<3, T, Q>(Func(a.x, b.x), Func(a.y, b.y), Func(a.z, b.z));
    }

    template <class Fct>
    GLM_FUNC_QUALIFIER GLM_CONSTEXPR static vec<3, T, Q> call(Fct Func, vec<3, T, Q> const& a, vec<3, T, Q> const& b)
    {
        return vec<3, T, Q>(Func(a.x, b.x), Func(a.y, b.y), Func(a.z, b.z));
    }
};

template <template <length_t L, typename T, qualifier Q> class vec, typename T, qualifier Q>
struct functor2<vec, 4, T, Q>
{
    GLM_FUNC_QUALIFIER static vec<4, T, Q> call(T (*Func)(T x, T y), vec<4, T, Q> const& a, vec<4, T, Q> const& b)
    {
        return vec<4, T, Q>(Func(a.x, b.x), Func(a.y, b.y), Func(a.z, b.z), Func(a.w, b.w));
    }

    template <class Fct>
    GLM_FUNC_QUALIFIER GLM_CONSTEXPR static vec<4, T, Q> call(Fct Func, vec<4, T, Q> const& a, vec<4, T, Q> const& b)
    {
        return vec<4, T, Q>(Func(a.x, b.x), Func(a.y, b.y), Func(a.z, b.z), Func(a.w, b.w));
    }
};

template <template <length_t L, typename T, qualifier Q> class vec, length_t L, typename T, qualifier Q>
struct functor2_vec_sca
{
};

template <template <length_t L, typename T, qualifier Q> class vec, typename T, qualifier Q>
struct functor2_vec_sca<vec, 1, T, Q>
{
    GLM_FUNC_QUALIFIER static vec<1, T, Q> call(T (*Func)(T x, T y), vec<1, T, Q> const& a, T b)
    {
        return vec<1, T, Q>(Func(a.x, b));
    }
    template <class Fct>
    GLM_FUNC_QUALIFIER GLM_CONSTEXPR static vec<1, T, Q> call(Fct Func, vec<1, T, Q> const& a, T b)
    {
        return vec<1, T, Q>(Func(a.x, b));
    }
};

template <template <length_t L, typename T, qualifier Q> class vec, typename T, qualifier Q>
struct functor2_vec_sca<vec, 2, T, Q>
{
    GLM_FUNC_QUALIFIER static vec<2, T, Q> call(T (*Func)(T x, T y), vec<2, T, Q> const& a, T b)
    {
        return vec<2, T, Q>(Func(a.x, b), Func(a.y, b));
    }

    template <class Fct>
    GLM_FUNC_QUALIFIER GLM_CONSTEXPR static vec<2, T, Q> call(Fct Func, vec<2, T, Q> const& a, T b)
    {
        return vec<2, T, Q>(Func(a.x, b), Func(a.y, b));
    }
};

template <template <length_t L, typename T, qualifier Q> class vec, typename T, qualifier Q>
struct functor2_vec_sca<vec, 3, T, Q>
{
    GLM_FUNC_QUALIFIER static vec<3, T, Q> call(T (*Func)(T x, T y), vec<3, T, Q> const& a, T b)
    {
        return vec<3, T, Q>(Func(a.x, b), Func(a.y, b), Func(a.z, b));
    }

    template <class Fct>
    GLM_FUNC_QUALIFIER GLM_CONSTEXPR static vec<3, T, Q> call(Fct Func, vec<3, T, Q> const& a, T b)
    {
        return vec<3, T, Q>(Func(a.x, b), Func(a.y, b), Func(a.z, b));
    }
};

template <template <length_t L, typename T, qualifier Q> class vec, typename T, qualifier Q>
struct functor2_vec_sca<vec, 4, T, Q>
{
    GLM_FUNC_QUALIFIER static vec<4, T, Q> call(T (*Func)(T x, T y), vec<4, T, Q> const& a, T b)
    {
        return vec<4, T, Q>(Func(a.x, b), Func(a.y, b), Func(a.z, b), Func(a.w, b));
    }
    template <class Fct>
    GLM_FUNC_QUALIFIER GLM_CONSTEXPR static vec<4, T, Q> call(Fct Func, vec<4, T, Q> const& a, T b)
    {
        return vec<4, T, Q>(Func(a.x, b), Func(a.y, b), Func(a.z, b), Func(a.w, b));
    }
};

template <length_t L, typename T, qualifier Q>
struct functor2_vec_int
{
};

template <typename T, qualifier Q>
struct functor2_vec_int<1, T, Q>
{
    GLM_FUNC_QUALIFIER static vec<1, int, Q> call(int (*Func)(T x, int y), vec<1, T, Q> const& a, vec<1, int, Q> const& b)
    {
        return vec<1, int, Q>(Func(a.x, b.x));
    }

    template <class Fct>
    GLM_FUNC_QUALIFIER GLM_CONSTEXPR static vec<1, int, Q> call(Fct Func, vec<1, T, Q> const& a, vec<1, int, Q> const& b)
    {
        return vec<1, int, Q>(Func(a.x, b.x));
    }
};

template <typename T, qualifier Q>
struct functor2_vec_int<2, T, Q>
{
    GLM_FUNC_QUALIFIER static vec<2, int, Q> call(int (*Func)(T x, int y), vec<2, T, Q> const& a, vec<2, int, Q> const& b)
    {
        return vec<2, int, Q>(Func(a.x, b.x), Func(a.y, b.y));
    }
    template <class Fct>
    GLM_FUNC_QUALIFIER GLM_CONSTEXPR static vec<2, int, Q> call(Fct Func, vec<2, T, Q> const& a, vec<2, int, Q> const& b)
    {
        return vec<2, int, Q>(Func(a.x, b.x), Func(a.y, b.y));
    }
};

template <typename T, qualifier Q>
struct functor2_vec_int<3, T, Q>
{
    GLM_FUNC_QUALIFIER static vec<3, int, Q> call(int (*Func)(T x, int y), vec<3, T, Q> const& a, vec<3, int, Q> const& b)
    {
        return vec<3, int, Q>(Func(a.x, b.x), Func(a.y, b.y), Func(a.z, b.z));
    }
    template <class Fct>
    GLM_FUNC_QUALIFIER GLM_CONSTEXPR static vec<3, int, Q> call(Fct Func, vec<3, T, Q> const& a, vec<3, int, Q> const& b)
    {
        return vec<3, int, Q>(Func(a.x, b.x), Func(a.y, b.y), Func(a.z, b.z));
    }
};

template <typename T, qualifier Q>
struct functor2_vec_int<4, T, Q>
{
    GLM_FUNC_QUALIFIER static vec<4, int, Q> call(int (*Func)(T x, int y), vec<4, T, Q> const& a, vec<4, int, Q> const& b)
    {
        return vec<4, int, Q>(Func(a.x, b.x), Func(a.y, b.y), Func(a.z, b.z), Func(a.w, b.w));
    }

    template <class Fct>
    GLM_FUNC_QUALIFIER GLM_CONSTEXPR static vec<4, int, Q> call(Fct Func, vec<4, T, Q> const& a, vec<4, int, Q> const& b)
    {
        return vec<4, int, Q>(Func(a.x, b.x), Func(a.y, b.y), Func(a.z, b.z), Func(a.w, b.w));
    }
};
} //namespace detail
} //namespace glm
