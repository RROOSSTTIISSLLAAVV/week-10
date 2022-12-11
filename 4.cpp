#include <iostream>
using namespace std;

int main(void) {
    
    int A;
    cout << "Enter A:";
    cin >> A;
    
	int array_size;
	cout << "Enter array size: ";
	cin >> array_size;

	int arr[array_size];

	cout << "Enter array elements: ";
	for (int i = 0; i < array_size; i++) cin >> arr[i];

    int count = 0;
    for (int i = 0; i < array_size; i++) if (arr[i] > A) count++;
    
    cout << count;
    
	return 0;
}
