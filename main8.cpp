//program to check whether a given 3 digit number is Armstrong number or not.
#include <iostream>
using namespace std;

int main() {
    int number, originalNumber, remainder, sum = 0;

    // Ask user to enter a 3-digit number
    cout << "Enter a 3-digit number: ";
    cin >> number;

    // Store the original number for later comparison
    originalNumber = number;

    // Loop to calculate the sum of cubes of digits
    while (number != 0) {  //loop ends when number becomes 0
        remainder = number % 10;  // Extract the last digit
        sum += remainder * remainder * remainder;  // Add cube of remainder to sum
        number /= 10;  // Remove the last digit
    }

    // Check if the sum of cubes of digits is equal to the original number
    if (sum == originalNumber) {
        cout << originalNumber << " is an Armstrong number." << endl;
    } else {
        cout << originalNumber << " is not an Armstrong number." << endl;
    }

    return 0;
}

