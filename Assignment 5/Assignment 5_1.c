#include <stdio.h>
#include <math.h>


float length(float x1, float y1, float x2, float y2)
{
    float len = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
    return len;
}

float area(float x1, float y1, float x2, float y2, float x3, float y3)
{
    float l1, l2, l3, ar, s;        // s == semi peremeter
    l1 = length(x1, y1, x2, y2);
    l2 = length(x1, y1, x3, y3);
    l3 = length(x2, y2, x3, y3);

    s = (l1+l2+l3)/2;
    ar = sqrt((s)*(s-l1)*(s-l2)*(s-l3));
    return ar;
}

int is_inside_triangle(float x1, float y1, float x2, float y2, float x3, float y3, float x, float y)
{
    float area1, area2;
    area1 = area(x1, y1, x2, y2, x3, y3);
    area2 = area(x1, y1, x2, y2, x, y) + area(x1, y1, x3, y3, x, y) + area(x2, y2, x3, y3, x, y);

    if (area1 == area2)
        return 1;
    else
        return 0;
}

int main()
{
    float x1, y1, x2, y2, x3, y3, x, y;
    float l1, l2, l3;
    float ar;
    int check;

    printf("Write coordinates of the first vertex: \n");
    scanf("%f %f", &x1, &y1);
    printf("Write coordinates of the second vertex: \n");
    scanf("%f %f", &x2, &y2);
    printf("Write coordinates of the third vertex: \n");
    scanf("%f %f", &x3, &y3);

    l1 = length(x1, y1, x2, y2);
    l2 = length(x1, y1, x3, y3);
    l3 = length(x2, y2, x3, y3);

    printf ("Length of the three sides are: %f %f %f\n", l1, l2, l3);

    ar = area(x1, y1, x2, y2, x3, y3);
    printf ("Area of the triangle formed by the three vertices is: %f\n", ar);

    printf ("\n\nEnter the coordinates of the point that we want to check whether it is inside the triangle or not: \n");
    scanf("%f %f", &x, &y);

    check = is_inside_triangle(x1,y1, x2,y2, x3,y3, x,y);
    if (check==1)
        printf ("The point is inside the triangle\n");
    else
        printf("The point is not inside the triangle\n");
}
