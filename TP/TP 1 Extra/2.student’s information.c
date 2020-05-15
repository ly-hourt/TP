#include<stdio.h>
#include <Windows.h>
int main()
{
    //declare variable
    SYSTEMTIME str_t;
	GetSystemTime(&str_t);
	char name[20],department[20];
	int year,age;
    //get input
    printf("Enter your name: ");
    scanf("%s",&name);
    printf("Which department are you from?: ");
    scanf("%s",&department);
    printf("Which year were you born?: ");
    scanf("%d",&year);
    //process input
    age = str_t.wYear - year;
    //display out put
    printf(" Hello %s ! Welcome to %s. You are %d years old",name,department,age);
}
