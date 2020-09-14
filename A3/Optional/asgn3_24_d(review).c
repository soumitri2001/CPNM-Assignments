#include <stdio.h>

int main()
{
	int n=4,i,j,k,l,m,q,p;

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
			printf(" ");

		for(k=1;k<=i;k++)
			printf("%d", k);
		for(l=i-1;l>=1;l--)
			printf("%d", l);	

		printf("\n");

		if(i!=4)
		{
			for(m=1;m<=(n-1)-i;m++)
				printf(" ");

			for(q=1;q<=i;q++)
				printf("%d", q);
			for(p=i;p>=1;p--)
				printf("%d", p);

			printf("\n");
		}
	}

	return 0;
}