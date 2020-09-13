#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[1000];
    char ans[100];
    int i=1, j=0;

    printf("Enter the full name: ");
    gets(str);

    ans[0]=str[0];
    while (str[j]!='\0')
    {
        j++;
        if (str[j]==' ')
        {
            ans[i]=toupper(str[j+1]);
            i++;
        }
    }
    ans[i]='\0';

    printf ("Initials of his name is: %s", ans);

}
