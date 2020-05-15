#include<stdio.h>
int main()
{
    int hour, minute;
    printf("Enter the hour and minute : ");
    scanf("%d%d",&hour,&minute);
    minute+=1;
    if (minute>=60)
    {
        hour+=1;
        minute-=60;
        if (hour>=24)
        {
            hour-=24;
        }
    }
    else if (hour>=24)
    {
        hour-=24;
    }
    printf("In the next minute, it will be %dh%dmin",hour,minute);
}
