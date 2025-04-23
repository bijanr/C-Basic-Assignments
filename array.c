#include <stdio.h>

int main() {
    int n;
    printf("Enter the length of the array: ");
    scanf("%d", &n);

    int arr[n]; // declare an array of length n

    // Loop through the first 2*n numbers and store even numbers
    int count = 0;  // to count how many even numbers we've stored
    for (int i = 1; count < n; i++) {
        if(i % 2 == 0) {  // check if the number is even
            arr[count] = i;  // store the number
            count++;  // increase the counter
        }
    }

    // Print the stored array of even numbers
    printf("The first %d even natural numbers are:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // print the even numbers
    }
    printf("\n");

    return 0;
}
