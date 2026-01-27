#include <iostream>

struct A{
	operator int() { 
		std::cout << "Called inside\n";
		return 1; 
	}

	void a_test() const {
		//https://stackoverflow.com/questions/54585/when-should-you-use-a-class-vs-a-struct-in-c
		std::cout << "OPPS ALL IS PUBLIC\n";	
	}

};

// doesnt work
/*bool operator==(A, int){ */
/*	std::cout << "called ==\n";*/
/*	return 0; */
/**/
/*}*/

// first we have the left and then the right as argument
bool operator==(int,A){ 
	std::cout << "called ==\n";
	return 0; 
}

int main(){
	// since we have a operator for(int,A) it doesnt need to convert A to int
	// this way, the overloaded operator in A will never be called
	std::cout << (1==A{}) << "\n";

	A{}.a_test();
}
