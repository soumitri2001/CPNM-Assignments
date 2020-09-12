/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <conio.h>

const int MAX = 1e5+5;

int palindrome(char s[])
{int i=0,len=0,j=0;
 for(i=0;s[i]!='\0';i++)
 len++;
 for(i=0,j=len-1;i<j;i++,j--)
 {if(s[i]==s[j])
  continue;
  else
  return 0;
 }
return 1;   
}

int main()
{ char str[MAX];
  printf("Enter the string : \n");
  gets(str);
  int n=palindrome(str);
  if(n==1)
  printf("The string is a palindrome\n");
  else
  printf("The string is not a palindrome\n");
  
return 0;
}