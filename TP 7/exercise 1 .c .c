#include<stdio.h>
int main()
{
    //1.c
    int num[50],even=2;
    for(int i=0;i<50;i++)
    {
        num[i]=even;
        even+=2;
        printf("%d ",num[i]);
    }
}
