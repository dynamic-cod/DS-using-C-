//program to perform additon and substraction on matrices
#include <iostream>
using namespace std;

int main() {
    const int rows = 3, cols = 3; // You can change size
    int A[rows][cols], B[rows][cols], sum[rows][cols], product[rows][cols];

    // Input elements of Matrix A
    cout << "Enter elements of Matrix A (3x3):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    // Input elements of Matrix B
    cout << "\nEnter elements of Matrix B (3x3):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "B[" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }
    }

    // Adding matrices A & B
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Display result of addition
    cout << "\na. Sum of matrices:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    
    // Multiply A × B
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            for (int k = 0; k < cols; k++) {
            	product[i][j]=0;
                product[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display Result of multiplication
    cout << "\nb. Product of matrices:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

