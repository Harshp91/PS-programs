#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enetr "<<endl;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        cout<<i<<" ";
        i=i+2;
    }
    i=i-2;
    if(i<n)
    {
        int j=n;
        
       while(j>=1)
       {
         cout<<j;
         j=j-2;
       }
    }
    else
    {
        int j=n-1;
        
        while(j>=1)
        {  
            cout<<j<<" ";
            j=j-2;
        }
    }

 return 0;
}