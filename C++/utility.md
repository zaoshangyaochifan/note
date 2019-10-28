# #include<utility>

```
swap

// **************************************************************
template<typename _Tp>
constexpr _Tp&&
forward(typename std::remove_reference<_Tp>::type& __t) noexcept {
    return static_cast<_Tp&&>(__t);
}

template<typename _Tp>
constexpr _Tp&&
forward(typename std::remove_reference<_Tp>::type&& __t) noexcept {
    static_assert(!std::is_lvalue_reference<_Tp>::value, "error message");
    return static_cast<_Tp&&>(__t);
}

// **************************************************************
template<typename _Tp>
constexpr typename std::remove_reference<_Tp>::type&&
move(_Tp&& __t) noexcept {
    return static_cast<typename std::remove_reference<_Tp>::type&&>(__t);
}

delcval

make_pair
```