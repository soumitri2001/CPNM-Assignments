#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char str[2000];
	printf("ENTER LINE OF TEXT: \n");
	scanf("%[^\n]",str);
	int count = 0;
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]!=' ' && str[i-1] == ' ' && str[i] != '\0')
			count++;
	}
	if(str[0]==' ')
		count--;
	printf("NUMBER OF WORDS FOUND IN LINE YOU ENTERED: %d\n", count+1);

	return EXIT_SUCCESS;
}