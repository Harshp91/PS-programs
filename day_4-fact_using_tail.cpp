#include<iostream>
using namespace std;

int fact(int n,int a)
{
    if(n==1)
    {
        return a;
    }
    else
    {
        return fact(n-1,n*a);
    }
}

int main()
{
    int n,f;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    if(n==1)
    {
        cout<<n<<endl;
    }
    else if( n<=0)
    {
        cout<<"factorial not possible"<<endl;
    }
    else
    {
        f=fact(n,1);
        cout<<f<<endl;
    }
 return 0;
}