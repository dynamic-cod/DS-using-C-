//program to find the roots of a quadratic equation
#include <iostream>
#include <cmath>    // For sqrt() and complex numbers
using namespace std;

int main() {
    // Declare coefficients
    double a, b, c;

    cout << "Quadratic Equation: ax^2 + bx + c = 0" << endl;

    // taking input coefficients
    cout << "Enter coefficient a: ";
    cin >> a;
    cout << "Enter coefficient b: ";
    cin >> b;
    cout << "Enter coefficient c: ";
    cin >> c;

    // Check if it's really a quadratic equation
    if (a == 0) {
        cout << "This is not a quadratic equation (a = 0)." << endl;
        return 0;
    }

    // Calculate discriminant
    double discriminant = b * b - 4 * a * c;   // formula for discriminant= (b^2-4ac)

    cout << "Discriminant (D) = " << discriminant << endl;

    // Find roots based on discriminant
    if (discriminant > 0) {
        // Two real and distinct roots will be there
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and distinct." << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    }
    else if (discriminant == 0) {
        // Two real and equal roots
        double root = -b / (2 * a);
        cout << "Roots are real and equal." << endl;
        cout << "Root = " << root << endl;
    }
    else {
        // Complex conjugate roots contains real and imaginary elements, we will denote imaginary element by 'i'
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex and imaginary." << endl;
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}

