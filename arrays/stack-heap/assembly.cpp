int* add_two_2D_arrays(int* arr1, int* arr2, int rows, int cols){
    // [rbp-8] = array1
    // [rbp-16] = array2
    // [rbp-20] = rows
    // [rbp-24] = cols

    //eax = rows*cols
    

    /*
        cdqe   // sign extends EAX into RAX 
        mov     ecx, 4 // mov 4 to ECX (maybe is the size of the data)
        mul     rcx // multiple RAX by RCX (in this case RCX is the index (i))

        https://web.itu.edu.tr/kesgin/mul06/intel/instr/seto.html
        seto    cl // set cl to 1 if overflow flags is 1
        mov     rax, -1

        https://www.tutorialspoint.com/assembly_programming/assembly_logical_instructions.htm
        test    cl, 1 // test if CL is 1
        cmovne  rdi, rax // if it's 1 it conditionally moves rax into rdi

        then we generate the heap array and store it at rax then into [rbp-32]
    */


	int* sum = new int[rows*cols];
	for(int i = 0; i < rows*cols; i++){
        
        /*
        .LBB0_1:
        mov     eax, dword ptr [rbp - 36]
        mov     ecx, dword ptr [rbp - 20]
        imul    ecx, dword ptr [rbp - 24]
        cmp     eax, ecx
        jge     .LBB0_4

        ----------------------------------------------
        use offsets and store the addition in sum
        mov     rax, qword ptr [rbp - 8]
        movsxd  rcx, dword ptr [rbp - 36]
        mov     edx, dword ptr [rax + 4*rcx]
        mov     rax, qword ptr [rbp - 16]
        movsxd  rcx, dword ptr [rbp - 36]
        add     edx, dword ptr [rax + 4*rcx]
        mov     rax, qword ptr [rbp - 32]
        movsxd  rcx, dword ptr [rbp - 36]
        mov     dword ptr [rax + 4*rcx], edx
        ----------------------------------------------


        mov     eax, dword ptr [rbp - 36]
        add     eax, 1
        mov     dword ptr [rbp - 36], eax
        jmp     .LBB0_1
        .LBB0_4:
        mov     rax, qword ptr [rbp - 32] // it's not a dangling pointer since the [rbp-32] is saved in rax and store it on [rbp-88] at main()
        add     rsp, 48
        pop     rbp
        ret

            it loops
        
        */
    



		sum[i] = arr1[i]+arr2[i];
	}
	return sum;
}


int main(){
	constexpr int rows = 2, cols = 3;
	constexpr int size = rows*cols;

	int array1[size] = {2,4,7,6,1,3};
	int array2[size] = {1,5,9,18,0,4};

    // edx = rows
    // ecx = cols
    // rdi = array1 ([rbp-48])
    // rsi = array2 ([rbp-80])
	int* add_arr = add_two_2D_arrays(array1, array2, rows, cols);
    /*
        store the new data
        mov     qword ptr [rbp - 88], rax
        mov     rax, qword ptr [rbp - 88]

        // safe deallocation
        mov     qword ptr [rbp - 96], rax
        cmp     rax, 0
        je      .LBB1_2
        mov     rdi, qword ptr [rbp - 96]
        call    operator delete[](void*)@PLT

        .LBB1_2:
        xor     eax, eax
        add     rsp, 96
        pop     rbp
        ret
    */

	delete[] add_arr;

	return 0;
}
