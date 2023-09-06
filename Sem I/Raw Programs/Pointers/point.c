#include<stdio.h>
void main()
{
    int jj=70;
    int *y=&jj;
    printf("\nEnter the sax");
    printf("\n%d",jj);
    printf("\n%u",&jj);
    printf("\n%d",y);
    printf("\n%d",*y);
    printf("\n%u",&y);
    printf("\n%u",&jj);
}