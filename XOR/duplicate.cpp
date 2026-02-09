#include <iostream>
#include <vector>

using namespace std;

int singleNumber(vector<int> & nums){
	int result = 0;
	for (int x : nums){
		result ^= x;
	}
	return result;
}

int main(){
	
	vector<int> correct{1,2,2,4,1,3,3};
	vector<int> dontwork{1,2,2,4,1,3,3,7};
	cout << "single value(one unique): " << singleNumber(correct) << endl;
	cout << "single value(two uniques - dont work): " << singleNumber(dontwork) << endl;

	return 0;
}
