#include<stdio.h>
int main()
{
    int num1 ,num2 ,num3,num4,num5,num6,num7;
    printf("Enter your the 7 numbers : ");
    scanf("%d%d%d%d%d%d%d",&num1 ,&num2 ,&num3,&num4,&num5,&num6,&num7);
    if(num1<num2&&num1<num3&&num1<num4&&num1<num5&&num1<num6&&num1<num7)
    {
        printf("The biggest number is : %d.",num1);
    }
    else if(num2<num1&&num2<num3&&num2<num4&&num2<num5&&num2<num6&&num2<num7)
    {
        printf("The biggest number is : %d.",num2);
    }
    else if(num3<num1&&num3<num2&&num4<num4&&num3<num5&&num3<num6&&num3<num7)
    {
        printf("The biggest number is : %d.",num3);
    }
    else if(num4<num1&&num4<num3&&num4<num2&&num4<num5&&num4<num6&&num4<num7)
    {
        printf("The biggest number is : %d.",num4);
    }
    else if(num5<num1&&num5<num3&&num5<num4&&num5<num2&&num5<num6&&num5<num7)
    {
        printf("The biggest number is : %d.",num5);
    }
    else if(num6<num1&&num6<num3&&num6<num4&&num6<num5&&num6<num2&&num6<num7)
    {
        printf("The biggest number is : %d.",num6);
    }
    else if(num7<num1&&num7<num3&&num7<num4&&num7<num5&&num7<num6&&num7<num2)
    {
        printf("The biggest number is : %d.",num7);
    }
    else
    {
        printf("The input : %d %d %d %d %d %d %d is error  ",num1 ,num2 ,num3,num4,num5,num6,num7);
    }
}
