#include<stdio.h>
int main()
{
    int n ,sum = 0;
    printf("Enter a number (any number but 0): ");
    scanf("%d",&n);
    if(n==0)
    {
        printf("you input number is 0 , so the program stopped.");
    }
    while(n!=0)
    {
        sum =sum +n;
        printf("Enter a number (enter 0 to stop program): ");
        scanf("%d",&n);
        if(n==0)
        {
            printf("The summation of all input numbers is : %d",sum);
        }
    }
}
