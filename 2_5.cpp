#include <iostream>
#include <string>
using namespace std;

int main(){
  cout<<"Give me a number to check if palindrome..."<<endl;
  string number;
  getline(cin, number);
  //count number of digits of given chiffre
  int n=0;
  while(number[n]!='\0'){
	  ++n;
  }
  bool palindrom = true;
  for(int i=0;i<n/2;++i){
    if(number[i]!=number[n-i-1]){
      palindrom = false;
      break;
    }
  }
  if(palindrom){
    cout<<"Chisloto e palindrom."<<endl;
  } else{
    cout<<"Chisloto ne e palindrom."<<endl;
  }
  return 0;
}
