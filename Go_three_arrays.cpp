#include<iostream>


    char m[20];
    char k;
    for(int i=0;i<20;i++)
    {
        cin>>m[i];
    }
    bool flag=true;
    do
    {
    for(int i=0;i<20;i++)
    {
        if(m[i]>m[i+1])
        {
            k=m[i];
            m[i]=m[i+1];
            m[i+1]=k;
            flag=true;
        }
    }
    }
    while(flag);
        
