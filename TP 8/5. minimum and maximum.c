#include <stdio.h>
int main()
{
    //get the element form user
	int element,i=0;
	printf("Enter a number of element: ");
	scanf("%d",&element);

	//get array element from user,integer only
	int intager[element];
	printf("Enter the integers: ");
    for(int i = 0;i<element;++i)
    {
        scanf("%d",&intager[i]);
    }

    //start exercise

    //create a function to find maximum
    int max = intager[0];
     for(int i =1;i<element;++i)
        {
            if(intager[i]>max)
            {
                max = intager[i];
            }
        }
        printf("The maximum element is: %d\n",max);

    //create a function to find minimum
    int min = intager[0];
     for(int i =1;i<element;++i)
        {
            if(intager[i]<min)
            {
                min = intager[i];
            }
        }
        printf("The minimum element is: %d",min);
}
