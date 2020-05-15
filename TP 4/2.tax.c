#include<stdio.h>
int main()
{
    int age;
    char gender;
    printf("Enter your gender (M for male & F for female ): ");
    scanf("%c",&gender);
    printf("Enter your age : ");
    scanf("%d",&age);
    if (gender == 'M'|| gender == 'm')
    {
        if(age>20)
        {
            printf("you need to pay tax");
        }
        else
        {
            printf("you don not need to pay tax");
        }
    }
    else if (gender == 'F' || gender == 'f')
    {
        if(age >17 && age <36)
        {
            printf("you need to pay tax");
        }
        else
        {
            printf("you don not need to pay tax");
        }
    }
}
