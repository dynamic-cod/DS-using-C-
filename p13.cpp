#include <iostream>

using namespace std;

int main() {
    int n; // Variable to store the number of rows for one half of the butterfly

    // Prompt the user to enter the number of rows for half of the butterfly
    cout << "Enter the number of rows for half the butterfly: ";
    cin >> n;

    // Check if the number of rows is positive to ensure valid input
    if (n <= 0) {
        cout << "Please enter a positive number." << endl;
        return 0; // Exit if input is invalid
    }

    // This section prints the upper part of the butterfly pattern
    for (int i = 1; i <= n; i++) {
        // This loop prints the stars for the left wing
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Calculate and print the spaces between the two wings
        int spaces = 2 * (n - i);
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }

        // This loop prints the stars for the right wing
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Move to the next line after printing one row
        cout << endl;
    }

    // This section prints the lower part of the butterfly pattern, which is a mirror of the upper part
    for (int i = n; i >= 1; i--) {
        // This loop prints the stars for the left wing
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Calculate and print the spaces between the two wings
        int spaces = 2 * (n - i);
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }

        // This loop prints the stars for the right wing
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Move to the next line after printing one row
        cout << endl;
    }

    return 0; // Indicate successful execution
}
