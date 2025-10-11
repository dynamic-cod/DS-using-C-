#include <iostream>

using namespace std;

int main() {
    int n;

    // Prompt the user to enter the number of rows for half of the diamond
    cout << "Enter the number of rows for the half diamond: ";
    cin >> n;

    // Check if the number of rows is positive
    if (n <= 0) {
        cout << "Please enter a positive number." << endl;
        return 0; // Exit if input is invalid
    }

    // Upper part of the diamond
    for (int i = 1; i <= n; i++) {
        // Loop for leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Print the first star in the row
        cout << "*";

        // Print spaces between stars, if it's not the first row
        if (i > 1) {
            for (int k = 1; k <= 2 * i - 3; k++) {
                cout << " ";
            }
            // Print the second star in the row
            cout << "*";
        }

        // Move to the next line
        cout << endl;
    }

    // Lower part of the diamond
    for (int i = n - 1; i >= 1; i--) {
        // Loop for leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Print the first star in the row
        cout << "*";

        // Print spaces between stars, if it's not the tip
        if (i > 1) {
            for (int k = 1; k <= 2 * i - 3; k++) {
                cout << " ";
            }
            // Print the second star in the row
            cout << "*";
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
}

