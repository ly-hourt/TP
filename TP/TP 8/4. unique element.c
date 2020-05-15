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
     int duplicate[10]={0,0,0,0,0,0,0,0,0,0};
        for(int i=0;i<element;++i)
        {
            //create a function to find duplicate number
            switch(intager[i])
            {
                case 0 : duplicate[0]++;
                        break;
                case 1 : duplicate[1]++;
                        break;
                case 2 : duplicate[2]++;
                        break;
                case 3 : duplicate[3]++;
                        break;
                case 4 : duplicate[4]++;
                        break;
                case 5 : duplicate[5]++;
                        break;
                case 6 : duplicate[6]++;
                        break;
                case 7 : duplicate[7]++;
                        break;
                case 8 : duplicate[8]++;
                        break;
                case 9 : duplicate[9]++;
                        break;
            }
        }
        printf("the Unique element is:\n");
        for(int i =0;i<10;++i)
        {
            //find not duplicate , display it out
            if(duplicate[i]==1)
            {
                printf("%d ",i);
            }
        }
    }
