import itertools
import sys

def make_binary_funcs(op_symbols):
    template = """
template<length_t L, typename T, qualifier Q,typename U,qualifier P>
GLM_FUNC_DECL GLM_CONSTEXPR vec<L, T, Q>& operator{op_symbol}=(vec<L, T, Q>& a, vec<1,U,P> const& b);
template<length_t L, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<L, T, Q> operator{op_symbol}(vec<L, T, Q> const& a, vec<1,T,Q> const& b);
template<length_t L, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<L, T, Q> operator{op_symbol}(vec<1, T, Q> const& a, vec<L,T,Q> const& b);
"""
    sys.stdout =  open('generated_vector_operations.hpp', 'a')
    for op_symbol in op_symbols:
        print(template.format(
            op_symbol= op_symbol
        ),end="")
    sys.stdout.close()

    template = """
template<length_t L, typename T, qualifier Q,typename U,qualifier P>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q>& operator{op_symbol}=(vec<L, T, Q>& a, vec<1,U,P> const& b) {{
    return a {op_symbol}= b.x;
}}
template<length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> operator{op_symbol}(vec<L, T, Q> const& a, vec<1,T,Q> const& b) {{
    return a {op_symbol} b.x;
}}
template<length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> operator{op_symbol}(vec<1, T, Q> const& a, vec<L,T,Q> const& b) {{
    return a.x {op_symbol} b;
}}
"""
    sys.stdout =  open('generated_vector_operations.inl', 'a')
    for op_symbol in op_symbols:
        print(template.format(
            op_symbol= op_symbol
        ),end="")
    sys.stdout.close()


def make_scalar_commutative_operators(op_symbols):
    template = """
template<length_t L, typename T, qualifier Q>
GLM_FUNC_DECL GLM_CONSTEXPR vec<L, T, Q> operator{op_symbol}(T scalar,vec<L, T, Q> const& v);
"""
    sys.stdout =  open('generated_vector_operations.hpp', 'a')
    for op_symbol in op_symbols:
        print(template.format(
            op_symbol= op_symbol
        ),end="")
    sys.stdout.close()

    template = """
template<length_t L, typename T, qualifier Q>
GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> operator{op_symbol}(T scalar,vec<L, T, Q> const& v) {{
    return v {op_symbol} scalar;
}}
"""
    sys.stdout =  open('generated_vector_operations.inl', 'a')
    for op_symbol in op_symbols:
        print(template.format(
            op_symbol= op_symbol
        ),end="")
    sys.stdout.close()




if __name__ == "__main__":
     make_binary_funcs(['+', '-', '*', '/', '%', '&', '|', '^', '<<', '>>'])
     make_scalar_commutative_operators(['+', '*', '&', '|', '^'])