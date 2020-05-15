#include<stdio.h>
int main()
{

    //size of matrix
    int x1,y1,x2,y2;

    //for first matrix
    printf("Enter the size for first matrix: \n");
    printf("row : ");
    scanf("%d",&y1);
    printf("column: ");
    scanf("%d",&x1);
    int m1[y1][x1];

    //for second matrix
    printf("\nEnter the size for second matrix: \n");
    printf("row : ");
    scanf("%d",&y2);
    printf("column: ");
    scanf("%d",&x2);
    int m2[y2][x2];

    //check the size
    if(x1!=x2||y1!=y2)
    {
        printf("\nThere two matrices are not equal because their dimension or order is different\n");

    }
    else if(x1==x2&&y1==y2)
    {
        //get element into the matrix
        int i=0,j=0;

        //first matrix
        for(i=0; i<y1 ;++i)
        {
            for(j=0; j<x1 ;++j )
            {
                printf("Enter the value of m1[%d][%d]= ",i,j);
                scanf("%d",&m1[i][j]);
            }
        }
        printf("\n");
        //second matrix
        for(i=0; i<y2 ;++i)
        {
            for(j=0; j<x2 ;++j )
            {
                printf("Enter the value of m2[%d][%d]= ",i,j);
                scanf("%d",&m2[i][j]);
            }
        }

        //check the element
        int equal = 0;
        for(i=0; i<y1 ;++i)
        {
            for( j=0; j<x1 ;++j )
            {
                if(m1[i][j]!=m2[i][j])
                {
                    ++equal;
                    break;
                }
            }
            if(equal==1) break;
        }
        if(equal==0)
        {
            printf("\nThe 2 matrix is equal\n");
        }
        if(equal==1)
        {
            printf("\nThe 2 matrix is not equal\n");
        }
    }
}
