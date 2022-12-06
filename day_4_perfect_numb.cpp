#include<iostream>
using namespace std;

int main()
{
    int n,a,b;
    cout<<"enter the range values a and  b "<<endl;
    cin>>a>>b;
    int i,j;
    for(i=a;i<=b;i++)
    {
        int c=0;
        for(j=1;j<=i/2;j++)
        {
            if(i%j==0)
            {
                c=c+j;
            }
        }
        if(c==i)
        {
            cout<<i<<endl;
        }
    }
 return 0;
}