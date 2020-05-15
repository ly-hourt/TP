#include<stdio.h>
int main()
{
    int year , month ,date;
    printf("Enter year month day : ");
    scanf("%d%d%d",&year,&month,&date);
    if(year > 0)
    {
        if (month>0&&month<13)
        {
            if(date>0&&date<32)
            {
                if(month == 4|| month==6||month==9||month==11)
                {
                    if(date>30)
                    {
                        printf("date is bigger 31 It is not a valid date ");
                    }
                    else
                    {
                        printf("the date is valid");
                    }
                }
                if(month==2)
                {
                    if(date>29)
                    {
                        printf("date is bigger than 29 it is not a valid date ");
                    }
                    else if(date==29)
                    {
                        if (year%4==0)
                        {
                            if(year%100==0)
                            {
                                if(year%400==0)
                                {
                                    printf("the date is valid");
                                }
                                else
                                {
                                    printf("that is not a leep year It is not a valid date ");
                                }
                            }
                            else
                            {
                                printf("the date is valid");
                            }
                        }
                    }
                    else
                    {
                        printf("the date is valid");
                    }
                }
            }
            else
            {
                printf("It is not a valid date ");
            }
        }
        else
        {
            printf("It is not a valid month ");
        }
    }
    else
    {
        printf("It is not a valid year ");
    }
}
