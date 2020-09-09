#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=2,flag;
    printf("The prime numbers between 1 and 100 are: \n");
    for(num;num<=100;num++){
        int j=2;
        flag=0;
        for(j;j<=num/2;j++){
            if(num%j==0){
                flag++;
                break;
            }
        }
        if(flag==0){
            printf("%d\n",num);
        }
    }
    return 0;
}
