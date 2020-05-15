#include<stdio.h>
int main()
{
    int i=1;
    for(i=1;i<100;i++)
    {
        if(i==30||i==60||i==90)
        {
        }
        else if(i%3==0)
        {
            printf("%d ",i);
        }
    }
}
