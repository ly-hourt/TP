#include<stdio.h>
int main()
{
    int n = 3 ,flag = 0;
    printf("primary number between 2 to 500 is : \n");
    while (n>2&&n<500)
    {
        for(int i = 2; i <= n/2; ++i)
        {
            if(n%i == 0)
                {
                    flag = 1;
                    break;
                }
        }
        if (flag==0)
        {
            printf("%d ",n);
        }
        if(flag==1)
        {
            flag = 0;
        }
        ++n ;
    }
}
