#include <stdio.h>

int main()
{
	int n=4,i,j,k,l,a,b,m,p,q,r;

	for(a=1;a<=(2*n)+1;a++)
		printf("+");
	printf("\n");

	for(i=4;i>=1;i--)
	{
		for(j=i;j>=1;j--)
			printf("+");
		for(k=1;k<=((n-i)*2)+1;k++)
			printf(" ");
		for(l=i;l>=1;l--)
			printf("+");

		printf("\n");
	}

	for(m=2;m<=n;m++)
	{
		for(p=1;p<=m;p++)
			printf("+");
		for(q=1;q<=((n-m)*2)+1;q++)
			printf(" ");
		for(r=1;r<=m;r++)
			printf("+");

		printf("\n");
	}

	for(b=1;b<=(2*n)+1;b++)
		printf("+");

	return 0;
}