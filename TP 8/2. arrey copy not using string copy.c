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

    int copy[element];

    //display original integer
	printf("Your input array is: ");
    for(int i = 0;i<element;++i)
    {
        printf("%d ",intager[i]);
    }

    //display copied integer
    printf("\nThe copied array is: ");
    for(int i = 0;i<element;++i)
    {
        copy[i]=intager[i];
        printf("%d ",copy[i]);
    }

}
