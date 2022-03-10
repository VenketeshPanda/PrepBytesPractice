#include<iostream>
using namespace std;


//Recursive approach
int binarySearch(int a[],int k,int low,int high,int mid)
{
    if(low>high)
        return -1;
    mid=(high+low)/2;
    if(k==a[mid])
        return mid;
    else if(k>a[mid])
        return binarySearch(a,k,(mid+1),high,mid);
    else
        return binarySearch(a,k,low,mid-1,mid);
}



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int high,mid,low;
        low=0;
        high=n-1;
        mid=(high+low)/2;
        int ans=binarySearch(a,k,low,high,mid);
        cout<<ans<<endl;
    }
    return 0;
}