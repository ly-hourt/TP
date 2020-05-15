#include<stdio.h>

//create structure

typedef struct
{
    int h;
    int m;
    int s;
}t;

//global variable

int choice ;
t time,time1,time2;

//create function

t time_scaner();
void time_display(t time);
int TtS(t time);
void StT(int sec);
void Tcompare(t time1,t time2);

//main function
int main()
{



    while(1)
    {
        //user instruction
        printf("This Program can: ");
        printf("\n1.Displays the time in the format of h: m: s");
        printf("\n2.Convert time to second");
        printf("\n3.Convert second to time");
        printf("\n4.Calculate the difference between 2 times");
        printf("\n\nPress 0 to stop the Program.\n\n");
        printf("Enter your option (1 to 4): ");
        scanf("%d",&choice);
        //function call
        if(choice==0) break;
        else if(choice==1)
        {
            time_scaner();
            time_display(time);
        }
        else if(choice==2)
        {
            time_scaner();
            int sec = TtS(time);
            printf("\n%d: %d: %d is equal to %d second.\n",time.h,time.m,time.s,sec);
        }
        else if(choice==3)
        {
            int sec;
            printf("Enter the seconds: ");
            scanf("%d",&sec);
            printf("%d seconds equal to ",sec);
            StT(sec);
        }
        else if(choice==4)
        {
            printf("\nEnter Time 1:\n");
            time1= time_scaner();
            printf("\nEnter Time 2:\n");
            time2= time_scaner();
            Tcompare(time1,time2);
        }
    }
}


//create function

//0.store time
t time_scaner()
{
    printf("\nEnter the hour: ");
    scanf("%d",&time.h);
    printf("Enter the minute: ");
    scanf("%d",&time.m);
    printf("Enter the second: ");
    scanf("%d",&time.s);
    return time;
}

//1.display time
void time_display(t time)
{
    printf("\nThe time is %d: %d: %d.\n",time.h,time.m,time.s);
}

//2. convert time to second
int TtS(t time)
{
    int sec = time.s;
    if(time.h>0)
    {
        sec = sec + time.h*3600;
    }
    if(time.m>0)
    {
        sec = sec + time.m*60;
    }
    return sec;
}

//3.covert second to time
void StT(int sec)
{
    time.h=0,time.m=0,time.s=0;
    if(sec>3600)
    {
        time.h=sec/3600;
        sec = sec%3600;
    }
    if(sec>60)
    {
        time.m=sec/60;
        sec=sec%60;
    }
    time.s=sec;
    printf("%d: %d: %d",time.h,time.m,time.s);
}

//4.compare 2 time
void Tcompare(t time1,t time2)
{
    int re,sec1=TtS(time1),sec2=TtS(time2);
    if(sec1>=sec2)
    {
        re = sec1 - sec2;

    }
    else if(sec2>=sec1)
    {
        re = sec2-sec1;
    }
    printf("\nThe Different between these two time is ");
    StT(re);
    printf("\n");
}
