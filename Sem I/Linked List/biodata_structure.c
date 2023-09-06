#include <stdio.h>

typedef struct biodata
{
    char *name;
    float user_id;
    char *semester;
    float cgpa;
}biodata;

void main()
{   
    biodata stu_1={"Bijan Roy",306356,"Sem 1",9.63};
    long int user=(long int)stu_1.user_id;
    printf("%ld",user);
    /*stu_1.user_id=0332020;
    stu_2.user_id=0332023;
    stu_1.semester="Semester 1";
    stu_2.semester="Semester 1";
    stu_1.cgpa=8.7562;
    stu_2.cgpa=7.6352;
    printf("%s\n",stu_1.name);
    printf("%ld\n",stu_1.user_id);
    printf("%s\n",stu_1.semester);
    printf("%f\n",stu_1.cgpa);
    putchar('\n');
    printf("%s\n",stu_2.name);
    printf("%ld\n",stu_2.user_id);
    printf("%s\n",stu_2.semester);
    printf("%f\n",stu_2.cgpa);              */
    
}