#include<stdio.h>
#include<string.h>
int main()
{
    char W[20];
    printf("Enter your word : ");
    scanf("%s",&W);
    printf(" the length of the word \"%s\" is %d ",W,strlen(W));
}
