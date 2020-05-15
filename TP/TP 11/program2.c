#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct DOB{
    int day,month,year;
};
struct student{
    char name[100],ID[100];
    struct DOB dob;
};
typedef struct student stu;
stu stuList[100];

int main(){
    FILE *ad;
    char var[5][100];

    //Display data from file "test.txt"
    ad=fopen("test.txt","r");
        for(int i=0;i<5;i++){
            fscanf(ad,"%s %s %s %s %s",var[0],var[1],var[2],var[3],var[4]);
            strcpy(stuList[i].name,var[0]); strcpy(stuList[i].ID,var[1]);
            stuList[i].dob.day=atoi(var[2]); stuList[i].dob.month=atoi(var[3]); stuList[i].dob.year=atoi(var[4]);
            printf("Name: %s ID: %s DOB: %d/%d/%d\n",stuList[i].name,stuList[i].ID,stuList[i].dob.day,stuList[i].dob.month,stuList[i].dob.year);
        }
    fclose(ad);


    //Add 3 more data into file "test.txt"
        for(int i=0;i<3;i++){
            printf("Enter information of student:\n");
            printf("\tName: "); scanf("%s",&stuList[i].name);
            printf("\tID: "); scanf("%s",&stuList[i].ID);
            printf("\tDate of birth dd/mm/yy: \n");
            printf("\t\tdd: "); scanf("%d",&stuList[i].dob.day);
            printf("\t\tmm: "); scanf("%d",&stuList[i].dob.month);
            printf("\t\tyy: "); scanf("%d",&stuList[i].dob.year);
        }
    ad=fopen("test.txt","a");
        for(int i=0;i<3;i++){
            fprintf(ad,"%s %s %d %d %d\n",stuList[i].name,stuList[i].ID,stuList[i].dob.day,stuList[i].dob.month,stuList[i].dob.year);
        }
    fclose(ad);
}
