#include <iostream>

using namespace std;

/*
 * can't use the 'void print_2D_array(int* array, int rows, int cols) const {' because the const
 * at the end is only for classes (since const tells the compiler this method won't modify `this`
 */

void print_2D_array(const int* array, const int rows, const int cols) {
	for(int r = 0; r < rows; r++){
		for(int c = 0; c < cols; c++){
			cout << array[r*cols + c] << " ";
		}
		cout << "\n";
	}
	
	// cant modify since we used the const
	//array[0] = 10;
}

void add_two_2D_arrays(const int* arr1, const int* arr2, int* arr3, const int size){
	for(int i = 0; i < size; i++)
		arr3[i] = arr1[i]+arr2[i];
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
	
	int array3[size];
	add_two_2D_arrays(array1, array2, array3, size);
	cout << "output \n";
	print_2D_array(array3, rows, cols);

	return 0;
}
