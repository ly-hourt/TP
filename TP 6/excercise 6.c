#include<stdio.h>
#include<string.h>
int main()
{
    int num[20],min,element;
    printf("Enter 20 numbers : ");
    for(int i = 0 ;i<20;++i)//scan all the input number into one array
    {
        scanf("%d",&num[i]);
    }
    min = num[1];
    element = sizeof(num)/sizeof(0);//find the length of array
    for(int j=0;j<element;++j)//start compare each element
    {
        if(num[j]<min)//start comparing
            {
                min = num[j];
            }
    }
    printf("The minimum number is %d .",min);//out put the result
}

