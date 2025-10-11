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
        // Inner loop to handle spaces before the stars
        // This creates the triangular shape
        for (int j = 1; j <= numberOfRows - i; j++) {
            cout << " ";
        }

        // Inner loop to print the stars
        // The number of stars increases by 2 in each row (k < 2 * i)
        // but we start with one star, so the condition is k < 2 * i - 1
        for (int k = 0; k < 2 * i - 1; k++) {
            cout << "*";
        }

        // Move to the next line after each row is printed
        cout << endl;
    }

    return 0;
}

