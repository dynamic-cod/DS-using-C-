//program to find the sum of all array elements
#include <iostream>
using namespace std;

int main() {
    int size, sum = 0;

    // Ask the user to input the size of the array
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

    // Calculate the sum of the elements
    for (int i = 0; i < size; i++) {
        sum += arr[i];  // Add each element to the sum
    }

    // Display the sum of the elements
    cout << "\nThe sum of the array elements is: " << sum << endl;

    return 0;
}

