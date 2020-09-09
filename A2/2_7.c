#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a,b,c;
	printf("ENTER THREE NUMBERS: ");
	scanf("%d %d %d", &a,&b,&c);
	double avg = ((double)a + b + c) / 3;
	printf("THEIR AVERAGE IS: %lf\n", avg);
	if(a==b && b==c)
	{
		printf("ALL THREE NUMBERS ARE EQUAL TO THE AVERAGE.\n");
		return EXIT_SUCCESS;
	}
	printf("NUMBER(S) BELOW THE AVERAGE:\n");
	if(a<avg)
		printf("%d\n",a);
	if(b<avg)
		printf("%d\n",b);
	if(c<avg)
		printf("%d\n", c);
	printf("NUMBER(S) ABOVE THE AVERAGE:\n");
	if(a>avg)
		printf("%d\n", a);
	if(b>avg)
		printf("%d\n", b);
	if(c>avg)
		printf("%d\n", c);

	return EXIT_SUCCESS;
}