#include<iostream>
#include<typeinfo>
#include<utility>

int main() {
    typename std::remove_const<const int>::type t;
    int a;
    std::cout << std::is_same<int, t>::value << std::endl;
    std::cout << typeid(t).name() << std::endl;
    return 1;
}
