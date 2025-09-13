//program to read elements using a pointer into an array and display the values using an array
#include <iostream>
using namespace std;

int main(){
	int n; 
	cout<<"Enter the length of array: ";
	cin>>n;
	
	int arr[n];  //declaring an array
	
	int *ptr=arr;  //declaring and intializing pointer variable to the first element of the array
	
	
	cout<<"Enter "<< n << " elements: ";		//reading elements using pointer
	for(int i= 0; i<n; i++){
		cin>> *(ptr + i);
	}
	
	cout<<"The entered elements are: ";			//printing/displaying output the values
	for (int i=0; i<n; i++){
		cout<< *(ptr + i) << " ";
	}
	
	cout<<endl;
	
	return 0;
}
