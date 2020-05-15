#include<stdio.h>
int main()
{
    //Declare variable
    char first_product[20],second_product[20];
    int amount1,amount2;
    float price1,price2,result1,result2,result;
    // Get input
    printf("Enter the name of the first product : " );
    scanf("%s",&first_product);
    printf("Enter the price per unit ($) : " );
    scanf("%f",&price1);
    printf("Enter the amount of the product : " );
    scanf("%d",&amount1);
    printf("Enter the name of the second product : " );
    scanf("%s",&second_product);
    printf("Enter the price per unit ($) : " );
    scanf("%f",&price2);
    printf("Enter the amount of the product : " );
    scanf("%d",&amount2);
    //Process input
    result1 = price1 * amount1;
    result2 = price2 * amount2;
    result = result1 + result2;
    //Display the output
    printf("No  Products    Price per unit ($)    Amount   Price ($)\n");
    printf("1      %s             %f               %d         %f\n",first_product,price1,amount1,result1);
    printf("2      %s             %f              %d         %f\n",second_product,price2,amount2,result2);
    printf("                                    Total         %f",result);
}
