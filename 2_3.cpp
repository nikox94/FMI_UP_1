#include <iostream>
#include <stack>
using namespace std;

int main(){
  int c,n=4;
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
  return 0;
}
