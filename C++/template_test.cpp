#include<iostream>

class Error {
};

template<typename Err>
void func(Err& err) {
    std::cout << "Err" << std::endl;
}

void func(Error error) {
    std::cout << "Error" << std::endl;
}

int main() {
    Error e;
    int i;
    func(e);
    func(i);
    func<Error>(e);
    return 0;
}

