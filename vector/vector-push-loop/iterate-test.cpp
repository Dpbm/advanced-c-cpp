#include <iostream>
#include <vector>

void f(std::vector<int>& v){
    /*
        push    rbp
        mov     rbp, rsp
        sub     rsp, 16

        mov     qword ptr [rbp - 8], rdi // save the input pointer in [rbp-8]
        mov     rdi, qword ptr [rbp - 8] // load it into rdi again 

        mov     dword ptr [rbp - 12], 100 // add the parameter
        lea     rsi, [rbp - 12] // set the parameter
        call    std::vector<int, std::allocator<int>>::push_back(int&&) // push the value

        add     rsp, 16
        pop     rbp
        ret

    */

    // it's bad because if the amount of allocated memory for v reaches its limit, 
    // it will reallocate new memory, the old pointer for ::begin and ::end will become invalid
    // so it leads to undefined behavior

    v.push_back(100);
}

int main(){

    /*
        // move the values on stack
        mov     dword ptr [rbp - 144], 1
        mov     dword ptr [rbp - 140], 2
        mov     dword ptr [rbp - 136], 3
        mov     dword ptr [rbp - 132], 5

        // store the pointer to the first element in rax
        lea     rax, [rbp - 144]

        // store the rax on stack
        mov     qword ptr [rbp - 128], rax
        // store the size of the array on stack
        mov     qword ptr [rbp - 120], 4


        lea     rcx, [rbp - 145]
        mov     qword ptr [rbp - 80], rcx
        mov     rax, qword ptr [rbp - 80]
        mov     qword ptr [rbp - 8], rax

        // the parameters for the call
        mov     rsi, qword ptr [rbp - 128] // pointer to the first value
        mov     rdx, qword ptr [rbp - 120] // size
        lea     rdi, [rbp - 112] // the location for the array
        call    std::vector<int, std::allocator<int>>::vector(std::initializer_list<int>, std::allocator<int> const&) [base object constructor]

    */
    std::vector<int> v = {1,2,3,5};

    /*
        // get the array location
        lea     rax, [rbp - 112]
        mov     qword ptr [rbp - 176], rax //save it

        mov     rdi, qword ptr [rbp - 176] // location to store the beginning
        call    std::vector<int, std::allocator<int>>::begin()
        
        mov     qword ptr [rbp - 184], rax // move rax somewhere
        mov     rdi, qword ptr [rbp - 176] // same location as before (maybe)
        call    std::vector<int, std::allocator<int>>::end()
    */
    for(auto val: v){

        /*
            mov     eax, dword ptr [rax]
            mov     dword ptr [rbp - 196], eax
            lea     rdi, [rbp - 112] // load the pointer
            call    f(std::vector<int, std::allocator<int>>&) // call it
            jmp     .LBB2_4

        */
        f(v);
        std::cout << val << " "; 
    }
    return 0;
}
