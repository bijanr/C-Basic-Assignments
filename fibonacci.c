#include <stdio.h>

int main()  {
    int limit;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    int arr[limit];
    arr[0] = 0;
    arr[1] = 1;
    printf("%d %d ", arr[0], arr[1]);
    // for(int i = 0; i < limit - 2; i++)  {
    //     int c = a + b;
    //     printf("%d ", c);
    //     a = b;
    //     b = c;
    // }
    for(int i = 2; i < limit; i++){
        arr[i] = arr[i - 1] + arr[i - 2];
        printf("%d ", arr[i]);
    }
    return 0;
}