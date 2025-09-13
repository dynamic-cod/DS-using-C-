//program to evaluate the arithmatic expression ((a+b/c*d-e) * (f-g)).
#include <iostream>
using namespace std;

int main() {
	// we will use float 
	float a, b, c, d, e, f, g; // declaring variales to hold input values
	
	cout<<"Enter the values for a, b, c, d, e, f, g: "; // taking input from user
	cin>> a>> b>> c>> d>> e>> f>> g;
	
	float result = (a+((b/c) * d) - e) * (f -g);
	cout<<"The result of the expression is: "<< result<< endl;
	return 0;
}
