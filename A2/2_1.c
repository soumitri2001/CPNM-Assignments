#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a,b;
	printf("ENTER TWO INTEGER VALUES a AND b:\n");
	scanf("%d %d", &a, &b);
	printf("INITIAL VALUE OF a: %d \nINITIAL VALUE OF b: %d\n", a,b);
	//Swapping:
	int temp = a;
	a = b;
	b = temp;
	printf("AFTER SWAPPING \n VALUE OF a: %d \n VALUE OF b: %d\n",a,b);

	return EXIT_SUCCESS;

}