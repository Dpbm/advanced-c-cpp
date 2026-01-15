#include <functional>

class MyClass{
    public:
        static int add(int a){
            return a+2;
        }

        int minus_one(int a){
            return a -1;
        }

};


int main(){

    MyClass m{}; // saved at [rbp - 5]
    //MyClass::add(10); // could be called this way

    // store the function position at rax
    // store the rax value into [rbp-40]
    // store zero in [rbp-32]
    // insert [rbp-40] into rdi
    // insert [rbp-32] into rsi
    // call mem_fn
    // save the pointer into [rbp-24] (came from rax)
    auto fun = std::mem_fn(&MyClass::minus_one);

    // calculate the position for `m` and store in rax
    // mov rax into [rbp-48]
    // store 10 into [rbp-52]
    // calculate the position of [rbp-24] into rdi (the fun variable)
    // calculate the position of [rbp-48] into rsi (the `m`) 
    // calculate the position of [rbp-52] into rdx (the 10 input)
    // call the method
    fun(&m, 10);

    return 0;
}
