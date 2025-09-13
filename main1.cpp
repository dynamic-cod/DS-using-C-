//program to check wherther given integer is even or odd using tenary operator
#include <iostream>

using namespace std; // it allows is to use standard name without std:: prefix

int main() {
	int num; // declaring an integer variable to store input number
	
	cout<<"Enter an integer: ";
	cin>> num; // taking an integer input from the user
	
	if(num==0){
		cout<<"Zero is neither even nor odd.";
		return 0;
	}
	
	//using ternary operator to check if the number is even of odd
	(num % 2==0)? cout<< num <<" is even.": cout<< num<<" is odd.";
	
	return 0;
}
