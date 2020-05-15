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

    int odd[element],even[element],j=0,k=0;

    //separate odd and even number
     for(int i =0;i<element;++i)
        {
            //for odd number
            if(intager[i]%2!=0)
            {
                odd[j] = intager[i];
                ++j;
            }
            //for even number
            if(intager[i]%2==0)
            {
                even[k] = intager[i];
                ++k;
            }
        }

        //display the result

        printf("The odd number is: ");
        for(int i =0;i<j;++i) printf("%d ",odd[i]);

        printf("\nThe even number is: ");
        for(int i =0;i<k;++i) printf("%d ",even[i]);
}
