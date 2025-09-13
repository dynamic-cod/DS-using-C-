//program to count vowels in string using pointer
#include <iostream>
using namespace std;

// Function to count vowels using pointer
int countVowels(const char* str) {
    int count = 0;
    while (*str != '\0') {
        char ch = tolower(*str); // convert to lowercase for easy comparison
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
        str++; // move the pointer to the next character
    }
    return count;
}

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100); // read string with spaces

    int vowelCount = countVowels(str);

    cout << "Number of vowels: " << vowelCount << endl;

    return 0;
}

