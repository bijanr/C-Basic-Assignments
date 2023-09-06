#include <stdio.h>

long int factorial(int num)
{
    long int fact=1;
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    return fact;
}
void main()
{
    int number;
    printf("Enter the number : \n");
    scanf("%d",&number);
    float sum=0;
    for(int i=1;i<=number;i++)
    {
        sum=sum+((float)i/((float)factorial(i)));
    }
    printf("The sum of series is : %f\n",sum);
}