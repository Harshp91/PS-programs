#include <iostream>
using namespace std;

int main()
{
 int i,j,n;
 cout<<"ener the value of n"<<endl;
 cin>>n;
 int a[10][11]={0};
 a[0][1]={1};
 for(i=0;i<n;i++)
 {  
   for(j=0;j<n+1;j++)
   {
     if(i!=0 && j!=0)
     {
         a[i][j]=a[i-1][j-1]+a[i-1][j];
     }
   }
 }

 for(i=0;i<n;i++)
 {
    for(j=0;j<n+1;j++){
     if(a[i][j]!=0)
       {
        cout<<" "<<a[i][j];
       }
    }
    cout<<endl;
 }

 return 0;
}