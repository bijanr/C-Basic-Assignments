# include <stdio.h>
int main()
{
    int quan, item;
    char name[20];
    double price, discount=0, bill=0, tot_bill;
    printf("Enter the no of item purchased:");
    scanf("%d", &item);
    for(int i=1; i<=item; i++)
    {
        printf("Enter the name, quantity & price of the item %d:", i);
        scanf("%s %d %lf", &name,&quan,&price);
        bill+=(quan*price);
    }
    tot_bill=bill-discount;
    printf("The total bill is %lf",tot_bill);
    return -1;
}