/*1-2+3-4+5-6....*/
#include <stdio.h>

void main()
{
    int num,sum=0;
    int even_add=0,odd_add=0;
    printf("Enter the n-th term for the series : \n");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        if(i%2==0)
        {
            even_add=even_add-i;
        }
        else
        {
        odd_add+=i;
        }
    }
    sum=odd_add-even_add;
    
    printf("The sum of this series is : %d ",sum);
}