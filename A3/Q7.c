#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int sum=0;
    int i=1;
    printf("The series is : \n");
    for(i;i<=n;i++){
        int j=1;
        int fac=1;
        for(j;j<=i;j++){
            fac*=j;
        }
        sum += fac;
        printf("%d!\n",i);
    }
    printf("The sum of the series is %d.",sum);
    return 0;
}
