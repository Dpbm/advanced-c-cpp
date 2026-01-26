#include <iostream>

using namespace std;

void f(int& a, const long &b){

    /*
        rdi == x == 0
        rsi == rax == 0

        mov     qword ptr [rbp - 8], rdi // points to rdi 
        mov     qword ptr [rbp - 16], rsi // points to rsi

        mov     rax, qword ptr [rbp - 8] // rax = 0
        mov     dword ptr [rax], 1 // rax = 1

        mov     rax, qword ptr [rbp - 16] // rax = rsi
        mov     rsi, qword ptr [rax] // rsi = rsi = 0
        mov     rdi, qword ptr [rip + std::cout@GOTPCREL]
        call    std::ostream::operator<<(long)@PLT
	
	// because of the long (b), we have another location that has copied the
	// value of x, so they are not pointing to the same location

    */


    a = 1;
    cout << b;
    //cout << a;
}

int main(){
	/// https://medium.com/@sruthk/cracking-assembly-x86-addressing-modes-ea8cc0d5bd12
        /// https://stackoverflow.com/questions/43769467/x86-assembly-pointers
	/// https://stackoverflow.com/questions/57916302/mov-of-assembly-language-meant-copy-or-move
	
    // store in rbp-4 a 64bit 0 value
    // mov     dword ptr [rbp - 4], 0
    int x = 0;

    /*
        movsxd  rax, dword ptr [rbp - 4] // extends int to long, 32 to 64bits
					 // rax = 0 (double)
					 
        mov     qword ptr [rbp - 16], rax // points to rax
        lea     rdi, [rbp - 4] // points to the address of rbp-4
        lea     rsi, [rbp - 16] // points to the addres of rbp-16
	

	rdi points to x
	rsi point to rax that has 0
	
        call    f(int&, long const&)
    */
    f(x,x);
}
