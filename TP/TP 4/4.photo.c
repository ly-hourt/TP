#include<stdio.h>
int main()
{
    float price, photo;
    printf("the number of photocopies : ");
    scanf("%f",&photo);
    if (photo<=30 )
    {
        price=photo*0.05;
    }
    else if (photo>30 && photo<100)
    {
        price=photo*0.025;
    }
    else if (photo>=100)
    {
        price=photo*0.01;
    }
    printf("the total price is : % .3f",price);
}
