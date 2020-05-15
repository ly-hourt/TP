#include<stdio.h>

//create struck of student
 struct student
 {
     int studentID;
     int citizenID;
     char name[20];
     int score;
     char gender[10];
 };

typedef struct student student;

//declare function
void infor();

int main()
{
    infor();
}

void infor()
{
    //create 5 student
    student s[5];
    int j=1;
    //getting data
    printf("Enter the information: :\n");
    for(int i = 0 ;i<5;++i)
    {
        printf("Student %d :\n",j);
        printf("StudentID(number only) : ");
        scanf("%d",&s[i].studentID);
        printf("CitizenID(number only) : ");
        scanf("%d",&s[i].citizenID);
        printf("Name: ");
        scanf("%s",&s[i].name);
        printf("Score: ");
        scanf("%d",&s[i].score);
        printf("Gender: ");
        scanf("%s",&s[i].gender);
        printf("\n");
        ++j;
    }

    j=1;

    //display result
    for(int i = 0 ;i<5;++i)
    {
        printf("The information of Student %d :",j);
        printf("\n\nStudentID: %d",s[i].studentID);
        printf("\nCitizenID: %d",s[i].citizenID);
        printf("\nName: %s",s[i].name);
        printf("\nScore: %d",s[i].score);
        printf("\nGender: %s\n\n",s[i].gender);
        ++j;
    }
}
