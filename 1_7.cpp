#include <iostream>

using namespace std;

int main()
{
    cout<<"Soo... you are buying stuff today are you not... Well... Let me help you out."<<endl;
    cout<<"Tell me how much your item costs and then how many items you will be buying. Thanks."<<endl;
    double price; int n;
    cin>>price>>n;
    cout<<"The taxes you will pay are exactly: "<< 0.2*price*n <<" BGN"<<endl;
    return 0;
}
