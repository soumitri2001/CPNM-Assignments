#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a[3];
	printf("ENTER THREE NUMBERS: ");
	scanf("%d %d %d", &a[0], &a[1], &a[2]);
	int max = a[0], min = a[0];
	for(int i=1;i<3;i++)
	{
		if(max<a[i])
			max=a[i];
		if(min>a[i])
			min=a[i];
	}

	printf("MAXIMUM OF THE THREE: %d\nMINIMUM OF THE THREE: %d\n", max,min);

	return EXIT_SUCCESS;
}