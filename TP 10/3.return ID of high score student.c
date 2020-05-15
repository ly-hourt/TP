#include<stdio.h>

//create struck of student
 struct student
 {
     int studentID;
     int citizenID;
     char name[20];
     float score;
     char gender[10];
 };

 //make it shorter
typedef struct student student;


//declare function
int infor();

//main program
int main()
{
   int ID = infor();
   printf("ID of student with highest score is: %d\n",ID);
}

//detail of function

int infor()
{
    //create 5 student
    student s[5];
    int j=1;

    //getting data
    printf("Enter the information: :\n");
    for(int i = 0 ;i<5;++i)
    {
        printf("Student %d :\n",j);
        printf("StudentID (number only) : ");
        scanf("%d",&s[i].studentID);
       /* printf("CitizenID : ");
        scanf("%d",&s[i].citizenID);
        printf("Name: ");
        scanf("%s",&s[i].name);*/
        printf("Score: ");
        scanf("%f",&s[i].score);
       /* printf("Gender: ");
        scanf("%s",&s[i].gender);*/
        printf("\n");
        ++j;
    }

    //compare data
    int i=0,ID=s[0].studentID;
    float max= s[0].score;

    for(int i = 0 ;i<5;++i)
    {

        if(s[i].score>max)
        {
            max=s[i].score;
            ID=s[i].studentID;
        }
    }
    //return result
    return ID;
}
