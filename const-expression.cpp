#include <iostream>

using namespace std;

constexpr int calc(int b){
	return b < 10 ? b*10 : 5;
}

int main(){
	const size_t size = 10;
	int arr[size];

	/*Error since b is not constant*/
	/*int b = 10;*/
	/*constexpr size_t a = b * 10;*/

	const int b = 10;
	constexpr size_t a = b * 10;

	cout << "a: " << a << endl;
	
	int result = calc(b);

	cout << "result: " << result << endl;
	
	int c = 10;
	int result2 = calc(c);
	/*C doesn't need to be constant*/
	cout << "result2: " << result << endl;

	return 0;
}
