#include <stdio.h>

int main()
{
	int n=4,i,k=0,j;

	for(i=n;i>=1;i--)
	{
		for(j=i;j>=k;j--)
			printf("%d", j);

		printf("\n");
		k++;

		if(i==k)
			break;
	}

	return 0;
}