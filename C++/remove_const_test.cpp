#include<iostream>
#include<type_traits>
#include<typeinfo>

template<typename T>
struct remove_c {
    typedef T type;
};

template<typename T>
struct remove_c<const T> {
    typedef T type;
};

int main() {
    std::cout << std::is_same<const int *, remove_c<const int *>::type>::value << std::endl;
    std::cout << std::is_same<int * const, remove_c<int * const>::type>::value << std::endl;

    std::cout << std::is_same<const int *, std::remove_const<const int *>::type>::value << std::endl;
    std::cout << std::is_same<int * const, std::remove_const<int * const>::type>::value << std::endl;
    return 0;
}
