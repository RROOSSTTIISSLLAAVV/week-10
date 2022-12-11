#include <iostream>
using namespace std;

int Index2MaxElements(int arr[], int n){
	int index =0;
	int index2 =0;

	for (int i = 1; i < n; i++){
		if (arr[i] > arr[index]) index = i;
	}
	
	for (int i = 1; i < n; i++){
		if (arr[i] > arr[index2] && arr[i] != arr[index]) index2 = i;
	}
	
	return index2;
}

int main(void) {
    
	int array_size;
	cout << "Enter array size: ";
	cin >> array_size;

	int arr[array_size];

	cout << "Enter array elements: ";
	for (int i = 0; i < array_size; i++) cin >> arr[i];

    cout << arr[Index2MaxElements(arr, array_size)];
    
	return 0;
}
