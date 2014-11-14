#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter a number of elements followed by an array and the program will check if it is sorted."<<endl;
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
    return 0;
}
