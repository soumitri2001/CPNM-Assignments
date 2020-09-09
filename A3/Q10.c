#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int i=1,flag;
    printf("The prime factors of %d are \n",n);
    for(i;i<=n;i++){
        if(n%i==0){
        int j=2;
        flag=0;
        for(j;j<=i/2;j++){
            if(i%j==0){
                flag++;
                break;
            }
        }
        if(flag==0){
            printf("%d\n",i);
        }
        }
    }
    return 0;
}
