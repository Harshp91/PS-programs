#include<iostream>
using namespace std;

int main()
{
    int c,r,x,y;
    cout<<"enter the r and c"<<endl;
    cin>>r>>c;
    if(r%2==0)
    {
        x=((r/2)-1)*10;
        y=2*(c-1)+1;
        cout<<x+y<<endl;
    }
    else
    {
        x=(r/2)*10;
        y=2*(c-1);
        cout<<x+y<<endl;
    }
 return 0;
}