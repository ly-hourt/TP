#include<stdio.h>

//create struck of student
typedef struct
{
    char day[20];
    char mon[20];
    int year;
}DoB;
 typedef struct
 {
     char studentID[20];
     char citizenID[20];
     char name[20];
     float score;
     char gender[10];
     DoB dob;
 }student;



//create 5 students
student s[10];

//declare function
int i=0;
int infor();
void highest();
void lowest();


int main()
{

    infor();
    highest();
    lowest();
}

int infor()
{

    int j=1;

    //getting data
    printf("Enter the information: :\n");
    for(int i = 0 ;i<5;++i)
    {
        printf("Student %d :\n",j);
        /*printf("StudentID(number only): ");
        scanf("%d",&s[i].studentID);
        printf("CitizenID(number only): ");
        scanf("%d",&s[i].citizenID);*/
        printf("Name: ");
        scanf("%s",&s[i].name);

        printf("Gender: ");
        scanf("%s",&s[i].gender);
        printf("Date of birthday :\n");
        printf("Day; ");
        scanf("%s",&s[i].dob.day);
        printf("Month; ");
        scanf("%s",&s[i].dob.mon);
        printf("Year; ");
        scanf("%d",&s[i].dob.year);
        printf("Score: ");
        scanf("%f",&s[i].score);
        printf("\n");
        ++j;
    }
}

void highest()
{
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
    printf("Information of student with the HIGHT score is:");
    printf("\nName: %s",s[highest].name);
    printf("\nGender: %s",s[highest].gender);
    printf("\nDate of Birth: %s \\ %s \\ %d\n",s[highest].dob.day,s[highest].dob.mon,s[highest].dob.year);
    printf("Score: %.2f\n\n",s[highest].score);
}
void lowest()
{
    int i=0;
    int lowest = 0 ;
    float min = s[0].score;

    for(i = 0 ;i<5;++i)
    {


        if(s[i].score<min)
        {
            min = s[i].score;
            lowest = i ;
        }
    }
    printf("Information of student with the LOWEST score is:");
    printf("\nName: %s",s[lowest].name);
    printf("\nGender: %s",s[lowest].gender);
    printf("\nDate of Birth: %s \\ %s \\ %d\n",s[lowest].dob.day,s[lowest].dob.mon,s[lowest].dob.year);
    printf("Score: %.2f\n\n",s[lowest].score);
}
