#include<iostream>
using namespace std;

int main()
{
  int a,b,c;
  cout<<"enter the length of sides of triangle"<<endl;
  cin>>a>>b>>c;
   
  if((a+b)>c  || (a+c)>b  || (b+c)>a )
  {
    if(a>0 && b>0 && c>0)
    {
      if(a==b && b==c )
      { cout<<"equilateral triangle"<<endl;}  
      else if(a==b || b==c || c==a)
      { cout<<"isosceles triangle"<<endl;}  
      else 
      { cout<<"scalene triangle"<<endl;}
    }

   else
     {
       cout<<"entered values of lengths does not form the triangle"<<endl;
     }
   
  }

  else
  {
    cout<<"entered values of lengths does not form the triangle"<<endl;
  }

  return 0;
}