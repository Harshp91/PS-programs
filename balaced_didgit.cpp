#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the odd number"<<endl;
    cin>>n;
    int s1=0,c=0;
    int n1=n,c1=0;
    while(n1!=0)
    {
        n1=n1/10;
        c1=c1+1;
    }
    while(c<(c1-1)/2)
    {
       s1=s1+n%10;
       n=n/10;
       c=c+1;
    }
    n=n/10;
    int s2=0;
    while(n!=0)
    {
        s2=s2+n%10;
        n=n/10;
    }

    if(s1==s2)
    {
        cout<<"balanced number"<<endl;
    }

    else
    {
        cout<<"unbalanced number"<<endl;
    }

 return 0;
}