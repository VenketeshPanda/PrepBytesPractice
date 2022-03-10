#include<iostream>
using namespace std;

int binarySearch(int a[],int n,int k)
{
   int low=0;
   int high=n-1;
   while(low<=high)
   {
       int mid=(low+high)/2;
       if(k==a[mid])
       {                                                                

            return mid;
       }
           
        else if(k>a[mid])
        {
             low=mid+1;
        }
           
        else  
        {
            high=mid-1;
        }  
   } 
   return -1;
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
        int ans=binarySearch(a,n,k);
        cout<<ans<<endl;
    }
    return 0;
}