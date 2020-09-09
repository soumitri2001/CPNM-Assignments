#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char str[500];
	printf("ENTER A LINE OF TEXT: \n");
	scanf("%[^\n]",str);
	for(size_t i=0;str[i]!='\0';i++)
	{
		if(str[i]>=97 && str[i]<=122)
			str[i] = str[i]-32;
	}
	for(size_t i=0;str[i]!='\0';i++)
		printf("%c",str[i]);
	printf("\n");
	return EXIT_SUCCESS;

}