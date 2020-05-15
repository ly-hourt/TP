#include<stdio.h>
int main()
{
    int first,second,third;
    printf("Enter Three different numbers : ");
    scanf("%d%d%d",&first,&second,&third);
    if (first>second&&first>third)
    {
        printf("The biggest number is : %d.",first);
    }
    else if (second>first&&second>third)
    {
        printf("The biggest number is : %d.",second);
    }
    else if (third>first&&third>second)
    {
        printf("The biggest number is : %d.",third);
    }
    else
    {
        printf("There are repeated number .");
    }
}
