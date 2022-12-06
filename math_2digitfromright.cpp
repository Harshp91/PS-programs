#include<iostream>
#include<math.h>
using namespace std;

int power(int n ,int m)
{
   if(m==0)
   {
      return 1;
   }

   else
   {
     return n*pow(n,m-1);
   }
}

int main()
{
    int a,b,k;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b>>k;
    long long x=power(a,b);
    cout<<x<<endl;
    int n=k-1;
    long long z=power(10,n);
    cout<<z<<endl;
    long long y=x/(z);
    cout<<y<<endl;
    int m=y%10;
    cout<<m<<endl;

 return 0;
}