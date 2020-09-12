/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <conio.h>

const int MAX = 1e5+5;

int vowel(char ch)
{if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
 return 1;
 else
 return 0;
}

int count(char s[])
{int ans=0,i=0;
 for(i=0;s[i]!='\0';i++)
 {if(vowel(s[i])&&vowel(s[i+1]))
  ans++;
 }
return ans;   
}

int main()
{ char str[MAX];
  printf("Enter the text : \n");
  gets(str);
  int c=count(str);
  printf("The number of occurences of any two consecutive vowels in the text is : %d\n",c);

return 0;
}
