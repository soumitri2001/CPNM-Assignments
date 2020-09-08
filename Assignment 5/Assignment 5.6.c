#include <stdio.h>

int main()
{
    char str[1000];
    int i=0, j=0;
    char temp;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[i]!='\0')
        i++;

    i--;
    while(j<i){
        temp = str[i];
        str[i]=str[j];
        str[j]=temp;
        i--;
        j++;
    }

    printf ("The reversed string is: %s\n", str);
}
