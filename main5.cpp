// program to reverse the position of the array elements.
#include <iostream>
using namespace std;

int main() {
    int size;

    // Ask user to input the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    // Input array elements
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Reverse the array in-place
    for (int i = 0; i < size / 2; i++) {
        // Swap element at position i with element at position (size - i - 1)
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }

    // Output the reversed array
    cout << "\nArray after reversing: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}

