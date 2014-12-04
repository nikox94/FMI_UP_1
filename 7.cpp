#include <iostream>

using namespace std;

const int m=2;
const int n=2;
bool[][] topologiq = {{0,0},{1,1}};
bool[][] poseteni={{0,0},{0,0}};

int factoriel(int n){
    if(n==1)
        return 0;
    return n*factoriel(n-1);
}

int fibonacci(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}

int suma_cifri(int n){
    if(n==0)
        return 0;
    return n%10+suma_cifri(n/10);
}

int power(int n, int pow){
    if(pow==1)
        return n;
    return n*power(n, pow-1);
}

bool k_vuv_n(int n, int k){
    if(n%10==k)
        return true;
    if(n<10 && n!=k)
        return false;
    return k_vuv_n(n/10, k);
}

int broi_elelm_v_oblastta(int k1, int k2){
    if(poseteni[k1][k2])
        return 0;
    poseteni[k1][k2]=1;

    if(k1==m-1){
        if(k2==n-1)//TODO
            return topologiq[k1][k2];
        else
            if(k2==0)
                return topologiq[k1][k2];
            else
                return 1+broi_elelm_v_oblastta()


    if(k1==0)



    if(k2==0)


    if(k2==n-1)



}


int main()
{
    cout << k_vuv_n(295,9) << endl;
    return 0;
}
