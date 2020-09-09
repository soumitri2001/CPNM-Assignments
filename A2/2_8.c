#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	double fh,cl;
	printf("ENTER TEMPERATURE IN FAHRENHEIT: ");
	scanf("%lf", &fh);
	cl = (5 * (fh - 32))/9;
	printf("TEMPERATURE IN CELSIUS IS %lf DEGREES\n", cl);

	return EXIT_SUCCESS;
}