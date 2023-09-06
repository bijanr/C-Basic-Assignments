#include <stdio.h>
/*
void main()
{
    int max;
    printf("Enter the length of pattern : ");
    scanf("%d",&max);
    char c='*';
    char s=' ';
    for(int i=1;i<=max;i++)
    {   
        for(int j=1;j<=max-i;j++)
        {
            printf("%c",s);
        }
        for(int z=1;z<=i;z++)
        {
        printf("%c",c);
        }
        for(int k=1;k<=i-1;k++)
        printf("%c",c);
        putchar('\n');

    }*/
int main() 
{
   int i, space, rows, k = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i, k = 0) {
      for (space = 1; space <= rows - i; ++space) {
         printf("  ");
      }
      while (k != 2 * i - 1)
      {
        printf("* ");
        ++k;
      }
      printf("\n");
   }
   return 0;
}
 