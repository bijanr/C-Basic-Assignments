#include <stdio.h>


int main()
{
	float num1, num2;
	char op;
	printf("Enter Two Numbers : ");
	scanf("%f %f", &num1, &num2);
	getchar();
	printf("Select Operator : ");
	switch (op = getchar()) {
		case '+':
			printf("%f + %f = %f\n", num1, num2, (int)num1+num2);
			break;
		case '-':
			printf("%f - %f = %f\n", num1, num2, (int)num1-num2);
			break;
		case '*':
			printf("%f * %f = %f\n", num1, num2, (int)num1*num2);
			break;
		case '/':
			printf("%f / %f = %f\n", num1, num2, num1/num2);
			break;
		default:
			printf("Unknown operator: %c\n", op);
			break;
	}
	return 0;
}
