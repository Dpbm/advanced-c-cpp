#include <iostream>
#include <cassert>
#include <type_traits>
#include <print>


using namespace std;

void foo(int a){
	printf("Calling foo int: %d\n", a);	
}

void foo(char* a){
	printf("Calling foo char*: %s\n", a);	
}


int main(){
	
	// may be equal, but is not valid in c++
	assert ((void*)0 == NULL);

	// not legal
	void* a = 0;
	a = NULL;
	
	// not legal as well
	char* b = NULL;

	cout << "NULL == 0: " << is_same<decltype(NULL), decltype(0)>::value << endl;
	cout << "NULL == (void*)0: " << is_same<decltype(NULL), decltype((void*)0)>::value << endl;
	cout << "NULL == nullptr_t: " << is_same<decltype(NULL), nullptr_t>::value << endl;
	cout << "nullptr == nullptr_t: " << is_same<decltype(nullptr), nullptr_t>::value << endl;

	foo(0);
	// wont compile since NULL can be both int and char*
	//foo(NULL);
	foo(nullptr); // nullptr is a pointer


	return 0;
}


