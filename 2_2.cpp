#include <iostream>
using namespace std;

int main(){
  cout<<"Dai chislo i shte ti kaja dokolko e prosto... :-)"<<endl;
  int p;
  cin>>p;
  for(int i=2;i<=p/2;p+=2)
    if(p%i==0)
      cout<<"Prosto"<<endl;
    else
      cout<<"Sustavno"<<endl;
  return 0;
}
