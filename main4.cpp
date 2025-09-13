//program for increment and decrement integer using pointer
#include <iostream>
using namespace std;

int main(){
	
	int num;
	cout<<"Enter a number: ";
	//taking input from the user
	cin>>num;
	// declaring pointer
	int *ptr;
	
	ptr = &num;
	
	//increasing the value of the given number using pointer   *ptr=value at the address at ptr
	cout<<"Printing the increment value: "<< ++(*ptr)<<endl;
	
	cout<<"Printing the decrement value after increment: "<< --(*ptr)<<endl;
	return 0;
}
