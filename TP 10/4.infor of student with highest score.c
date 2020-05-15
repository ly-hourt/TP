#include<stdio.h>

//create struck of student
 typedef struct student
 {
     int studentID;
     int citizenID;
     char name[20];
     float score;
     char gender[10];
 }student;



//create 5 students
student s[5];

//declare function
int infor();
void display(int highest);


int main()
{
   int highest = infor();
   display(highest);
}

//detail of function

int infor()
{

    int j=1;

    //getting data
    printf("Enter the information: :\n");
    for(int i = 0 ;i<5;++i)
    {
        printf("Student %d :\n",j);
        printf("StudentID(number only) : ");
        scanf("%d",&s[i].studentID);
        printf("CitizenID (number only): ");
        scanf("%d",&s[i].citizenID);
        printf("Name: ");
        scanf("%s",&s[i].name);
        printf("Gender: ");
        scanf("%s",&s[i].gender);
        printf("Score: ");
        scanf("%f",&s[i].score);
        printf("\n");
        ++j;
    }


    //compare data
    int i=0,highest = 0 ;
    float max = s[0].score;

    for(int i = 0 ;i<5;++i)
    {


        if(s[i].score>max)
        {
            max = s[i].score;
            highest = i ;
        }
    }

    return highest; //return result
}

void display(int highest)
{
    printf("Information of student with the highest score is:");
    printf("\n\nStudentID: %d",s[highest].studentID);
    printf("\nCitizenID: %d",s[highest].citizenID);
    printf("\nName: %s",s[highest].name);
    printf("\nGender: %s",s[highest].gender);
    printf("\nScore: %.2f\n\n",s[highest].score);
}
