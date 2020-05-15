#include<stdio.h>
#include<ctype.h>
int main()
{
    int c;
    printf("Enter a character: ");
    c = getchar();
    if (c>64&&c<91 )
    {
        printf("It is a upper-case letter");
    }
    else if (c>96&&c<123 )
    {
        printf("It is a lower-case letter");
    }
    else if (c>47&&c<58)
    {
        printf("It is a number");
    }
    else
    {
        printf("That is not a number nor a letter");
    }
}
