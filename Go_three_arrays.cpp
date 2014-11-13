#include <iostream>
using namespace std;

int main()
{
    //We will switch on the problem number so that we can
    //save ourselves many different short files and combine them into one
    int problem_no = 4;
    switch(problem_no){
case 1:
    break;
case 2:
//    int N;
//    cin>>N;
//    int a[N];
//    int mini = 500;
//    int maxi=0;
//    for(int i=0; i<N;++i){
//        cin>>a[i];
//        if(mini>a[i])
//            mini = a[i];
//        if(maxi<a[i])
//            maxi = a[i];
//    }
//    cout<<mini<<endl;
//    cout<<maxi<<endl;
//
    break;
case 3:
//    int N;
//    int sum=0;
//    cin>>N;
//    int a[N];
//    for(int i=0;i<N;i++){
//        cin>>a[i];
//        sum+=a[i];
//    }
//    cout<<"Your GPA="<<(double)sum/N<<endl;
    break;
case 4:
    int n;
    cin>>n;
    int a[n];
    bool flag=false;
    for(int i=0;i<n;++i){
        cin>>a[i];
        if(i>0){
            if(a[i-1]>a[i]){
                cout<<"Is not sorted!!!";
                flag = true;
                break;
            }
        }
    }
    if (!flag){
        cout<<"Is sorted"<<endl;
    }

    //for (int i=0;i<n;i++) cin>>a[i];
    /*int j=0;
    while (j!=n-2)
    {
        if (a[j]<=a[j+1])
            j++;
        else
        {
            cout<<"Not sorted"<<endl;
            break;
        }
        if (a[n-2]<=a[n-1])
            cout<<"Sorted"<<endl;
        else
            cout<<"Not sorted";
    }*/

    break;
    }
    return 0;
}
