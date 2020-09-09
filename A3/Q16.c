#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1;
    printf("Enter the 100 integers : ");
    int pos=0;
    int zero=0;
    int neg=0;
    for(i;i<=100;i++){
        int n;
        scanf("%d",&n);
        if(n>0)pos++;
        else if(n==0)zero++;
        else neg++;
        printf("\n");
    }
    printf("The number of positives, zeroes and negatives are %d, %d and %d respectively.",pos,zero,neg);
    return 0;
}
