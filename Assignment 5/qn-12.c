/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <conio.h>
#include <math.h>

const int MAX = 11;

int to_integer(char s[])
{int len=0,ans=0,i=0,j;
 for(i=0;s[i]!='\0';i++)
 len++;
 for(i=0,j=len-1;s[i]!='\0';i++,j--)
 ans+=((int)(s[i]-48))*(int)pow(10,j);
 
return ans;   
}

int main()
{ char str[MAX];
  printf("Enter the string : \n");
  gets(str);
  int n=to_integer(str);
  printf("The equivalent number after converting the string is : %d\n",n);

return 0;
}
