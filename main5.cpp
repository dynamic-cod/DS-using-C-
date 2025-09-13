//program to print string using Pointer
#include <iostream>
using namespace std;

int main(){
 char str[100];  // Character array to store user input

    cout << "Enter a string: ";
    cin.getline(str, 100);  // Read input including spaces

    char* ptr = str;  // Pointer to the first character of the string
		

    // Print string using pointer
    cout << "Printing string using pointer: ";
    while (*ptr != '\0') {  // Loop until null terminator is reached
        cout << *ptr;		// printing the string character
        ptr++;              // Move pointer to the next character
    }
    cout<<endl;
    return 0;
}
