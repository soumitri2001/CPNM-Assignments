#include <stdio.h>

int sum_of_digits(int n)
{
    int sum=0;
    while (n>0){
        sum += n%10;
        n /= 10;
    }
    return sum;
}
int main()
{
    int n, sum;

    printf("Enter any integer: \n");
    scanf("%d", &n);

    sum = sum_of_digits(n);
    printf("The sum of the digits of %d is: \n%d", n, sum);
}
