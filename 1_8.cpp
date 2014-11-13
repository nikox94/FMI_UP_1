#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout<<"Please type the coordinates of point A (a1,a2): "; double a1,a2; cin>>a1>>a2;
    cout<<"Please type the coordinates of point B (b1,b2): "; double b1,b2; cin>>b1>>b2;
    cout<<"The distance in between is: "<< sqrt(pow((a1-b1),2)+pow((a2-b2),2))<<endl;
    return 0;
}
