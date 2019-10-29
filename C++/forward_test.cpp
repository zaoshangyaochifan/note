#include<iostream> 
#include<typeinfo>

#define VN(v) #v 

template<typename T>
void func(T&& t) {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    std::cout << std::typeid(t).name() << std::endl;
}



int main() {
    int a;
    func(a);
    return 0;
}
