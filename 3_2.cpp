#include <iostream>
using namespace std;

int main()
{
   cout<<"Enter a number of friends and a list of their ages. Thanks."<<endl;
   int N;
   cin>>N;
   int a[N];
   int mini = 500;
   int maxi=0;
   for(int i=0; i<N;++i){
       cin>>a[i];
       if(mini>a[i])
           mini = a[i];
       if(maxi<a[i])
           maxi = a[i];
   }
   cout<<mini<<endl;
   cout<<maxi<<endl;
   return 0;
}
