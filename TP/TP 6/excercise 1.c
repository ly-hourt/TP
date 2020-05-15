#include<stdio.h>
#include<math.h>
int main()
{
    //declare variable
    int n ,result=0,i;
    //get input
    printf("Enter a number (greater then 1): ");
    scanf("%d",&n);
    i= n;
    //process
    if(n<=1) //if n is not greater than 1
    {
        printf("The input number : %d is wrong. ",n);
        return 0;
    }
    while (n>1&&i>1)
    {

        result = result+pow(i,3);
        printf("%d^3 + ",i);//checking to result
        i--;
    }
    result ++;
    printf("1^3 = %d",result);
}
