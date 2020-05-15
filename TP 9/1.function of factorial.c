#include<stdio.h>
void factorial(int user);

int main()
{
    int user;
    printf("Enter a number : ");
    scanf("%d",&user);
    factorial(user);
}

void factorial(int user)
{   int i,f=1;
    //process data
    for(i=1;i<=user;i++)
    {
        f =i*f ;
    }
    printf("\nThe factorial of %d is: %d\n",user,f);
}
