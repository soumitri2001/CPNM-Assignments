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
