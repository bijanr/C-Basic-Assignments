#include <stdio.h>
int age;
void bike_insurance()
{
    printf("Enter the age : \n");
    scanf("%d",&age);
}
void insurance_calc()
{
    double tax=0.0;
    double insurance=500.00;
    double sum=0.0;
    int half_year=age/6;
    printf("Number of months : %d",half_year);
    if(half_year<=2)
    printf("The insurance is : %lf ",insurance);
    else if(half_year>2)
    {
        while(half_year>2)
        {
            tax=insurance*(5.0/100.0);
            insurance=insurance+tax;
            half_year--;
        }
        printf("The insurance is : %lf ",insurance);
    }
}
void main()
{
    bike_insurance();
    insurance_calc();
}