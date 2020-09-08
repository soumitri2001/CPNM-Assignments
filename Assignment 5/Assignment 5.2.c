#include <stdio.h>

int to_binary(int n, int *binary)
{
    int i=0;
    while (n>0){
        binary[i]=n%2;
        n = n/2;
        i++;
    }
    return i;
}

void reverse(int *binary, int k)
{
    k--;
    int i=0, temp;
    while (i<k)
    {
        temp = binary[i];
        binary[i]=binary[k];
        binary[k]=temp;
        i++;
        k--;
    }
}
int main()
{
    int n,i,k;
    int binary[100];

    printf ("Enter a decimal number: \n");
    scanf("%d", &n);

    k = to_binary(n, &binary[0]);

    reverse(&binary[0], k);

    printf("Binary of the number is: \n");
    for (i=0; i<k; i++)
        printf("%d", binary[i]);
}
