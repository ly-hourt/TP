#include<stdio.h>
#include<math.h>
int main()
{
    //Declare variable here
    int Xa,Xb,Xc,Ya,Yb,Yc;
    double AB,BC,CA,perimeter,HP,surface;
    //Get input
    printf("Please enter the value of Xa :");
    scanf("%d",&Xa);
    printf("Please enter the value of Xb :");
    scanf("%d",&Xb);
    printf("Please enter the value of Xc :");
    scanf("%d",&Xc);
    printf("Please enter the value of Ya :");
    scanf("%d",&Ya);
    printf("Please enter the value of Yb :");
    scanf("%d",&Yb);
    printf("Please enter the value of Yc :");
    scanf("%d",&Yc);
    //Process input
    //Calculate the ledge of AB BC CA
    AB = sqrt(pow(Xa-Xb,2)+pow(Ya-Yb,2));
    BC = sqrt(pow(Xb-Xc,2)+pow(Yb-Yc,2));
    CA = sqrt(pow(Xc-Xa,2)+pow(Yc-Ya,2));
    //Calculate the perimeter
    perimeter = AB + BC + CA;
    /* - calculate the surface(using Heron's Formula)
       - HP stand for Half perimeter   */
    HP = perimeter/2;
    surface = sqrt(HP*(HP-AB)*(HP-BC)*(HP-CA));
    //Display the out put
    printf("The Perimeter of triangle ABC is %lf \n",perimeter);
    printf("The Surface of triangle ABC is %lf ",surface);
}
