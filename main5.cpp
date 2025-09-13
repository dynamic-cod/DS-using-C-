// C++ program to display Prime numbers till N
#include <iostream>
using namespace std;

//function to check whether a number is prime
bool isPrime(int num){
	if(num <= 1) //any number less than or equals to 1 is not prime
		return false;
	if(num ==2)  //2 is the smallest prime number
		return true;
	if(num%2==0) //any even number greater than 2 is not prime
		return false;
		// check divisibility by odd numbers from 3 to sqrt(number)
	for(int i =3; i*i<=num; i+=2){
		if(num%i==0)
			return false;
	}// if no devisors are found, the number is prime
	return true;
}


int main()
{
    int N;  //upper limit to check for primes
    cout<<"Enter the upper limit range: ";
    if(!(cin>> N)){  //checking if input is not a valid integer 
    	cout<<"Invalid input type.";
    	return 0; //exit program
	}
	if(N<2){  //if n is less than 2, no primes exist in the range
		cout<<"No prime number up to "<< N<< endl;
		return 0;
	}
	cout<<"Primes up to "<<N<<": ";
	
	//loop through numbers from 2 to N and check each for primality
	for(int i =2; i<=N; ++i){
		if(isPrime(i))
			cout<<i<<" ";  //print the number if it's prime
	}
	cout<<'\n';
	
    return 0;
}
