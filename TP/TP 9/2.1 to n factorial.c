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
    printf("\nThe factorial value from 1 to %d is: ",user);
    for(i=1;i<=user;i++)
    {
        f =i*f ;
        printf("%d ",f);
        if(i==user)
        {
            printf("\n");
        }
    }

}
