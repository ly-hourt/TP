#include<stdio.h>
int main()
{
    int score;
    printf("Enter the score : ");
    scanf("%d",&score);
    if (score >= 90)
    {
        printf("You got grade A");
    }
    else if (score>= 80)
    {
        printf("You got grade B");
    }
    else if (score>= 70)
    {
        printf("You got grade C");
    }
    else if(score>= 60)
    {
        printf("You got grade D");
    }
    else if (score>= 50)
    {
        printf("You got grade E");
    }
    else if(score <50 && score >0)
    {
        printf("You got grade F");
    }
    else
    {
        printf("Your input is wrong .");
    }

}

