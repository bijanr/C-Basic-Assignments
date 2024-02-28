#include <stdio.h>

int main()
{
    int var[] = {1,2,3};
    int *ptr = var;
    printf("%d",*ptr+1);
    return 0;
}