#include <iostream>
using namespace std;

int main(){
  char str[150];
  cout<<"Enter a string: ";
  cin.getline(str,150);

  cout<<"Characters are: ";
  for(int i =0; str[i] !='\0'; i++)
    cout<<str[i]<<endl;
  
  return 0;
}
