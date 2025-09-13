//program to find the length of string using pointer
#include <iostream>   // For input and output
using namespace std;

// Function to calculate the length of a string using a pointer
int stringLength(const char* str) {
    int length = 0;  // Variable to store the length of the string

    // Loop until null character '\0' is encountered
    while (*str != '\0') {
        length++;   // Increment length counter
        str++;      // Move pointer to the next character
    }

    return length;   // Return the final length
}

int main() {
    char str[100];   // Declare a character array to store the input string

    // Ask user to enter a string
    cout << "Enter a string: ";
    cin.getline(str, 100);  // Read the string including spaces

    // Call the function and store the result
    int len = stringLength(str);

    // Display the result
    cout << "Length of the string: " << len << endl;

    return 0;  // Successful execution
}

