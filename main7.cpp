// program to count and display positive, negative, even and odd number from an array
#include <iostream>
using namespace std;

int main() {
    int size;

    // Ask user for size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> size;

    int arr[size];

    // Input array elements
    cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // setting Counters for postive, negative, odd, and even number
    int positiveCount = 0, negativeCount = 0;
    int evenCount = 0, oddCount = 0;

    // identifying each element and counting them
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0)
            positiveCount++;
        else if (arr[i] < 0)
            negativeCount++;

        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    // Display results
    cout << "\n--- Count Summary ---" << endl;
    cout << "Positive numbers: " << positiveCount << endl;
    cout << "Negative numbers: " << negativeCount << endl;
    cout << "Even numbers: " << evenCount << endl;
    cout << "Odd numbers: " << oddCount << endl;

    return 0;
}

