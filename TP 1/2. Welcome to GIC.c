#include<stdio.h>>
int main()
{
    //Declare variable here
    char surname[20],name[20];
    //Get input
    printf("Please enter your surname : ");
    scanf("%s",&surname);
    printf("Please enter your name : ");
    scanf("%s",&name);
    //Process input and Display the out put
    printf("Welcome to GIC %s %s.",surname,name);
}
