#include <iostream>
#include <thread>

void increment(){
	static int counter = 0;

	for(int i = 0; i < 1000; i++){
		counter ++;
		std::cout << "Current count: " << counter << std::endl;
	}
}

int main(){
	auto thread1 = std::thread{increment};
	auto thread2 = std::thread{increment};
	
	thread1.join();
	thread2.join();


	return 0;
}
