#include<iostream>
using namespace std;

int main()
{
    int n,v,j;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        v=a[i];
        j=i;
        while(a[j-1]>v && j>=1)
        {
            a[j]=a[j-1];
            j--;
        }
        a[j]=v;
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    
    return 0;
}