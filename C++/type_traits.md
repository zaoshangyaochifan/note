# #include<type_traits>

```
template<typename Base, typename Derived>
struct is_base_of;

template<bool B, typename T = void>
struct enable_if;

template<bool B, typename T = void>
using enable_if_t = typename enable_if<B, T>::type; // C++14

template<bool B, typename T = void>
struct enable_if {};

template<typename T>
struct enable_if<true, T> {typedef T type; };

template<typename T>
struct decay {};

template<typename _Tp>
struct remove_const {typedef _Tp type;};

template<typename _Tp>
struct remove_const<_Tp const> {typedef _Tp type;};
/****************IMPORTANT****************
*  const int * = (const int) *, _Tp = (const int) *, nothing to remove
*  int const * = (int const) *
*  int * const = (int *) const, _Tp = (int *), remove const
*  typedef int * A; const A = int * const
*  typedef const int A; A * = const int *
*/
```
