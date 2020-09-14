#include <stdio.h>

int main()
{
	int n=4,i,j,k,l,m,p;

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
			printf(" ");

		printf("+");

		if(i!=1)
		{
			for(k=1;k<=((i-1)*2)-1;k++)
				printf(" ");

			printf("+");
		}

		printf("\n");
	}

	for(l=n-1;l>=1;l--)
	{
		for(m=n-1;m>=l;m--)
			printf(" ");

		printf("+");

		if(l!=1)
		{
			for(p=(l-1)*2-1;p>=1;p--)
				printf(" ");

			printf("+");
		}

		printf("\n");
	}

	return 0;
}