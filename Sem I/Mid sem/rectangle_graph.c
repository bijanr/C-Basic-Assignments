#include <stdio.h>
#include <math.h>

typedef struct point_coordinate{
    float x,y;
}point;

typedef struct rect {
    point upper_left,lower_right;
}rectangle;


float area(rectangle r)
{
    float breadth,length;
    breadth=fabs(r.upper_left.x-r.lower_right.x);
    length=fabs(r.upper_left.y-r.lower_right.y);
    float area=breadth*length;
    return area;
}
int main()
{
    rectangle r;
    printf("Enter the coordinate of UPPER LEFT position(x1,y1): \n");
    scanf("%f %f",&r.upper_left.x,&r.upper_left.y);
    printf("Enter the coordinate of LOWER RIGHT position(x2,y2): \n");
    scanf("%f %f",&r.lower_right.x,&r.lower_right.y);
    float area_rect=area(r);
    if(area_rect>0)
    printf("The area of rectangle is : %f\n",area_rect);
    else
    printf("The area of rectangle is : %f\n",area_rect+(2*area_rect));  
    return 0;
}