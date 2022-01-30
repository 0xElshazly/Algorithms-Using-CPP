#include <iostream>
using namespace std;
int binarySearchRecursion(int arr[], int key, int left, int right){
	if (left <= right){
		int mid = (left + right) / 2;
		if (arr[mid] == key)
			return mid;
		else if (key > arr[mid])
			return binarySearchRecursion(arr, key, mid + 1, right);
		else
			return binarySearchRecursion(arr, key, left, mid - 1);
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
	int result = binarySearchRecursion(arr, number, 0, sizeArr);
	if (result == -1)
		cout << "Element not presented in array!" << endl;
	else
		cout << "Element is presented at index " << result << endl;
	system("pause");
}
