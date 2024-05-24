#include<stdio.h>
int main()
{
    int mat1[2][2],mat2[2][2],mat3[2][2],i,j;
    printf("For 1st matrix:-\n");
    for(i= 0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
         printf("enter no for %d row %d col: ",i,j);
         scanf("%d",&mat1[i][j]);
        }
    }
    printf("For 2nd matrix:-\n");
    for(i= 0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
         printf("enter no for %d row %d col: ",i,j);
         scanf("%d",&mat2[i][j]);
        }
    }
    printf("sum of 2 matrix:-\n");
    for(i= 0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
        mat3[i][j] = mat1[i][j] + mat2[i][j];
        printf("%d ",mat3[i][j]);
        }
        printf("\n");
    }
}