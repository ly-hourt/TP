#include<stdio.h>

void char_test(char str[20],char cha);

int main()
{
    char str[20],cha;
    printf("Enter a string: ");
    gets(str);
    printf("Enter a character: ");
    scanf("%c",&cha);
    char_test(str,cha);
}

void char_test(char str[20],char cha)
{
    int exist=0;
    for(int i=0;i<20;i++)
    {
        if(cha==str[i])
        {
            exist =1;
        }
    }
    if(exist==1)
    {
        printf("The character %c is EXIST in the string \"%s\"",cha,str);
    }
    else if(exist==0)
    {
        printf("The character %c is NOT EXIST in the string \"%s\"",cha,str);
    }
}
