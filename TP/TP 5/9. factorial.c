#include<stdio.h>
int main()
{
    int user,i,f=1;
    printf("Enter a number : ");
    scanf("%d",&user);
    //process data
    for(i=1;i<=user;i++)
    {
        f =i*f ;
    }
    printf("%d\n",f);
}
