// program to add numbers using pointer
#include <iostream>
using namespace std;

int main() {
    int a, b, sum;
    int *pointer1, *pointer2; // declaring two pointers

    // Input two numbers
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    // Assign addresses to pointers
    pointer1 = &a;
    pointer2 = &b;

    // Add using dereferenced pointers
    sum = *pointer1 + *pointer2;

    // Display result
    cout << "Sum of " << *pointer1 << " and " << *pointer2 << " is: " << sum << endl;

    return 0;
}

