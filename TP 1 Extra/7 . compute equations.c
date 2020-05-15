#include<stdio.h>
#include<math.h>
//Create Function:
void compute(int a,int b,int c){
    //process
    double i = pow(b,2)-4*a*c;
    double ii = pow(a,2)+pow(b,2)-pow((pow(a,2)+ pow(b,2)),0.1/2);
    double iii = pow(a,2.0/3)-1;
    double iiii = (-b +pow((pow(b,2)-4*a*c),1.0/2))/(2*a);
    //display out put
    printf("When a = %d b = %d and c = %d, each equation produces result as follows: \n i. %f\n ii. %f\n iii. %f\n iv. %f\n ",a,b,c,i,ii,iii,iiii);
    return i,ii,iii,iiii;
}
int main()
{
    //call function
    compute(3,4,1);
    compute(1,3,2);
}
