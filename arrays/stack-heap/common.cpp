#include <iostream>

using namespace std;

void print_2D_array(int* array, int rows, int cols){
	for(int r = 0; r < rows; r++){
		for(int c = 0; c < cols; c++){
			cout << array[r*cols + c] << " ";
		}
		cout << "\n";
	}
}

int* add_two_2D_arrays(int* arr1, int* arr2, int rows, int cols){
	int* sum = new int[rows*cols];
	for(int i = 0; i < rows*cols; i++){
		sum[i] = arr1[i]+arr2[i];
	}
	return sum;
}


int main(){
	constexpr int rows = 2, cols = 3;
	constexpr int size = rows*cols;

	int array1[size] = {2,4,7,6,1,3};
	int array2[size] = {1,5,9,18,0,4};

	cout << "array1: \n";
	print_2D_array(array1, rows, cols);
	cout << "array2: \n";
	print_2D_array(array2, rows, cols);

	int* add_arr = add_two_2D_arrays(array1, array2, rows, cols);
	cout << "output \n";
	print_2D_array(add_arr, rows, cols);

	delete[] add_arr;

	return 0;
}
