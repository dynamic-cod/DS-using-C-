//program throguh a pointer variable to the sum of n elemnts from the array.
#include <iostream>
using namespace std;

int main() {
	
	int n, sum = 0;			//declaring variable
	cout<<"Enter the length of the array: ";
	cin>>n;
	
	int arr[n];  
	int *ptr = arr;   //declaring pointer
	
	cout<<"Enter "<<n<<" elements\n";
	for(int i =0; i<n; i++){		//using for-loop for taking input using  pointer variable
		cin>> *(ptr + i);
	}
	
	for(int i = 0; i<n; i++){		//using for-loop for printing the sum using pointer variable
		sum += *(ptr +i);
	}
	
	cout<<"Sum of elements using pointer variable: "<<sum<<endl;
	return 0;
}
