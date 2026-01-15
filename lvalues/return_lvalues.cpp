#include <iostream>

int& may_not_work(){
	int a = 10;
	return a;
}

int& return_ref_from_inp(int& a){
	return a;
}

int default_static(){
	static int a = 10;
	a += 30;
	return a;
}

int& lvalue_with_static(){
	static int b = 30;
	b += 10;
	return b;
}


void print_type_value(int& value){
	std::cout << "is a lvalue\n";
}

void print_type_value(int&& value){
	std::cout << "is a rvalue\n";
}


int main(){
	//this one returns from stack, it's not good
	std::cout << "--from may not work--\n";

	// this one actually does:
	// movl    $10, -4(%rbp)
  	// leaq    -4(%rbp), %rax
  	// popq    %rbp
	// then it uses rax as:
	// movl    (%rax), %eax
	// movl    %eax, -8(%rbp)
	// leaq    -8(%rbp), %rdi
	// so its pretty much a dangling pointer that's being used
	auto d = may_not_work();


	print_type_value(d);	
	std::cout << "d value << " << d << "\n";
	d = 20;
	std::cout << "d value << " << d << "\n";

	// accepted since it returns an Lvalue	 (reference)
	may_not_work() = 30;
	// it's pretty much the same asm as before, but latter on main he does:
	// movl    $30, (%rax)
	
	int a = 45;
	return_ref_from_inp(a) = 34;
	// almost the same, but now the ref is a
	// movq    %rdi, -8(%rbp)
	// movq    -8(%rbp), %rax
	// popq    %rbp
	// it acquires and returns the same data, then:
	// movl    $34, (%rax)
	std::cout << "a << " << a << "\n";

	// testing default static
	for(size_t i = 0; i < 3; i++){
		std::cout << "static i=" << i << "; value=" << default_static() << "\n";
	}
	
	//test static with lvalue return
	lvalue_with_static() += 5;
	auto c = lvalue_with_static();
	// movl    _ZZ18lvalue_with_staticvE1b(%rip), %eax
	// addl    $10, %eax
	// movl    %eax, _ZZ18lvalue_with_staticvE1b(%rip)
	// leaq    _ZZ18lvalue_with_staticvE1b(%rip), %rax
	// popq    %rbp
	// updates the static value and return a pointer to that
	// movl    (%rax), %ecx
	// addl    $5, %ecx
	// updates that pointer and call it again
	std::cout << "c value << " << c << "\n";

	return 0;
}
