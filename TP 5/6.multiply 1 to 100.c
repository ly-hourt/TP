#include<stdio.h>
int main()
{
    //long long i=1,f=1;
    double i=1,f=1;
    for(i=1;i<=20;i++)
    {
        f = f *i;
    }
    printf("%.0f ",f);
}
