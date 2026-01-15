

int main(){


   // it creates another label in assembly
   //auto minus_one = [](int x) -> int { return x - 1; };

    // store on rdi the pointer of `this` that was in [rbp-5]
    // lea     rdi, [rbp - 5]
    // mov 10 to esi
    // and call the lambda function
   //minus_one(10);


   int a = 11;
   // store a in the lambda pointer
   //     mov     eax, dword ptr [rbp - 8]
   //     mov     dword ptr [rbp - 12], eax
   //     lea     rdi, [rbp - 12]
   // add 2 to esi
   // call the function
   auto test_2 = [a](int x) -> int {return a+x;};
   test_2(2);

    return 0;
}
