//program to print the output of ASCII value(Capital Letter, small letter, Digit, special symbols)
#include<iostream>
using namespace std;

int main() {
    int ascii;  // Take ASCII value as integer input

    cout << "Enter an ASCII value (0-127): ";
    cin >> ascii;

    // Validate the input range
    if (ascii < 0 || ascii > 127) {
        cout << "The value is outside the standard ASCII range." << endl;
        return 0;
    }

    char ch = static_cast<char>(ascii);  // Convert ASCII value to character

    // Classification based on ASCII value
    if (ascii >= 65 && ascii <= 90) {
        cout << "The character is a Capital Letter: '" << ch << "'" << endl;
    }
    else if (ascii >= 97 && ascii <= 122) {
        cout << "The character is a Small Letter: '" << ch << "'" << endl;
    }
    else if (ascii >= 48 && ascii <= 57) {
        cout << "The character is a Digit(0-9): '" << ch << "'" << endl;
    }
    else if ((ascii >= 0 && ascii <= 47) || (ascii >= 58 && ascii <= 64) ||
             (ascii >= 91 && ascii <= 96) || (ascii >= 123 && ascii <= 127)) {
        cout << "The character is a Special Symbol: '" << ch << "'" << endl;
    }

    return 0;
}
