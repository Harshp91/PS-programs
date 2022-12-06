#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int i;
    cout<<"enter the value of a,b and c of wuad equation"<<endl;
    int a,b,c;
    cin>>a>>b>>c;
    int d=(b*b)-(4*a*c);
    float n,m,x;
 if(d>0)
 {
    x=sqrt(b*b-(4*a*c));
    m=(-b+x)/(2*a);
    n=(-b-x)/(2*a);
    cout<<"real and distinct roots"<<m<<" "<<n<<endl;
 }

 else if(d==0)
 {
    m=-b/(2*a);
    cout<<"real and equal roots"<<m<<endl;
 }
 else
 {
    float r=-b/(2.0*a);
    int d=-((b*b)-(4*a*c));
    float i=(sqrt(d))/(2*a);
    cout<<r<<endl;
    cout<<i<<endl;

    cout<<"imaginary roots"<<" "<<r<<" + "<<i<<"i"<<endl;
    cout<<"imaginary roots"<<" "<<r<<" - "<<i<<"i"<<endl;
 }

}