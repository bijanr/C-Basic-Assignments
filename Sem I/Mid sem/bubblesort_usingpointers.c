#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *array;
    int limit,temp=0;
    printf("Enter the length of array : \n");
    scanf("%d",&limit);
    array=(int *)malloc(limit*sizeof(int));
    printf("Enter the array :\n");
    for(int i=0;i<limit;i++)
    {
        printf("Element %d ",i+1);
        scanf("%d",(array+i));
    }

    for(int i=0;i<limit;i++)
    {
        for(int j=0;j<limit-i-1;j++)
        {
            if(*(array+j)>*(array+(j+1)))
            {
                temp=*(array+j);
                *(array+j)=*(array+(j+1));
                *(array+(j+1))=temp;
            }
        }
    }
    printf("The elemnts after sorting are : \n");
    for(int i=0;i<limit;i++)
    {
        printf("%d ",*(array+i));
    }
}
