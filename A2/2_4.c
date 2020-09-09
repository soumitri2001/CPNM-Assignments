#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int n;
	printf("ENTER INTEGER: ");
	scanf("%d", &n);
	if(n%2==0)
		printf("THE INTEGER YOU ENTERED IS EVEN.\n");
	else
		printf("THE INTEGER YOU ENTERED IS ODD.\n");

	return EXIT_SUCCESS;
}