#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
	double cx,cy,r;
	printf("ENTER COORDINATES OF CENTRE OF CIRCLE: ");
	scanf("%lf %lf", &cx, &cy);
	printf("ENTER RADIUS OF CIRCLE: ");
	scanf("%lf", &r);
	double x,y;
	printf("ENTER COORDINATES OF POINT TO CHECK: ");
	scanf("%lf %lf", &x, &y);
	
	double val = pow(x-cx,2) + pow(y-cy,2) - pow(r,2);
	if(val == 0)
		printf("POINT LIES ON THE CIRCLE\n");
	else if(val > 0)
		printf("POINT LIES OUTSIDE THE CIRCLE\n");
	else
		printf("POINT LIES INSIDE THE CIRCLE\n");

	return EXIT_SUCCESS;
}