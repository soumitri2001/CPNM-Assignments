#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int n;
	printf("ENTER LENGTH OF STRING YOU ARE GOING TO ENTER: ");
	scanf("%d",&n);
	char str[n+1];
	printf("ENTER STRING: ");
	scanf("%s",str);
	for(int i=0;i<n/2;i++)
	{
		if(str[i]!=str[n-1-i])
		{
			printf("THE STRING YOU ENTERED IS NOT A PALINDROME.\n");
			return EXIT_SUCCESS;
		}
	}

	printf("THE STRING YOU ENTERED IS A PALINDROME.\n");
	return EXIT_SUCCESS;
} 