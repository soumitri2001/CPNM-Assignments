#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	double l,b,r;

	printf("ENTER THE LENGTH AND BREADTH OF THE RECTANGLE:\n");
	scanf("%lf %lf", &l, &b);
	printf("ENTER THE RADIUS OF CIRCLE:\n");
	scanf("%lf", &r);

	double area_rect = l * b;
	double area_circ = 3.14159 * r * r;
	double peri_rect = 2 * (l + b);
	double circum_circ = 2 * 3.14159 * r;

	printf("AREA OF RECTANGLE: %lf\n", area_rect);
	printf("PERIMETER OF RECTANGLE: %lf\n", peri_rect);
	printf("AREA OF CIRCLE: %lf\n", area_circ);
	printf("CIRCUMFERENCE OF CIRCLE: %lf\n", circum_circ);

	return EXIT_SUCCESS; 	
}