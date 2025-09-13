//program to find the second largest integer in a list of integer.
#include <iostream>
using namespace std;

int main() {
    int size;

    // Input the size of the array
    cout << "Enter the number of elements: ";
    cin >> size;

    // Validate input
    if (size < 2) {
        cout << "At least two numbers are required to find the second largest." << endl;
        return 1;
    }

    int arr[size];

    // Input array elements
    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Initialize largest and second largest
    int largest = arr[0];
    int secondLargest = INT_MIN;  // Smallest possible int

    // Find the largest and second largest elements
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    // Check if a valid second largest was found
    if (secondLargest == INT_MIN) {
        cout << "There is no distinct second largest element." << endl;
    } else {
        cout << "The second largest number is: " << secondLargest << endl;
    }

    return 0;
}

