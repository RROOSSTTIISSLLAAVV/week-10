#include <iostream>
using namespace std;

int main(void) {
    
	int array_size;
	cout << "Enter array size: ";
	cin >> array_size;

	int arr[array_size];

	cout << "Enter array elements: ";
	for (int i = 0; i < array_size; i++) cin >> arr[i];

    for (int i = 0; i < array_size; i++){
        if (arr[i] == 0) {
            cout << i + 1;
            break;
        }
        if (i + 1 == array_size) cout << "none";
    }
    
	return 0;
}
