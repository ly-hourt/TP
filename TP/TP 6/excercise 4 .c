#include<stdio.h>
#include<string.h>
int main()
{
    int num[20],max,element;
    printf("Enter 20 numbers : ");
    for(int i = 0 ;i<20;++i)//scan all the input number into one array
    {
        scanf("%d",&num[i]);
    }
    max = num[1];
    element = sizeof(num)/sizeof(0);//find the length of array
    for(int j=0;j<element;++j)
    {
        if(num[j]>max)//start comparing
            {
                max = num[j];
            }
    }
    printf("The maximum number is %d .",max);//out put the result
}

