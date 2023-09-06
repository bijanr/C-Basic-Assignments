#include <stdio.h>
void main()
{
    int num;
    int digit[10];
    printf("Enter the Number : ");
    scanf("%d",&num);
    int add=0,rad,c=0;
    while(num!=0)
    {
        rad=num%10;
        add=(add*10)+rad;
        num/=10;
        c++;
    }
    printf("");
}
