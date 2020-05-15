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

	//display reversed array
	printf("The reverse integer is: ");
	element-=1;
	while(element!=-1)
	{
		printf("%d ",intager[element]);
		element-=1;
	}
}
