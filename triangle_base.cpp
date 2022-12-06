#include<iostream>
using namespace std;

int main()
{
    int b,a1,a,h;
    cout<<"enter the value of b and a"<<endl;
    cin>>b>>a;
    h=(2*a)/b;
    a1=0;
    while(a1<a)
    {
        a1=(b*h)/2;
        if(a1>=a)
        {
            cout<<h<<endl;
            break;
        }
        h++;
    }
 return 0;
}