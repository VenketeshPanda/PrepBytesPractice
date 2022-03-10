#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n],c=-1;
        for(int i=0;i<n;i++)
            cin>>a[i];
        int mid=(n-1)/2;

        //Only iterate if k is less than the mid element
        if(k<=a[mid])
        {
            for(int i=0;i<mid;i++)
        {
            if(a[i]>k)
            {
                cout<<(i-1)<<endl;
                break;
            }
            if(a[i]==k)
            {
                cout<<i<<endl;
                break;
            }
                
        }
        }
        
        //Only iterate if k is greater than the mid element
        else if(k>a[mid])
        {
            for(int i=mid;i<=n;i++)
        {
            if(a[i]>k)
            {
                cout<<i-1<<endl;
                c=0;
                break;
            }
            if(a[i]==k)
            {
                cout<<i<<endl;

                c=0;
                break;
            }
                
        }
        if(c==-1)
            cout<<-1<<endl;
        }
        
    }
    return 0;
}