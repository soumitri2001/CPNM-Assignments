#include <stdio.h>

int main()
{
	int n=4,i,j,k,l,m,p,q,r;

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
			printf(" ");

		for(k=1;k<=i;k++)
			printf("+");
		for(l=i-1;l>=1;l--)
			printf("+");

		printf("\n");
	}

	for(m=n-1;m>=1;m--)
	{
		for(p=1;p<=n-m;p++)
			printf(" ");

		for(q=1;q<=m;q++)
			printf("+");
		for(r=m-1;r>=1;r--)
			printf("+");

		printf("\n");
	}

	return 0;
}