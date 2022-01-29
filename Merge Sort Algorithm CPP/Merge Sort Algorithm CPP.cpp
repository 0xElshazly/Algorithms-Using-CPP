// Merge sort algorithm using c++.
#include <iostream>
using namespace std;
/*
	- Merges two subarrays of array[].
		1- First subarray is arr[begin..mid]
		2- Second subarray is arr[mid+1..end]
*/
// Function to merge two subarrays of arr[]
void merge(int arr[], int left, int midpoint, int right){
	// Length of two sub arrays
	int lengthOne = (midpoint - left) + 1;
	int lengthTwo = (right - midpoint);
	// Create two temp arrays
	int *subArrayLeft = new int[lengthOne];
	int *subArrayRight = new int[lengthTwo];
	// Copy data to temp arrays subArrayLeft[] andsubArrayRight[]
	for (int i = 0; i < lengthOne; i++){
		subArrayLeft[i] = arr[left + i];
	}
	for (int j = 0; j < lengthTwo; j++){
		subArrayRight[j] = arr[midpoint + 1 + j];
	}
	int i = 0;             // Initial index of left sub-array
	int j = 0;             // Initial index of right sub-array
	int k = left;          // Initial index of merged array
	// Merge the temp arrays back into arr[left..right]
	while (i < lengthOne && j < lengthTwo){
		if (subArrayLeft[i] < subArrayRight[j]){
			arr[k] = subArrayLeft[i];
			i++;
		}
		else{
			arr[k] = subArrayRight[j];
			j++;
		}
		k++;
	}
	// Copy the remaining elements of subArrayLeft[], if there are any
	while (i < lengthOne){
		arr[k] = subArrayLeft[i];
		i++;
		k++;
	}
	// Copy the remaining elements of subArrayRight[], if there are any
	while (j < lengthTwo){
		arr[k] = subArrayRight[j];
		j++;
		k++;
	}
}
// Function to sort an array using merge sort
void mergeSort(int arr[], int begin, int end){
	// at least array have two elements
	if (begin < end){
		int midpoint = (begin + end) / 2;
		mergeSort(arr, begin, midpoint);
		mergeSort(arr, midpoint + 1, end);
		// Merges two subarrays of arr[]
		merge(arr, begin, midpoint, end);
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

	mergeSort(arr, 0, sizeArr - 1);
	cout << "* Sorted Array: ";
	displayArray(arr, sizeArr);

	system("pause");
	return 0;
}
/*
	Performance

		- Worst case performance: O(n log n)
		- Best case performance: O(n log n) typical
		- Average case peroformance: O(n log n)
*/