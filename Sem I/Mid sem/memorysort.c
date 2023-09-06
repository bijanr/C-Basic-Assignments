#include <stdio.h>
void main()
{
    printf("Enter the length of array : \n");
    int size,loc=1;
    scanf("%d",&size);
    int array[size];
    int *point_array=array;
    printf("Enter the elements of array :\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",(point_array+i));
    }
    int count=point_array[0];
    putchar('\n');
    for(int i=0;i<size;i++)
    {
        if(*(point_array+i)>*point_array)
        {
            *point_array=*(point_array+i);
            count=*point_array;
            loc=i+1;
        }
    }
    printf("Largest : %d  \nLocation : %d",count,loc);
}