#include<iostream>
using namespace std;

int main()
{
  int n;
  cout<<"enter the size "<<endl;
  cin>>n;
  int a[n],j=0,i;
  cout<<"eneter element"<<endl;
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  if(n%2==0)
  {
    while(j<n)
    {
      swap(a[j],a[j+1]);
      j=j+2;
    }
  }
  else
  {
    while(j<(n-1))
    {
      swap(a[j],a[j+1]);
      j=j+2;
    }
  }

  for(i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }

}