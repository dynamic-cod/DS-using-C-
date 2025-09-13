// program to reverse a String Using Pointers
#include <iostream>
#include <cstring>    // for strlen
using namespace std;

int main() {
    char str[100];

    // Input string
    cout << "Enter a string: ";
    cin.getline(str, 100);

    // Pointers to the beginning and end of the string
    char* start = str;
    char* end = str + strlen(str) - 1;

    // Swap characters using pointers
    while (start < end) {
        // Swap the characters
        char temp = *start;
        *start = *end;
        *end = temp;
		// Move pointers
        start++;
        end--;
    }

    // Output the reversed string
    cout << "Reversed string: " << str << endl;

    return 0;
}


