#include<stdio.h>
int main()
{
    //size of matrix
    int x1,y1;

    printf("Enter the size for first matrix: \n");
    printf("row : ");
    scanf("%d",&y1);
    printf("column: ");
    scanf("%d",&x1);
    int m1[y1][x1];

    //check for square matrix
    if(y1!=x1)
    {
        printf("\nThe matrix is not identity because it's not a square matrix\n");
    }
    else if(y1==x1)
    {
        //get element into the matrix

        int i=0,j=0;
        for(i=0; i<y1 ;++i)
        {
            for(j=0; j<x1 ;++j )
            {
                printf("Enter the value of m1[%d][%d]= ",i,j);
                scanf("%d",&m1[i][j]);
            }
        }
        //check for identity
        int identity=0;
        for(i=0; i<y1 ;++i)
        {
            for(j=0; j<x1 ;++j )
            {
                if(i==j)
                {
                    if(m1[i][j]!=1)
                    {
                        ++identity;
                        break;
                    }
                }
                if(i!=j)
                {
                    if(m1[i][j]!=0)
                    {
                        ++identity;
                        break;
                    }
                }
            }
            if(identity==1) break;
        }

        //display result
        if(identity==0)
        {
            printf("\nThe matrix is identity\n");
        }
        if(identity!=0)
        {
            printf("\nThe matrix is not identity\n");
        }
    }
}
