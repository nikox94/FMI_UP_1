#include <iostream>
using namespace std;

int main(){
  cout<<"Vuvedi broi uchastnici v sustezanieto...! ";
  int n;  cin>>n;
  int best; int best_i;
  int wrst; int wrst_i;
  for(int i=0;i<n;++i){
    int ipt; cin>>ipt;
    if(i==0){ //If initial sort out best and worst initializations
      best = ipt; best_i = i;
      wrst = ipt; wrst_i = i;
    }
    if(ipt>best){
      best = ipt; best_i = i;
    }
    if(ipt<wrst){
      wrst = ipt; wrst_i = i;
    }
  }
  cout<<"And the winner is... #"<<best_i+1<<" who got "<<best<<" points."<<endl;
  cout<<"Please help #"<<wrst_i+1<<" get more than "<<wrst<<" points next time."<<endl;
  return 0;
}
