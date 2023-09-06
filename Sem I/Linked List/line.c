#include <stdio.h>
#include <stdlib.h>
void main()
{
    char *string;
    string=(char *)malloc(sizeof(string));
    printf("Enter the string : \n");
    scanf("%[^;]s",string);
    printf("%s",string);
}