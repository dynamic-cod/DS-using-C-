#include <iostream>
using namespace std;

int main(){
  char str[150];
  int length =0;
  cout<<"Enter a string but less than 150 char: ";
  cin.getline(str, 150);
// count characters until null terminator
  while(str[length]!='\0')
    length++;
  cout<<"Length of the string is: "<<length<<endl;
  return 0;
}
