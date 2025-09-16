//program to find greatest of two numbers using this pointer which returns the member variable.
#include <iostream>
using namespace std;

// Class to represent a number
class Number {
private:
    int value; // Member variable to store the number

public:
    // Constructor to initialize the value
    Number(int v) {
        value = v;
    }

    // Member function to compare current object with another
    // and return the object with the greater value
    Number greater(Number other) {
        // Use 'this' pointer to access the current object's value
        if (this->value > other.value) {
            return *this;  // Return current object
        } else {
            return other;  // Return other object
        }
    }

    // Member function to return the stored value
    int getValue() {
        return this->value;  // Use 'this' to access member variable
    }
};

int main() {
    int a, b;

    // Prompt user for input
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Create two Number objects
    Number num1(a);
    Number num2(b);

    // Call the greater() function to find the object with the greater value
    Number result = num1.greater(num2);

    // Display the result using getValue()
    cout << "The greater number is: " << result.getValue() << endl;

    return 0;
}

