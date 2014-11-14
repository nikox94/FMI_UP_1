#include <iostream>
using namespace std;

int main(){
  cout<<"Vuvedete char i nie shte vi kajem kakvo e... ;-)"<<endl;
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
  return 0;
}
