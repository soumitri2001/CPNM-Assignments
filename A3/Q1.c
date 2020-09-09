#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int i=1;
    printf("The numbers between 1 and 100 which are divisible by %d are :",n);
    for(i;i<=100;i++){
        if(i%n==0){
            printf("%d ",i);
        }
    }
    return 0;
}