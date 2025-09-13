// program using pointers to compute the sum, mean, and standard daviation of all elements stored in an array of n real numbers.
#include <iostream>     // For input/output
#include <cmath>        // For sqrt() function
using namespace std;

// Function to compute the sum of elements using a pointer
double computeSum(double* arr, int n) {
    double sum = 0.0;

    // Sum formula: sum = a1 + a2 + a3 + ... + an
    for (int i = 0; i < n; i++) {
        sum += *(arr + i);  // Add the value pointed to by (arr + i)
    }

    return sum;
}

// Function to compute the mean (average) of elements
double computeMean(double* arr, int n) {
    // Mean formula: mean = (sum of all elements) / n
    double sum = computeSum(arr, n);  // Reuse computeSum function
    return sum / n;                   // Mean = sum / number of elements
}

// Function to compute standard deviation
double computeStandardDeviation(double* arr, int n) {
    double mean = computeMean(arr, n);  // First calculate the mean
    double variance = 0.0;

    // variance = (1/n) * S(xi - mean)^2
    for (int i = 0; i < n; i++) {
        double diff = *(arr + i) - mean;     // (xi - mean)     xi- is the element of the array
        variance += diff * diff;             // (xi - mean)^2   ,we are adding up all the squared difference
    }
    
    variance /= n;  // Divide by number of elements to get variance

    // Standard deviation formula = sqrt(variance)
    return sqrt(variance);  // Return standard deviation
}

int main() {
    int n;

    // Ask user for the number of elements
    cout << "Enter the number of elements: ";
    cin >> n;

    // Dynamically allocate memory for array of size n
    double* arr = new double[n]; //Dynamically allocates memory for n doubles on the heap and returns a pointer to the first element

    // Input array elements
    cout << "Enter " << n << " real numbers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i);  // Read value into the address (arr + i)
    }

    // Compute required values
    double sum = computeSum(arr, n);
    double mean = computeMean(arr, n);
    double stdDev = computeStandardDeviation(arr, n);

    // Output results
    cout << "\nResults:" << endl;
    cout << "Sum = " << sum << endl;
    cout << "Mean = " << mean << endl;
    cout << "Standard Deviation = " << stdDev << endl;

    // Free the dynamically allocated memory
    delete[] arr;

    return 0;
}

