//05.11.2014 If-For-While
#include <iostream>
#include <stack>
using namespace std;

int main(){

problem = 1;

switch problem:
  case 1:
  //Problem 1
  char c;
  cin>>c;
  if(c>=65 && c<=90)
    cout<<"Golqma bukva"<<endl;
  else
    if(c>=97 && c<=122)
      cout<<"Malka bukva!"<<endl;
    else
      if(c>=48 && c<=57)
        cout<<"Cifra"<<endl;
      else
        cout<<"Simvol"<<endl;
  
  break;
  case 2:
  //Zadacha 2
  int p;
  cin>>p;
  for(int i=2;i<=p/2;++p)
    if(p%i==0)
      cout<<"Prosto"<<endl;
    else
      cout<<"Sustavno"<<endl;
  break;
  case 3:
  //Zadacha 3
  int c;
  cin>>c;
  
  
  default:
  cout<<"Have a nice day! :-)"<<endl;
  
  return 0;
  }
