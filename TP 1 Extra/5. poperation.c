#include<stdio.h>
int main()
{
    //declare variable
    int mod;
    float num1,num2,sum,subtr,multi,div;
    //get input
    printf("Enter first number : ");
    scanf("%f",&num1);
    printf("Enter second number : ");
    scanf("%f",&num2);
    //process input
    sum = num1+num2;
    subtr = num1 - num2;
    multi = num1*num2;
    div = num1/num2;
    mod = (int)num1%(int)num2;
    //display output
    printf("Summation: %f + %f = %f \n",num1,num2,sum);
    printf("Subtraction: %f - %f = %f \n",num1,num2,subtr);
    printf("Multiplication: %f * %f = %f \n",num1,num2,multi);
    printf("Division: %f / %f = %f \n",num1,num2,div);
    printf("Modulus: %f %% %f = %d \n",num1,num2,mod);

}

