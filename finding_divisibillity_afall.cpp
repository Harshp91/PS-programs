
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter"<<endl;
    cin>>n;
    int i,y;
    for(i=11;i<=n;i++)
    {
         y=i;
        while(y>0)
        {
            int x=y%10;
            if(i%x!=0 || x==0)
            {
                break;
            }
            y=y/10;
        }
        cout<<"i "<<i<<endl;
        if(y==0)
        {
            cout<<i<<" "<<endl;;
        }
    }
 return 0;
}


#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter"<<endl;
    cin>>n;
    int i,y;
    for(i=11;i<=n;i++)
    {
        if(i%10!=0){
         y=i;
        while(y>0)
        {
            int x=y%10;
           
            y=y/10;
        }
        }
        cout<<"i "<<i<<endl;
        if(y==0)
        {
            cout<<i<<" "<<endl;;
        }
    }
 return 0;
}
*/


