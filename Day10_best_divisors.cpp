#include<iostream>
using namespace std;

int digsum(int n)
{
    int a,s=0;
    while(n!=0)
    {
        a=n%10;
        n=n/10;
        s=s+a;
    }
    return s;
}

int main()
{
    int n;
    cout<<"enter "<<endl;
    cin>>n;
    int i,p,m=0,x,j;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
           x=digsum(i);
           if(x>m)
           {
             p=i;
             m=x;
           }
        }
    }
    cout<<p<<endl;
}
