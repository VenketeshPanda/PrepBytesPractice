#include<iostream>
using namespace std;

///Approach 1(Euclidean's algorithm of substraction)
/*int gcd(int a,int b)
{
    if(a>b){
       return gcd(a-b,b);
    }

    if(b>a){
       return gcd(a,b-a);
    }  

     if(a==0)
        return(b);
    if(b==0)
        return(a);
    if(a==b)
        return(a);
}*/


//Euclidean's algorithm of division
int gcd(int a,int b)
{
    if(a==0)
        return(b);  
    if(b==0)
        return(a);
    return gcd(b,a%b);
}
int main()
{
    int a,b;
    cout<<"Enter 2 numbers:"<<endl;
    cin>>a>>b;
    int g=gcd(a,b);
    cout<<g<<endl;
    
    EXIT_SUCCESS;
}