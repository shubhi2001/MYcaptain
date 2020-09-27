#include<stdio.h>
int main()
{
    printf("enter the elements of the matrix: \n");
    int arr[3][3] = {0};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("the element arr[%d][%d]",i,j);
            scanf("%d",arr[i][j]);
            printf("\n");
        }
    }
    printf("the matrix is :\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d   ",arr[i][j]);

        }
    }

    return 0;
}
