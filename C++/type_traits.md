0. #include<type_traits>

'''
template<class Base, class Derived>
struct is_base_of;
'''

'''
template<bool B, class T = void>
struct enable_if;

template<bool B, class T = void>
using enable_if_t = typename enable_if<B, T>::type; // C++14

template<bool B, class T = void>
struct enable_if {};

template<class T>
struct enable_if<true, T> {typedef T type; };
'''

'''
template<class T>
struct decay;
'''
