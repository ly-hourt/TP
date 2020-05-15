#include<stdio.h>
int main()
{
    int j =1,g=1;
    char name[10][30];
    for(int i = 0;i<10;++i)
    {
        printf("Enter your name %d : ",j);
        scanf("%s",&name[i]);
        ++j;
    }
    printf("\n");
    for(int i = 0;i<10;++i)
    {
        printf("your name %d is : %s\n",g,name[i]);
        ++g;
    }
}
