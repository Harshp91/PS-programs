#include<iostream>
using namespace std;

int power(int a,int n)
{
    if(a==0 )
    {
        return 0;
    }
    else if(n==0)
    {
        return 1;
    }
    else if(n%2==0)
    {
        return power(a*a,n/2);
    }
    else 
    {
        return a*power(a*a,n/2);
    }
}

int main()
{
    int x,a,n;
    cout<<"enter the value of n and a "<<endl;
    cin>>a>>n;
    x=power(a,n);
    cout<<x<<endl;

 return 0;
}