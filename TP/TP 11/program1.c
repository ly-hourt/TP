#include<stdio.h>
struct DOB{
    int day,month,year;
};
struct student{
    char name[100],ID[100];
    struct DOB dob;
};
typedef struct student student;

//structure to add data into file
void StoreData(student x[100],int y){
    FILE *fp;
    fp=fopen("test.txt","w");
    for(int i=0;i<y;i++){
        fprintf(fp,"%s %s %d %d %d\n",x[i].name,x[i].ID,x[i].dob.day,x[i].dob.month,x[i].dob.year);
    }
    fclose(fp);
}
int main(){
    student p[100];
    int n=5;
    char var[10][100];

    //Ask user to input information;
    for(int i=0;i<n;i++){
        printf("Enter information of student:\n");
        printf("\tName: "); scanf("%s",&p[i].name);
        printf("\tID: "); scanf("%s",&p[i].ID);
        printf("\tDate of birth dd/mm/yy: \n");
        printf("\t\tdd: "); scanf("%d",&p[i].dob.day);
        printf("\t\tmm: "); scanf("%d",&p[i].dob.month);
        printf("\t\tyy: "); scanf("%d",&p[i].dob.year);
    }
    //Store Data
    StoreData(p,n);
}
