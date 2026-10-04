#include <iostream>

template <int A>
void test(){
    std::cout << "OK WE HAVE SOMETHING INSIDE: " << A << std::endl;
}

int main(){
    
    test<10>();
    return 0;
}
