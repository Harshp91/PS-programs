#include<iostream>
using namespace std;

int main()
{
  int n;
  cout<<"enter the size "<<endl;
  cin>>n;
  int a[n],j,i;
  cout<<"eneter element"<<endl;
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(i=0,j=n-1;i<n,j>=1;i++,j--)
  {
    if(a[i]!=a[j] || a[i+1]!=a[j])
    swap(a[i],a[j]);
  }
  for(i=0;i<n;i++)
  {
    cout<<a[i];
  }

}