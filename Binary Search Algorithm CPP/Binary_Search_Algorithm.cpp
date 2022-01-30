#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key) {
	int left = 0, right = size;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (key == arr[mid])
			return mid;
		else if (key > arr[mid])
			left = mid + 1;
		else
			right = mid - 1;
	}
	return -1;
}
// Function to print an array
void printArray(int A[], int size){
	for (int i = 0; i < size; i++)
		cout << A[i] << " ";
	cout << endl;
}
void main() {
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int sizeArr = sizeof(arr) / sizeof(arr[0]);
	cout << "Given array is \n";
	printArray(arr, sizeArr);
	int number;
	cout << "Enter a number to search: "; cin >> number;
	int result = binarySearch(arr, sizeArr, number);
	if (result == -1)
		cout << "Element not presented in array!" << endl;
	else
		cout << "Element is presented at index " << result << endl;
	system("pause");
}
