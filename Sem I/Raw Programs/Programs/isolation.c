#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    int add,rem,rad;
    int n;
    int c=0;
    printf("Enter the number ");
    scanf("%d",&n);
    int nalt=n;
    while(nalt!=0)
    {
        rad=nalt%10;
        add=(add*10)+rad;
        nalt/=10;
        c++;
    }
    printf("The number of characters are %d\n",c);

    int r;
    int m;
    int cd=c-1;
    while(c!=0)
    {
        double cx=(double)cd;
       double px=pow(10,cd);
       int p=(int)px; 
       m=n/p;
       printf("%d ",m);
       cd--;
       n=n%p;
        

    }
   
}
