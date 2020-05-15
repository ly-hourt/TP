#include<stdio.h>
int main()
{
    //declare variable
    int i,n ,sum = 0;
    //get input
    while(sum==0)
    {

        printf("Enter a positive integer (greater than 1): ");
        scanf("%d", &n);
        for(i = 1; i <= n/2; ++i)
        {
            if(n%i == 0)
            {
                sum = sum + i;
            }
        }
        if(n<=1)
        {
            if(n==1)
            {
                printf("1 is neither a perfect number nor a composite number \n");
            }
            else if (n<1)
            {
                printf("%d is not greater than 1 \n",n);
            }
        }
        else
        {
          if (sum == n)
            {
                printf("%d is a prefect number\n",n);
            }
            else if (sum != n)
            {
                printf("%d is NOT a perfect number\n",n);
            }
        }

        sum = 0;
    }

}
