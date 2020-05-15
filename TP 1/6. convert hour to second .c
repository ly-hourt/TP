#include<stdio.h>
int main()
{
    //declare variable
    int h,mn,s,seconds;
    //get input
    printf("Enter hour : ");
    scanf("%d",&h);
    printf("Enter minute : ");
    scanf("%d",&mn);
    printf("Enter second : ");
    scanf("%d",&s);
    //process input
    seconds = h*3600+mn*60+s;
    //display out put
    printf("It is %d seconds ",seconds);
}
