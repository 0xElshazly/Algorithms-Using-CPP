// Insertion sort algorithm using c++.
#include <iostream>
using namespace std;
// Function to sort an array using insertion sort
void insertionSort(int arr[], int size){
	int i, j, temp;
	for (i = 1; i < size; i++){
		temp = arr[i];  // Store the second element in array index [1]
		j = i - 1;      // j counter of sotred list | i counter of unsotred list.
		/*
			Move elements of arr[0..i-1], that are
			greater than temp, to one position ahead
			of their current position 
		*/
		while (j >= 0 && arr[j] > temp){
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = temp;
	}
}
// A utility function to print an array a[] of size 'n'
void displayArray(int a[], int n){
	for (int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}
// Main Function.
int main(){
	int arr[] = { 5, 4, 10, 1, 6, 2 };
	int sizeArr = sizeof(arr) / sizeof(arr[0]);

	cout << "Array Elements: ";
	displayArray(arr, sizeArr);

	insertionSort(arr, sizeArr);
	cout << "* Sorted Array: ";
	displayArray(arr, sizeArr);

	system("pause");
	return 0;
}
/*
	---------------------------------------------------------
	|- worst case: when array given is descending order and |
	|     you are going to sorted array to ascending order. |
	|                                                       |
	|- worst case time complexity is: O(n^2)                |
	|- best case time complexity is: O(n)                   |
	---------------------------------------------------------
	[Uses]: Insertion sort is used when number of elements is small. 
	It can also be useful when input array is almost sorted, 
	only few elements are misplaced in complete big array.
	
	Performance

		- Worst case performance: O(n^2)
		- Best case performance: O(n)
		- Average case performance: O(n^2)
*/
// This code is contributed by Mohamed Ayman.
