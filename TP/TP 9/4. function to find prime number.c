#include<stdio.h>
#include<stdbool.h>
bool prime(int n);
int main()
{
    int n ;

        printf("Enter a positive number (greater than 1): ");
        scanf("%d",&n);

        //check if the number is valid
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

        //running test for prime
        else
        {
            bool res = prime(n);
            if(res==false)
                {
                    printf("The number %d is not prime\n",n);
                }
            else if(res == true)
                {
                    printf("The number %d is a prime\n",n);
                }
        }

}

bool prime(int n)
{
    bool flag=true;
     for(int i = 2; i <= n/2; ++i)
        {
            if(n%i == 0)// condition for not prime number
            {
                flag = false;
                break;
            }
        }
        return flag;
}
