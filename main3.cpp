// program to print the address of the variable using pointer
#include <iostream>
using namespace std;

int main() {
    int num1, num;  // Declare and initialize an integer variable
	cout<<"Enter two numbers: ";
	cin>> num;
	cin>> num1;
	
    int *ptr, *ptr1;         // Declaring pointers
    
    // Storing the address of 'num and num1' in the pointers
	ptr = &num; 
	ptr1 = &num1;  

    // Display the addresses using the pointers
    cout << "Value of number: " << num << endl;
    cout << "Address of number (&number): " << &num << endl;
    cout << "Value of number: " << num1 << endl;
    cout << "Address of number (&number): " << &num1 << endl;

    return 0;
}

