#include <iostream>
using namespace std;

int main() {
    char str[150];
    int count = 0;

    cout << "Enter a string: ";
    cin.getline(str, 150);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);  // Convert to lowercase for easy comparison

        // Check if it's an alphabet manually
        if ((ch >= 'a' && ch <= 'z') &&
            !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'))
        {
            count++;  // Count consonants only
        }
    }

    cout << "Number of consonants: " << count << endl;
    return 0;
}
