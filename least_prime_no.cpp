#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number upto which least prime no. is to find"<<endl;
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((i%j)==0)
            {
                if(i==1)
                {
                    cout<<1<<" ";
                }

                else if(i!=1 && j!=1)
                {
                  cout<<j<<" ";
                  break;
                }
            }
        }
    }

 return 0;
}