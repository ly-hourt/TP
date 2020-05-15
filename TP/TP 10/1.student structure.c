#include<stdio.h>

 struct student
 {
     int studentID;
     int citizenID;
     char name[20];
     int score;
     char gender;
 };

typedef struct student student;

int main()
{
    student s[5];
}
