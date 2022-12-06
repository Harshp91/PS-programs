#include <iostream>
using namespace std;

int main()
{
    int bs,ts;
    float pf,hra,allow,da;
    char g;
    cout<<"give the basic salary and grade"<<endl;
    cin>>bs>>g;
    
    hra=0.2*bs;
    da=0.5*bs;

    if(g=='A')
    {allow=1700;}

    else if(g=='B')
    {allow=1500;}

    else
    {allow=1300;}

    pf=0.11*bs;

    ts=bs+hra+da+allow-pf;
    cout<<ts<<endl;

 return 0;
    
}