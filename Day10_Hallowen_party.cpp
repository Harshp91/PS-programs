#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter "<<endl;
    cin>>n;
    int m=1,y,i;
    for(i=1;i<n;i++)
    {
        y=i*(n-i);
        if(y>m)
        {
            m=y;
        }
    }
    cout<<m<<endl;
}