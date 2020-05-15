#include<stdio.h>
int main()
{
    //declare variable
    float num,square,cube;
    //get input
    printf("Enter a number: ");
    scanf("%f",&num);
    //process input
    square = pow(num,2);
    cube = pow(num,3);
    //display output
    printf("The square of %f is %f and the cube of %f is %f.",num,square,num,cube);

}
