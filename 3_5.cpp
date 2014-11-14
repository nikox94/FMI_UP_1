#include <iostream>
using namespace std;

int main()
{
  cout<<"Please enter a 7-letter word to be reversed."<<endl;
  char a[8];
  cin.getline(a,8);
  for(int i=7;i>=0;--i){
	cout<<a[i];
  }
  return 0;
}
