#include<stdio.h>
int main()
{
    //declare variable
    int second,h,mn,s;
    //get input
    printf("Enter time in second : ");
    scanf("%d",&second);
    //process input
    h = second / 3600;
    mn = second % 3600 / 60;
    s = second-(h*3600+ mn*60);
    //display out put
    printf("It is : %dh %dmn %ds",h,mn,s);
}
