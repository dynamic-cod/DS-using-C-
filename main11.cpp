//program to find the factorial of number given in an array using pointer
#include<iostream>;
using namespace std;

//function to calculate factorial
long int factorial(int n){
	long int fact = 1;
	for(int i = 1; i<=n; i++){
		fact *= i;
	}
	return fact;   
}

int main(){
	int n;
	cout<<"Give the size of the array: ";  //taking size of array
	cin>>n;
	
	int arr[n];			//declaring array of size n
	int *ptr=arr;    //initializing pointer variable to array
	
	cout<<"Taking input: ";   //taking input using pointer variable
	for(int i= 0; i<n; i++){
		cin>> *(ptr + i);
	}
	cout<<"Factorial of elements given in array: ";  // printing the factorial value of each element
	for(int i =0; i<n; i++){
	int result = *(ptr + i);
		long int fact = factorial(result);
		cout<<"Factorial of "<<result<<"= "<<fact<<endl;
	}
	return 0;
}
