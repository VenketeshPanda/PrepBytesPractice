#include<iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{

        int n,k;
        cin>>n;
        int a[n],f[1000001];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
           
        }   
        cin>>k;
        for(int i=0;i<n;i++)
        {
            f[a[i]]+=1;
           
        }   
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            if(f[i]==k)
            {
                cout<<i;
                break;
            }
        }

    return 0;
}