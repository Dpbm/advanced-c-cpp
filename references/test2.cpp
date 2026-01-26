#include <iostream>

using namespace std;

void f(int& a, int& b){
    /*
        mov     qword ptr [rbp - 8], rdi
        mov     qword ptr [rbp - 16], rsi


        // note rdi == rsi

        mov     rax, qword ptr [rbp - 8] //rdi
        mov     dword ptr [rax], 1 // rdi = rsi = 1

        mov     rax, qword ptr [rbp - 16] // rsi = rdi
        mov     esi, dword ptr [rax]
        mov     rdi, qword ptr [rip + std::cout@GOTPCREL]
        call    std::ostream::operator<<(int)@PLT

        // they are pointing to the same location, If we had extended the value,
        the return would be 0 instead of 1, but not modifications were done primarily
        to the `b` argument
    */


    a = 1;
    cout << b;
}

int main(){
    /*
        mov     dword ptr [rbp - 4], 0
        lea     rsi, [rbp - 4]
        mov     rdi, rsi
        call    f(int&, int&)

        we don't have the double anymore, so the compiler uses the same memory location

    */

    int x = 0;
    f(x,x);
}
