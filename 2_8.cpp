#include <iostream>
using namespace std;

int main(){
  cout<<"Vuvedete broi i simvol za da se izobrazi triugulnik."<<endl;
  int n; char sym; cin>>n>>sym;
  //Purvi red
  for(int i=1;i<2*n;++i){
    if(i%2==0)
      cout<<" ";
    else
      cout<<sym;
  }
  cout<<endl;
  for(int i=1;i<n;++i){
    for(int j=1; j<2*n;++j){
      if(j==i+1 || j==2*n-i-1)
        cout<<sym;
      else
        cout<<" ";
    }
    cout<<endl;
  }
  return 0;
}
