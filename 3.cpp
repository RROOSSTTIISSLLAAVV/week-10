#include <iostream>
using namespace std;

int IndexMaxElements(int arr[], int n){
	int index =0;

	for (int i = 1; i < n; i++){
		if (arr[i] > arr[index]) index = i;
	}
	return index;
}

int IndexMinElements(int arr[], int n) {
	int index = 0;

	for (int i = 1; i < n; i++) {
		if (arr[i] < arr[index]) index = i;
	}
	return index;
}

int main(void) {

	int array_size;
	cout << "Enter array size: ";
	cin >> array_size;

	int arr[array_size];

	cout << "Enter array elements: ";
	for (int i = 0; i < array_size; i++) cin >> arr[i];

    int rotate_elem, rotate_elem_index;
    
    rotate_elem_index = IndexMaxElements(arr, array_size);
    rotate_elem = arr[IndexMinElements(arr, array_size)];
    arr[IndexMinElements(arr, array_size)] = arr[rotate_elem_index];
    arr[rotate_elem_index] = rotate_elem;
    

    for (int i = 0; i < array_size; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}
