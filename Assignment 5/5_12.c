#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char str[18];
	printf("ENTER AN INTEGER AS A STRING: ");
	scanf("%s", str);
	long long n=0;
	for(size_t i=0;str[i]!='\0';i++)
	{
		n = n*10 + (str[i] - '0');
	}
	printf("THE NUMBER YOU ENTERED PRINTED AS AN INTEGER TYPE: %lld\n", n);

	return EXIT_SUCCESS;
}