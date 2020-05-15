#include<stdio.h>
int main()
{
    //declare variable
    float math,infor,coefficient_m,coefficient_i,total_s,total_c,average;
    //get input
    printf("Enter the score of mathematics : ");
    scanf("%f",&math);
    printf("Enter the coefficient of mathematics : ");
    scanf("%f",&coefficient_m);
    printf("Enter the score of informatics : ");
    scanf("%f",&infor);
    printf("Enter the coefficient of informatics : ");
    scanf("%f",&coefficient_i);
    //process input
    total_s = math*coefficient_m+infor*coefficient_i;
    total_c = coefficient_m + coefficient_i;
    average = total_s / total_c;
    //display input
    printf("the average of subjects mathematics and informatics is %f",average);
}
