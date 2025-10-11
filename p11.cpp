#include <iostream>

using namespace std;

int main() {
    int numberOfRows;

    // Prompt the user to enter the number of rows for the pyramid
    cout << "Enter the number of rows for the pyramid: ";
    cin >> numberOfRows;

    // Check if the number of rows is positive
    if (numberOfRows <= 0) {
        cout << "Please enter a positive number of rows." << endl;
        return 0; // Exit if input is invalid
    }

    // Outer loop to handle number of rows
    for (int i = 1; i <= numberOfRows; i++) {
        // Inner loop to handle spaces before the numbers
        // This creates the triangular shape
        for (int j = 1; j <= numberOfRows - i; j++) {
            cout << " ";
        }

        // Inner loop to print the increasing part of the numbers
        for (int k = 1; k <= i; k++) {
            cout << k;
        }

        // Inner loop to print the decreasing part of the numbers
        for (int l = i - 1; l >= 1; l--) {
            cout << l;
        }

        // Move to the next line after each row is printed
        cout << endl;
    }

    return 0;
}

