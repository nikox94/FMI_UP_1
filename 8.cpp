#include <iostream>
#include <string>

using namespace std;


int kolko(string what, string where){

    int counter=0;
    for(int i=0;i<=where.length();++i){
        if(where[i]==what[0]){
            for(int j=1;j<what.length();++j){
                if(where[i+j]!=what[j])
                    break;
                if(j==what.length()-1)
                    counter++;
            }
        }
    }
    return counter;

}

int sum_masiv(int a[], int n,int i){
    /*int[] a - masiv ot elementi
    * int n - broi elementi
    * int i - current index
    */
    if((n-1)%2==1 && i==n-1)
        return a[i];
    if((n-1)%2==0 && i>n-1)
        return 0;
    return a[i]+sum_masiv(a, n, i+2);
}



int main()
{
    string a;
    //getline(cin, a, '\n');
    //cout<<a.length()<<endl;
    a = "mama";
    string b = "mamaegolqmamama";
    cout<<kolko(a, b)<<endl;
    int f[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};
    cout<<sum_masiv(f, 18, 1);
    return 0;
}
