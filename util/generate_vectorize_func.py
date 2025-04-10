import itertools

def make_vectorizers(members, vector_length):
    member_access = [f"a.{members[i]}" for i in range(vector_length)]
    scalar_call = [f"func(a.{members[i]}, b)" for i in range(vector_length)]
    vector_call = [f"func(a.{members[i]}, b.{members[i]})" for i in range(vector_length)]
    unary_call = [f"func(a.{members[i]})" for i in range(vector_length)]
    
    print(f"""
template <typename Func, typename T, qualifier Q>
GLM_FUNC_QUALIFIER constexpr auto vectorize(Func func, vec<{vector_length}, T, Q> const& a)
    -> vec<{vector_length}, decltype(func(a.x)), Q>
{{
    return vec<{vector_length}, decltype(func(a.x)), Q>({", ".join(unary_call)});
}}

template <typename Func, typename T, typename U, qualifier Q>
GLM_FUNC_QUALIFIER constexpr auto vectorize(Func func, vec<{vector_length}, T, Q> const& a, U const& b)
    -> vec<{vector_length}, decltype(func(a.x, b)), Q>
{{
    return vec<{vector_length}, decltype(func(a.x, b)), Q>({", ".join(scalar_call)});
}}

template <typename Func, typename T, typename U, qualifier Q>
GLM_FUNC_QUALIFIER constexpr auto vectorize(Func func, vec<{vector_length}, T, Q> const& a, vec<{vector_length}, U, Q> const& b)
    -> vec<{vector_length}, decltype(func(a.x, b.x)), Q>
{{
    return vec<{vector_length}, decltype(func(a.x, b.x)), Q>({", ".join(vector_call)});
}}
""")


if __name__ == "__main__":
    for i in range(1, 5):
        make_vectorizers(['x', 'y', 'z', 'w'], i)
