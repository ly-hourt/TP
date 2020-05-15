#include<stdio.h>
void factorial(int n);

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    factorial(n);
}

void factorial(int n)
{   int i,f=1,sigma=0;
    //process data
    printf("\nThe sigma of %d!/%d is: ",n,n);
    for(i=1;i<=n;i++)
    {
        f =i*f ;
        sigma = sigma + f/i;
    }
    printf("%d\n",sigma);
}
