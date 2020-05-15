#include<stdio.h>
int main()
{
    int n ,flag=0,i =2 ;
    while(i>=2)
    {
        flag=0;
        printf("Enter a positive number (greater than 1): ");
        scanf("%d",&n);
        for(i = 2; i <= n/2; ++i)
        {
            if(n%i == 0)// condition for not prime number
            {
                flag = 1;
                break;
            }
        }
        if (n <= 1)
        {
            if(n==1)
            {
                printf("1 is neither a prime nor a composite number \n");
            }
            else if (n<1)
            {
                printf("%d is not greater than 1 \n",n);
            }
        }
        else
        {
           if(flag!=0)
            {
                printf("The number %d is not prime\n",n);
            }
            else if(flag == 0)
            {
                printf("The number %d is a prime\n",n);
            }
        }

    }
}
