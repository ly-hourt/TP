#include<stdio.h>
#include<string.h>
int main()
{
   char W[20];
   int a = strlen(W);
    printf("Enter your word : ");
    scanf("%s",&W);
    printf("In word \"%s\",the first character is\'%c\' and the last character is \'%c\'",W,W[0],W[a]);
}
