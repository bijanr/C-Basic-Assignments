#include <stdio.h>

#define MAX_CUST_NUM_LEN 20

int getString(char *str, int maxLength);

int main() {
    char custNum[MAX_CUST_NUM_LEN];
    double prevReading, newReading, gasUsed, totalBill = 0.0;
    int numInputs, i;

    printf("Number of inputs: ");
    scanf("%d", &numInputs);
    getchar();

    for (i = 0; i < numInputs; ++i) {
        printf("\nCustomer number: ");
        getString(custNum, MAX_CUST_NUM_LEN);

        printf("Previous meter reading: ");
        scanf("%lf", &prevReading);

        printf("New meter reading: ");
        scanf("%lf", &newReading);
        getchar();

        gasUsed = newReading - prevReading;

        if (gasUsed > 8350)
            totalBill = 1437.5 + (gasUsed - 8350) * 0.08;
        else if (gasUsed > 5850)
            totalBill = 712.5 + (gasUsed - 5850) * 0.09;
        else if (gasUsed > 3350)
            totalBill = 437.5 + (gasUsed - 3350) * 0.11;
        else if (gasUsed > 350)
            totalBill = 77.5 + (gasUsed - 350) * 0.12;
        else if (gasUsed > 50)
            totalBill = 40 + (gasUsed - 50) * 0.125;
        else if (gasUsed > 0)
            totalBill = 40;

        printf("\nCustomer number: %s\n", custNum);
        printf("Previous reading: %.2lf\n", prevReading);
        printf("New reading: %.2lf\n", newReading);
        printf("Gas used: %.2lf\n", gasUsed);
        printf("Total bill: %.2lf\n", totalBill);
    }

    return 0;
}

int getString(char *str, int maxLength) {
    char ch;
    int length = 0;

    while ((ch = getchar()) != '\n' && length < maxLength - 1) {
        *str = ch;
        ++str;
        ++length;
    }

    *str = '\0';
    return length;
}
