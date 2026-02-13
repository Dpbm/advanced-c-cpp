#include <iostream>

using namespace std;

int main(){
    /*
main:
        push    rbp
        mov     rbp, rsp
        sub     rsp, 16
        mov     dword ptr [rbp - 4], 0
        mov     dword ptr [rbp - 8], 3

        // our injected code
        mov     eax, dword ptr [rbp - 8]
        inc     eax
        mov     dword ptr [rbp - 8], eax
        
        mov     rdi, qword ptr [rip + std::cout@GOTPCREL]
        lea     rsi, [rip + .L.str]
        call    std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>(std::basic_ostream<char, std::char_traits<char>>&, char const*)@PLT
        mov     rdi, rax
        mov     esi, dword ptr [rbp - 8]
        call    std::ostream::operator<<(int)@PLT
        mov     rdi, rax
        mov     rsi, qword ptr [rip + std::basic_ostream<char, std::char_traits<char>>& std::endl<char, std::char_traits<char>>(std::basic_ostream<char, std::char_traits<char>>&)@GOTPCREL]
        call    std::ostream::operator<<(std::ostream& (*)(std::ostream&))@PLT
        xor     eax, eax
        add     rsp, 16
        pop     rbp
        ret

.L.str:
        .asciz  "A: "

    */


    int a = 3;
    __asm__("movl -8(%rbp), %eax\n\t"
            "incl %eax\n\t"
            "movl %eax, -8(%rbp)");

    cout << "A: " << a << endl;
	return 0;
}