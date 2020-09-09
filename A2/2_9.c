#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	double sal,da,hra,gross;
	printf("ENTER BASIC SALARY: ");
	scanf("%lf", &sal);
	da = 0.6 * sal;
	hra = 0.15 * sal;
	gross = da + hra + sal;
	printf("GROSS SALARY: %lf\n",gross);

	return EXIT_SUCCESS;
}