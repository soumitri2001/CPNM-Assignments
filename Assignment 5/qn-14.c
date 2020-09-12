#include<stdio.h>
#include<conio.h>

const int MAX=1e6+5; 

int main()
{ char str[MAX];
  printf("Enter the string:\n");
  gets(str);
  int i=0,space=0;
  for(i=0;str[i]!='\0';i++)
  {if(str[i]==' '&&str[i+1]!=' ')
   space++ ;
  }
  printf("The number of words are : ");
  printf("%d",space+1);
  
return 0;    
}
