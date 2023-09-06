#include <stdio.h>

void getarr(int *arr, int length);

int main()
{
	int lengthA, lengthB, i, j;
	printf("Length of arrays: ");
	scanf("%d %d", &lengthA, &lengthB);
	int arrA[lengthA], arrB[lengthB];
	getarr(arrA, lengthA);
	getarr(arrB, lengthB);
	printf("Common elements:");
	for (i=0; i<lengthA; ++i)
		for (j=0; j<lengthB; ++j)
			if (arrA[i] == arrB[j]) {
				printf(" %d", arrA[i]);
				break;
			}
	putchar('\n');
	return 0;
}

void getarr(int *arr, int length)
{
	int i;
	printf("%d elements: ", length);
	for (i=0; i<length; ++i)
		scanf("%d", arr+i);
}
