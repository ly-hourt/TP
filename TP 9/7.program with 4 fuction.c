#include<stdio.h>
#include<stdbool.h>
#include<string.h>
void factorial();
void prime();
void sum();
int main()
{
    while(1)
    {
        int select;
        printf("The program can :\n\n");
        printf("1) Compute factorial of an input number.\n");
        printf("2) Do summation of numbers from 1 to an input number.\n");
        printf("3) Check if an input number is a prime number.\n");
        printf("4) Exit the program.\n\n");
        printf("Enter you selection number :");
        scanf("%d",&select);

        //running programs

        //program 1
        if(select==4)
        {
            printf("\nThank for using this program,the program has stopped.\n");
            break;
        }
        else if(select==1)
        {
            printf("\nYou have chose %d : Compute factorial of an input number.",select);
            factorial();
        }
        else if(select==2)
        {
            printf("\nYou have chose %d : Do summation of numbers from 1 to an input number.",select);
            sum();
        }
        //program 3
        else if(select==3)
        {
            printf("\nYou have chose %d : Check if an input number is a prime number.",select);
            prime();

        }
    }

}

void factorial()
{
    int i,f=1,user;
    printf("\nEnter a positive number(from 0 to 12): ");
    scanf("%d",&user);
    //process data
    if(user==0)
    {
    }
    else if(user>0)
    {
        for(i=1;i<=user;i++)
        {
            f =i*f ;
        }
    }
    printf("\nThe factorial of %d is: %d! = %d\n\n",user,user,f);
}

void prime()
{
    int n ;
    printf("\nEnter a positive number (greater than 1): ");
    scanf("%d",&n);
    //check if the number is valid
    if (n <= 1)
    {
        if(n==1)
            {
                printf("\n1 is neither a prime nor a composite number .\n\n");
            }
        else if (n<1)
            {
                printf("\n%d is not greater than 1 .\n\n",n);
            }
    }

    //running test for prime
    else
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

        //compare test result
        if(flag ==false)
            {
                printf("\nThe number %d is not a prime.\n\n",n);
            }
        else if(flag == true)
            {
                printf("\nThe number %d is a prime.\n\n",n);
            }
    }
}

void sum()
{
    int n,i,f=0;
    printf("\nEnter a number : ");
    scanf("%d",&n);
    printf("\nThe sum from 1 to %d is: ",n);
    for(i=1;i<=n;i++)
    {
        f=i+f;
        if(i==n) break;
        printf("%d+",i);
    }
    printf("%d=%d\n\n",n,f);
}
