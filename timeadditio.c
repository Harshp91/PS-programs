#include<stdio.h>

struct time
{
    int hour;
    int min;
    int sec;
};

int main()
{
    struct time t;
    struct time t1={7,31,54};
    struct time t2={10,55,36};
    int x,y;
    t.sec=(t1.sec+t2.sec)%60;
    x=(t1.sec+t2.sec)/60;
    t.min=(t1.min+t2.min+x)%60;
    y=(t1.min+t2.min+x)/60;
    t.hour=(t1.hour+t2.hour+y);

    printf("%d %d %d" , t.hour,t.min,t.sec);
    
 return 0;
}