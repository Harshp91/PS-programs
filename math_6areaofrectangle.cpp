#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int r;
    cout<<"enter the radius of the circle";
    cin>>r;
    int d=2*r;
    float s=sqrt((d*d)/2);
    cout<<"area of the rectangle is"<<endl;
    cout<<s*s<<endl;
 return 0;
}