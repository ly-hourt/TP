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

    int max = intager[0],second;
     for(int i =1;i<element;++i)
        {
            if(intager[i]>max)
            {
                second = max;
                max = intager[i];
            }
            if(intager[i]>second&&max>intager[i]) second = intager[i];
        }
        printf("The second biggest element is: %d",second);
}
