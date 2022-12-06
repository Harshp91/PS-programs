#include<iostream>
using namespace std;

int addigit(int n)
{
    int s=0;
    while(n>0)
    {
        s=s+n%10;
        n=n/10;
    }
    int x=s/10;
    if(x!=0)
    {
        addigit(s);
    }
    else
    {
        return s;
    }
}

int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<addigit(n)<<endl;
    
    return 0;
}