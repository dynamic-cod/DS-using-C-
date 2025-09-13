//program to perform additon on two numbers without using + operator.
#include <iostream>
using namespace std;

int main() {
	int a, b; // taking two variables
	
	cout<<"Enter first number: ";
	cin>> a;
	
	cout<<"Enter second number: ";
	cin>> b;
	
	//we will use bitwise operations to add without using '+' operator
	//we will use a loop until there is no carry left
	while(b != 0){
		int carry = a & b; // AND finds bits that are both 1(carry)
		a = a ^ b;         //XOR adds bits where only one is 1(sum without carry)
		b = carry << 1;	   // shift carry to the left byt 1 to add in the next position
	}
	
	cout<< "Sum is: "<< a << endl;  // here 'a' contains the final sum
	return 0;
}
