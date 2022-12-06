#include <iostream>
using namespace std;

int main()
{
    int t;
    cout<<"enter the value of the tempertare"<<endl;
    cin>>t;
     
    if(t<0)
    {cout<<"frezing weather"<<endl;}
    if(t>=0 && t<10)
    {cout<<"Very cold Weather"<<endl;}
    if(t>=10 && t<20)
    {cout<<"Cold weather"<<endl;}
    if(t>=20 && t<30)
    {cout<<"Normal in temperature"<<endl;}
    if(t>=30 && t<40)
    {cout<<"Its Hot"<<endl;}
    if(t>=40)
    {cout<<"Its Very Hot"<<endl;}

    return 0;
}