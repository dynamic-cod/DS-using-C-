//program to find the length of the array
#include <iostream>
using namespace std;

int main() {
    int size;

    // Ask user to input the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    // Declare the array of given size
    int arr[size];

    // Input array elements
    cout << "Enter " << size << " elements in the array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Find the length of the array using sizeof operator
    int length = sizeof(arr) / sizeof(arr[0]); // Total size divided by size of one element

    // Output the length of the array
    cout << "\nThe length of the array is: " << length << endl;

    return 0;
}
