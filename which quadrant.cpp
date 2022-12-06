#include <iostream>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;

    if(x==0 && y==0)
      {cout<<"origin"<<endl;}
   
   if(x>0 && y>0)
      {cout<<"1st quadrant"<<endl;}

   if(x<0 && y<0)
   {cout<<"3rd quadrant"<<endl;}  

   if(x>0 && y<0)
   {cout<<"4th quadrant"<<endl;}  

   if(x<0 && y>0)
   {cout<<"2nd quadrant"<<endl;} 

   if(x==0 && y!=0)
   {cout<<"y axis"<<endl;}  

   if(x!=0 && y==0)
   {cout<<"x axis"<<endl;}  

 return 0;

}  