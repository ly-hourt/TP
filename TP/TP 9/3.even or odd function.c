#include <stdio.h>
void even_odd(int user);

int main()
{
    int user;
    printf("Enter a number: ");
    scanf("%d",&user);
    even_odd(user);
}

void even_odd(int user)
{
    if(user%2==0)
    {
        printf("\n%d is an Even number\n",user);
    }
    if(user%2!=0)
    {
         printf("\n%d is an Odd number\n",user);
    }
}
