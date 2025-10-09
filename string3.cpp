#include <iostream>
using namespace std;

int main(){
  char str[150];
  int count = 0;

  cout<<"Enter a string: ";
  cin.getline(str,150);

  for(int i=0; str[i]!='\0'; i++){
    char ch=tolower(str[i]);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
      count++;
  }
  count<<"Number of vowels: "<<count<<endl;
  return 0;
}
