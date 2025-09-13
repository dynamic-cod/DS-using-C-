//program to enter elements in the array and display the array's element
#include <iostream>
using namespace std;

int main() {
    int size;

    // Taking input size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    // Declare an array of given size
    int arr[size];

    // Input elements in the array
    cout << "Enter " << size << " elements in the array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];  // Take user input for each element
    }

    // Display elements of the array
    cout << "\nThe elements in the array are: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";  // Print each element
    }

    cout << endl;
    return 0;
}

