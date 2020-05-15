#include<stdio.h>
int main()
{
    int n,i,f=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=i+f;
    }
    printf("%d\n",f);
}
