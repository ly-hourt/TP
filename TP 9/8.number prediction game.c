#include<stdio.h>
#include <time.h>
#include <stdlib.h>

int random();
int main()
{
    int answer=random(),guess,fail=0;
    //printf("%d\n",answer);
    printf("Guess a number between 1 to 1000\n\n");
    while(1)
    {
        printf("Enter your answer: ");
        scanf("%d",&guess);
        if(answer==guess)
        {
            if(fail==0)
            {
                printf("\nYeah!!!the answer is %d\nYou've tried only 1 time and get the right answer!!!Unbelievable!!!\nCongratulation!!! \nYou win!!!\nYou are the best!!! \n",answer);
            }
            else if(fail<5)
            {
                printf("\nYes,the answer is %d\nCongratulation!!! \nYou win!!!\nYou have tried %d times until you found the answer.\nNot so bad ha.\n",answer,fail+1);
            }
            else if(fail>=5)
            {
                printf("\nYes,the answer is %d\nCongratulation!!! \nYou win!!!\nYou have tried %d times until you find the answer....\nNot that lucky this time ha...\nWish you good luck next time!!!\n",answer,fail+1);
            }
            break;
        }
        else if(answer<guess)
        {
            printf("Try the smaller number.\n\n");
        }
        else if(answer>guess)
        {
            printf("Try the bigger number.\n\n");
        }
        ++fail;
    }

}

int random()
{
    int a;
    time_t t;


   // Intializes random number generator
   srand((unsigned) time(&t));

       a = rand() % 1000;
       //printf("%d\n",a);
       return a;
}
