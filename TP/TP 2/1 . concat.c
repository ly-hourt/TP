#include<stdio.h>
#include<string.h>
int main()
{
    char SN[20],CN[20],W[20]="Welcome ",T[20]=" to the course ";
    printf("Enter your name : ");
    scanf("%s",&SN);
    printf("Enter your course name : ");
    scanf("%s",&CN);
    strcat(W,SN);
    strcat(T,CN);
    printf(W);
    printf(T);

}
