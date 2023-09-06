#include <stdio.h>
void main()
{
    static int stud,paper,xx;
    printf("Number of Students : ");
    scanf("%d",&stud);
    putchar('\n');
    printf("NO. of Papers Attended by Students - ");
    scanf("%d",&paper);
    putchar('\n');
    int a[stud][paper];
    for(int i=0;i<stud;i++)
    {
        for(int j=0;j<paper;j++)
        {
            if(paper==0)
            break;
            else
            {
            printf("\nEnter Marks for Paper %d : ",j+1);
            scanf("%d",&a[i][j]);
            }

        }
    }
    printf("\t\t-DATA SHEET FOR STUDENTS - ");
    putchar('\n');
    for(int i=0;i<stud;i++)
    {
        printf("STUDENT %d - ",i+1);
        putchar('\n');
        for(int j=0;j<paper;j++)
        {
            printf("Marks Obtained by %d\t\t in Paper %d\t\t = %d\t\t",i+1,j+1,a[i][j]);
            putchar('\n');

        }
    }
    



}