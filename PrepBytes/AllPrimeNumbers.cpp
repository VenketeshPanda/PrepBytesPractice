#include<iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int p[n];
    p[1]=0;
    for(int i=2;i<=n;i++)
        p[i]=1;
    for(int i=2; (long long) i*i<=n;i++)
    {
        if(p[i]==1)
        {
            for(int j=i*i;j<=n;j=j+i)
            {
                p[j]=0;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(p[i]==1)
            cout<<i<<" ";
    }
}