#include<stdio.h>
int main()
{
    //declare variable
    float USD;
    int riels;
    //get input
    printf("How much in US dollars do you want to exchange?: ");
    scanf("%f",&USD);
    //process input
    riels = USD*4100;
    //display out put
    printf("Your exchange amount of %f USD dollars are equal to: %d riels when the exchange rate is 1 USD = 4100 riels",USD,riels);
}
