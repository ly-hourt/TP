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
    for(int i = 0;i<element;++i) scanf("%d",&intager[i]);

    //start exercise

    int min = intager[0],second;
     for(int i =1;i<element;++i)
        {
            if(intager[i]<min)
            {
                second = min;
                min = intager[i];
            }
            if(intager[i]<second&&min<intager[i]) second = intager[i];
        }
        printf("The second smallest element is: %d",second);
}
