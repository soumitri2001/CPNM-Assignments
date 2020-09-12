/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<conio.h>

const int MAX=1e5+5;

void squeeze(char s[],char ch)
{char newstr[MAX]; int i=0,j=0;
 for(i=0;s[i]!='\0';i++)
 {if(s[i]!=ch)
  {newstr[j]=s[i];j++;}       
 }
 for(i=0;newstr[i]!='\0';i++)
 s[i]=newstr[i];     
 s[i]='\0';
}

int main()
{ char str[MAX],c;
  printf("Enter the string:\n");
  gets(str);
  printf("Enter the character whose occurrence is to be removed : ");
  scanf("%c",&c);
  squeeze(str,c);
  printf("The modified string is : ");
  printf("%s",str);
  
return 0;    
}