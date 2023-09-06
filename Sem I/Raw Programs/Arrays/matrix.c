#include <stdio.h>


void Matrix(int n)
{
    int mat[n][n];
    for(int i=1;i<=n;i++)
    {   
        for(int j=1;j<=n;j++)
        {
            printf("Element %d %d : ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
}


void main()
{
    int inp;
    printf("enter the n : \n : ");
    scanf("%d",&inp);
    Matrix(inp);

}
