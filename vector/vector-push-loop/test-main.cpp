#include <iostream>
#include <vector>


int main(){


    const std::vector<int> v = {1,2,3,5};

    for(const auto val: v){
        /*
        lea     rax, [rbp - 112]
        mov     qword ptr [rbp - 176], rax
        mov     rdi, qword ptr [rbp - 176]
        call    std::vector<int, std::allocator<int>>::begin() const
        mov     qword ptr [rbp - 184], rax <- it really does that thing (holds the begin from the call)
        mov     rdi, qword ptr [rbp - 176]
        call    std::vector<int, std::allocator<int>>::end() const
        mov     qword ptr [rbp - 192], rax
        */
        std::cout << val << " "; 
    }
    return 0;
}