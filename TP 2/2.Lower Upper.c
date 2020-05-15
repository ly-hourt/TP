#include<stdio.h>
#include<string.h>
int main()
{
    char W[20];
    printf("Enter your word : ");
    scanf("%s",&W);
    printf(strupr(W));
    printf(",");
    printf(strlwr(W));
}
