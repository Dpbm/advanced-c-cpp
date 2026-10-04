#include <iostream>

constexpr int something(int j){
    return 2 + j;
}

template <int (*a)(int)>
consteval int call_it(int n){
   return 10 * 1000 * a(n); 
}

int main(){
    constexpr int a = call_it<&something>(6);
    std::cout << a << std::endl;

    return 0;
}
