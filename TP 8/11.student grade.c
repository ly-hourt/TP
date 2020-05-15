#include<stdio.h>
#include<string.h>
int main()
{
    int student,i=0;

    //get the amount of student
    printf("Enter the number of student: ");
    scanf("%d",&student);
    int math[student],computer[student],french[student],english[student];
    char grade[student][2],name[student][20],gender[student][1],email[student][254];
    int aver[student];
    float gpa[student];

    //get information of each student
    for(i=0;i<student;++i)
    {
        printf("Enter the information of student %d :\n",++i);
        printf("Name: ");
        scanf("%s",&name[i]);
        printf("gender: ");
        scanf("%s",&gender[i]);
        /*printf("\n%s",gender[i]);*/
        printf("Email: ");
        scanf("%s",&email[i]);
        printf("Mathematics score : ");
        scanf("%d",&math[i]);
        printf("Computer score : ");
        scanf("%d",&computer[i]);
        printf("French score : ");
        scanf("%d",&french[i]);
        printf("English score : ");
        scanf("%d",&english[i]);
        /*printf("\n%s %s %s %d %d %d %d",name[i],gender[i],email[i],math[i],computer[i],french[i],english[i]);*/
    }
    //calculate
    for(i=0;i<student;++i)
    {
        //average
        aver[i] = (math[i]+computer[i]+french[i]+english[i])/4;

        //gpa
        gpa[i] = aver[i]/25;

        //grade
        if(gpa[i]>=90&&gpa[i]<=100)
        {
           strcpy(grade[i],"A+");
        }
        else if(gpa[i]>=80&&gpa[i]<90)
        {
            strcpy(grade[i],"A");
        }
        else if(gpa[i]>=70&&gpa[i]<80)
        {
            strcpy(grade[i],"B+");
        }
        else if(gpa[i]>=60&&gpa[i]<70)
        {
            strcpy(grade[i],"B");
        }
        else if(gpa[i]>=50&&gpa[i]<60)
        {
            strcpy(grade[i],"C+");
        }
        else if(gpa[i]>=40&&gpa[i]<50)
        {
           strcpy(grade[i],"C");
        }
        else if(gpa[i]>=30&&gpa[i]<40)
        {
            strcpy(grade[i],"D+");
        }
        else if(gpa[i]>=20&&gpa[i]<30)
        {
            strcpy(grade[i],"D");
        }
        else if(gpa[i]>=0&&gpa[i]<20)
        {
            strcpy(grade[i],"E");
        }
    }
    //display
    printf(" No      Name        Sex             Email           Math  Computer  french  English  Average Grade  gpa \n");
    for(i=0;i<student;++i)
    {
        printf(" %d      %s        %s             %s           %d  %d  %d  %d  %d  %c %d ",++i,name[i],gender[i],email[i],math[i],computer[i],french[i],english[i],aver[i],grade[i],gpa[i]);
    }
}
