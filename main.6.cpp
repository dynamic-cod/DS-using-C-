// Program to Concatenate Two Strings Using Pointers
#include <iostream>
using namespace std;

int main() {
    // Declare character arrays (strings) with enough space
    //char str1[100], str2[50];

    // Input first string from user
    //cout << "Enter the first string: ";
   // cin.getline(str1, 100);  // Reads a line of input including spaces

    // Input second string from user
    //cout << "Enter the second string: ";
    //cin.getline(str2, 50);   // Reads second string
	char str1[]="Hello this is just a test string";
		char str2[]=" we are concatinting two strings.";

    // Declare pointer variables
    char *ptr1 = str1;  // Pointer to the first character of str1
    char *ptr2 = str2;  // Pointer to the first character of str2

    // Move ptr1 to the end of the first string
    while (*ptr1 != '\0') {
        ptr1++;  // Increment pointer until null terminator is found
    }

    // Copy characters from str2 to the end of str1
    while (*ptr2 != '\0') {
        *ptr1 = *ptr2;  // Copy character from str2 to str1
        ptr1++;         // Move to next position in str1
        ptr2++;         // Move to next character in str2
    }

    // Adding null terminator to the end of the concatenated string
    *ptr1 = '\0';

    // Display the concatenated result
    cout << "Concatenated string (str1 + str2): " << str1 << endl;

    return 0;
}

