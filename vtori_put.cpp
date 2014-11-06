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
  for(int i=2;i<=p/2;p+=2)
    if(p%i==0)
      cout<<"Prosto"<<endl;
    else
      cout<<"Sustavno"<<endl;
  break;
  case 3:
  //Zadacha 3 + 4
  int c,n;
  cout<<"Vuvedi broi cifri na chisoto:"<<endl;
  cin>>n;
  cout<<"Vuvedi chisloto:"<<endl;
  cin>>c;
  std::stack<int> digits_stack;
  while(n!=0){
    digits_stack.push(c%10);
    c/=10; --n;
  }
  while(!digits_stack.empty()){
    cout<<digits_stack.top()<<endl;
    digits_stack.pop();
  }
  break;
  case4:
  //Zadacha 4
  
  
  
  break;
  default:
  cout<<"Have a nice day! :-)"<<endl;
  
  return 0;
  }
