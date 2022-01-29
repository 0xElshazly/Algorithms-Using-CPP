// Recursive insertion sort algorithm using c++.
#include <iostream>
using namespace std;
void insertionSortRecursive(int arr[], int size) {
	//  Base case
	if (size <= 1)
		return;

	// Sort first [size-1] elements
	insertionSortRecursive(arr, size - 1);
	
	// Insert last element at its correct position in sorted array.
	int temp = arr[size - 1];
	int i = size - 2;

	/* 
		Move elements of arr[0..i-1], that are
		greater than temp, to one position ahead
		of their current position.
	*/
	while (i >= 0 && arr[i] > temp){
		arr[i + 1] = arr[i];
		i--;
	}
	arr[i + 1] = temp;
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

	insertionSortRecursive(arr, sizeArr);
	cout << "* Sorted Array: ";
	displayArray(arr, sizeArr);

	system("pause");
	return 0;
}
/*
		-----[Pseudocode Implementation]-----
		insertionSortRecursive(arr, size)
		begin
		|  if size <= 1
		|      return
		|  insertionSortRecursive(arr, size - 1);
		|  temp := arr[size -1];
		|  i := size - 2;
		|  while i >= 0 and arr[i] > temp do
		|  |	begin
		|  |	 | arr[i + 1] := arr[i];
		|  |	 | i := i - 1;
		|  |	end;
		|  |	arr[i + 1] := temp;
		| end;
		end;
*/
// This code is contributed by Mohamed Ayman.