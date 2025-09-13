//program to sqap two numbers using pointer
#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    // Input two numbers from the user
    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    // Declare pointer variables
    int *pointerA = &a;  // pointerA points to address of variable a
    int *pointerB = &b;  // pointerB points to address of variable b

    // Display values before swapping
    cout << "\nBefore Swapping:" << endl;
    cout << "a = " << *pointerA << ", b = " << *pointerB << endl;

    // Swapping using a temporary variable and pointers
    temp = *pointerA;     // store value at pointerA in temp
    *pointerA = *pointerB;        // assign value at pointerB to poointerA
    *pointerB = temp;         // assign value of temp to ptrB

    // Display values after swapping
    cout << "\nAfter Swapping:" << endl;
    cout << "a = " << *pointerA << ", b = " << *pointerB << endl;

    return 0;
}

