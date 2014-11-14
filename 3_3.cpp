#include <iostream>
using namespace std;

int main(){
	cout<<"Please enter five of your grades to get your GPA calculated."<<endl;
	int N=5;
	double sum=0;
	double a[N];
	for(int i=0;i<N;i++){
		cin>>a[i];
		sum+=a[i];
	}
	cout<<"Your GPA="<<(double)sum/N<<endl;
    return 0;
}
