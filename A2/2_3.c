#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int n;
	printf("ENTER INTEGER: ");
	scanf("%d", &n);
	if(n>=100 && n<1000)
	{
		int sum = 0;
		while(n > 0)
		{		
			sum += n%10;
			n/=10;
		}
		printf("SUM OF DIGITS OF THE NUMBER: %d\n", sum);
	}
	else
		printf("EXITING SINCE YOU DID NOT ENTER A 3 DIGIT NUMBER.\n");

	return EXIT_SUCCESS;
}