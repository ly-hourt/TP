#include<stdio.h>
int main()
{
    int n,i,suit_fibonacci,first=0,second=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("The first %d numbers of suit Fibonacci is : ",n);
    for(i=1;i<=n;++i)
    {
        if (i==1)
        {
            printf("%d ",first);
        }
        else if (i==2)
        {
            printf("%d ",second);
        }
        else if (i>2)
        {
            suit_fibonacci=first + second;
            printf("%d ",suit_fibonacci);
            first = second;
            //printf("first = %d \n",first);
            second = suit_fibonacci;
            //printf("second = %d \n",second);
        }

    }


}
