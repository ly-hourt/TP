#include<stdio.h>
int main()
{
    int j=1,average,sum=0,score[20];
    for(int i=0;i<20;++i)
    {   printf("Enter the scores %d: ",j);
        scanf("%d",&score[i]);
        sum=sum+score[i];
        ++j;
    }
    average=sum/20;
    printf("\n");
    for(int i = 0;i<20;++i)
    {
        if(score[i]>average) printf("%d ",score[i]);
    }
}
