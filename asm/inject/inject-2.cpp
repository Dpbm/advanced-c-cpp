
int main(){

    // bypass return 0


    /*
        main:
        push    rbp
        mov     rbp, rsp
        mov     dword ptr [rbp - 4], 0
        
        // bypass
        mov     eax, 116
        pop     rbp
        ret

        xor     eax, eax
        pop     rbp
        ret
    
    */


    asm("mov $116, %eax\n\t"
        "pop %rbp\n\t"
        "ret");

	return 0;
}
