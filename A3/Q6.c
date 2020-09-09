#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int fac=1;
    int i=1;
    for(i;i<=n;i++){
        fac *= i;
    }
    printf("The factorial of the number is %d.",fac);
    return 0;
}
