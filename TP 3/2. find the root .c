#include<stdio.h>
#include<math.h>
int main()
{
    float a , b, c;
    float delta,result1,result2;
    printf("Enter your value of a b c : ");
    scanf("%f%f%f",&a,&b,&c);
    delta = pow(b,2)-(4*a*c);
    printf("%f",delta);
    if(delta > 0)
    {
        result1 = (-b + sqrt(delta))/(2*a);
        result2 = (-b - sqrt(delta))/(2*a);
        printf("The roots of equation %f x*x + %f x %f = 0 are %f and %f ",a,b,c,result1,result2);
    }
    else if (delta == 0 )
    {
        result1= -b/(2*a);
        printf("The root of equation %f x*x + %f x %f = 0 is %f",a,b,c,result1);
    }
    else if (delta < 0)
    {
        printf("There is no root for the equation %f x*x + %f x %f = 0 ",a,b,c);
    }
}
