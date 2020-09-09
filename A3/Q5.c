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
        sum+= i*(i+1);
        printf("%d.%d \n",i,i+1);
    }
    printf("The sum of the series is %d.",sum);
    return 0;
}
