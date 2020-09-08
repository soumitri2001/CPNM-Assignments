#include <stdio.h>

int main()
{
	int a[3][3],i,j,b,c[3][3],d[3][3],ch,s=0,k;

	printf("Enter matrix\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b);
			a[i][j]=b;
		}
	}

	printf("Enter matrix\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b);
			c[i][j]=b;
		}
	}
	printf("\n");

	printf("enter 1 for sum of matrix\n");
	printf("enter 2 for difference of matrix\n");
	printf("enter 3 for multiplication of matrix\n");

	printf("enter your choice\n");
	scanf("%d",&ch);

	switch(ch)
	{
		case 1:
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
			d[i][j]=a[i][j]+c[i][j];
			}
		}

		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
			printf("%d ",d[i][j]);
			}
			printf("\n");
		}
		break;

		case 2:

		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
			d[i][j]=a[i][j]-c[i][j];
			}
		}

		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
			printf("%d ",d[i][j]);
			}
			printf("\n");
		}
		break;

		case 3:

		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				s=0;
				for(k=0;k<3;k++)
				{
				s+=a[i][k]+c[k][j];
				}
				d[i][j]=s;
			}
		}

		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d ",d[i][j]);
			}
			printf("\n");
		}
		break;

	}

	return 0;
	}


