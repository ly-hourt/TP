#include<stdio.h>
int main()
{
    //Declare variable
    float price,result,tax;
    // Get input
    printf("Enter a price ($): ");
    scanf("%f",&price);
    //Process input
    tax = price*3/100;
    result = price + tax;
    //display output
    printf("Price without tax is %f USD dollars and price including tax is %f USD dollars. ",price,result);
}
