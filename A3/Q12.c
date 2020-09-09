#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int i=1;
    for(i;i<=10;i++){
        printf("%d*%d = %d\n",n,i,n*i);
    }
    return 0;
}
