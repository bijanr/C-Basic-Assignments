#include<stdio.h>

void swap(int *a, int *b) { //a=5 b=10
   *a = *a + *b;  //15=a
   *b = *a - *b;  //b=5
   *a = *a - *b; //a=10
}

int main() {
   int x, y;
   printf("Enter the values of x and y:\n");
   scanf("%d%d", &x, &y);

   printf("Before swapping, x = %d and y = %d\n", x, y);

   swap(&x, &y);

   printf("After swapping, x = %d and y = %d\n", x, y);
   return 0;
}

