// program to generate  first n terms of Fibonacci sequence
#include <iostream>
using namespace std;


int main() {
	int n;
	cout<<"Enter the number of terms you want to print: ";
	cin>> n;
	
	//first two terms of fibonacci series is fixed i.e. 0 & 1
	int t1 = 0, t2 = 1;  // t1 for term 1 and t2 for term 2
	
	cout<<"Fibonacci Sequence: ";
	if(n >=1)cout<< t1<< " ";  //in case when n =1 or 2
	if(n >=2)cout<< t2<< " ";
	
	// generating the remaining terms
	for( int i=3; i<=n; i++){  // we will start the loop from i=3 becasue we already have two terms(1st & 2nd)
		int nextTerm = t1 + t2;
		cout<< nextTerm << " ";
		t1 = t2;   				//updating the next terms
		t2 = nextTerm;
	}
	return 0;
}
