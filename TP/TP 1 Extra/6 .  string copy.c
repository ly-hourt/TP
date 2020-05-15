#include<stdio.h>
#include<string.h>
int main()
{
    //declare variable
    char str1[20],str2[20];
    //get input
    printf("Enter a first string: ");
    scanf("%s",str1);
    printf("Enter a second string: ");
    scanf("%s",str2);
    //process input
    strcpy(str1,str2);
    strupr(str1);
    //display output
    printf("The first string is : %s\n",str1);
    printf("The second string is : %s",str2);
}
