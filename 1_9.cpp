#include <iostream>

using namespace std;

int main()
{
    int myAge, currentYear, compareYear;
    cout<<"Enter myAge, currentYear, compareYear please. Thanks."<<endl;
    cin>>myAge>>currentYear>>compareYear;
    cout<<"Thinking..."<<endl;
    int predAge = compareYear-currentYear+myAge;
    if(predAge<=0){
        cout<<"You were not even born then....";
    }
    if(predAge>=200){
    cout<<"Dead";
    }
    if(predAge>0 && predAge<200){
    cout<<"You'll  be exactly "<<predAge<<" years old.";
    }
    cout<<endl;
    return 0;
}
