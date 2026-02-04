#include <iostream>

using namespace std;

#define LEN 10

int len_foo(){
	int a = 10;
	return a+2;
}

constexpr int len_foo_constexpr(){
	return 12;
}

constexpr int fib(const int n){
	return n == 1 || n == 2 ? 1 : fib(n-1) + fib(n-2);
}

// under c++11 we cannot do this:
// constexpr int fib(const int n){
// 	if(n == 1) return 1;
// 	if(n == 2) return 1;
// 	return fib(a-1) + fib(a-2);
// }

int main(){
	char arr_1[10];
	char arr_2[LEN];

	int size = 10;
	char arr_3[size]; // not legal, but works
	

	// in c++, the size of an array must be a constant expression
	// not a constant const
	const int size_2 = size + 10;
	char arr_4[size_2]; // not legal, but works as well
	
	constexpr int size_3 = 10 + 3 + 10;
	char arr_5[size_3]; // the best

	// before c++98 the compiler couldnt say if len_foo() would return a constant, being an illegal
	// production
	char arr_6[len_foo() + 4]; // not legal

	char arr_7[len_foo_constexpr() + 4]; // legal
					     //
	
	// constantexpr tells the compiler that some function or object constructor will be constant at compile time.
	// constantexpr can also use recursion
	//
	cout << fib(10) << endl;

	return 0;
}
