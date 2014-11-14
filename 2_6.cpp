#include <iostream>
#include <stack>
using namespace std;

int main(){
  cout<<"This is the decimal to binary transformer program. Give me a bin number please: "<<endl;
  int n; cin>>n;
  std::stack<int> digits_stack;
  while(n!=0){
    digits_stack.push(n%2);
    n = n/2;
  }
  while(!digits_stack.empty()){
    cout<<digits_stack.top();
    digits_stack.pop();
  }
  cout<<endl;
  return 0;
}
