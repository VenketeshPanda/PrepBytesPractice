#include<iostream>
using namespace std;

int main()
{
    int a=16,b=12;
    for(int i=a;i<=a*b;i=i+a)
    {
        if(i%a==0 && i%b==0)
        {
            cout<<i<<endl;
            break;
        }  
        
    }
    return 0;
}