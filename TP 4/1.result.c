#include<stdio.h>
int main()
{
    char c;
    printf("Enter the grade of student : ");
    scanf("%c",&c);
    if(c=='A'||c=='a')
    {
        printf("Excellent");
    }
    else if (c=='B'||c=='b')
    {
        printf("Very good");
    }
    else if (c=='C'||c=='c')
    {
        printf("Good");
    }
    else if (c=='D'||c=='d')
    {
        printf("Fair");
    }
    else if (c=='F'||c=='f')
    {
        printf("Fail");
    }
    else
    {
        printf("Your input is wrong");
    }

}
