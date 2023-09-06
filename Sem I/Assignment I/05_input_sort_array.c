#include <stdio.h>

#define length 10

int main()
{
	int i, j, k, temp;
	int array[length];
	printf("%d elements: ", length);
	for (i=0; i<length; ++i) {
		scanf("%d", &temp);
		for (j=0; j<i; ++j) {
			if (temp > array[j]) {
				// copying elements to their next memory location
				for (k=i-1; k>=j; --k)
					array[k+1] = array[k];
				break;
			}
		}
		// placing the number at the proper place
		array[j] = temp;
	}
	printf("Array:");
	for (i=0; i<length; ++i)
		printf(" %d", array[i]);
	putchar('\n');
	return 0;
}
