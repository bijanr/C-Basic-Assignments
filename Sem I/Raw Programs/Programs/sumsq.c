#include <stdio.h>
int main()
{
    int n,i,a=0;
    printf("Enter the number - \n");
    scanf("%d",&n);
   
    for(i=0;i<=n;i++)

    {
        a+=(i*i);
    }
    printf("\nThe sum of squares is = %d ",a);
    return 0;
}       