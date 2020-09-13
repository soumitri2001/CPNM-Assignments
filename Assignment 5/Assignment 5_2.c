#include <stdio.h>

int to_binary(int n, int *binary, int i)
{
    if(n<=0)
        return i;

    int tmp=n;
    int remainder=n%2;
    binary[i]=remainder;
    i++;
    n/=2;

    int z=to_binary(n,binary,i);
    return z;
}

int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);

    int binary[100],k,i=0,j;
    k=to_binary(n,binary,i);

    printf("Binary number of %d is : ", n);
    for(j=k-1;j>=0;j--)
    {
        printf("%d",binary[j]);
    }

    return 0;
}