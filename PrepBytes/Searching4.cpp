#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int sun(int a[],int m,int start,int end)
{
    int mid=(start+end)/2;
        if(a[mid]==m)
            return mid;
        else if(a[mid]>m)
            return sun(a,m,start,mid-1);
        else    
            return sun(a,m,mid+1,end);
        return -1;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
        {
            if(a[i]!=0)
            {
                m=a[i];
                break;
            }
        }
        int c,start,end;
        start=0;
        end=n-1;
        sort(a,a+n);
        if(m!=0)
        {
            c=sun(a,m,start,end);
            cout<<n-c<<endl;
        }
        else
            cout<<"0"<<endl;
            
    }
    return 0;
}