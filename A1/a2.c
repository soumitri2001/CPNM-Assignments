
#include <stdio.h>

int sumOfDigits(long n);

int main() {
    printf("Enter a number : ");
    long n;
    scanf("%ld", &n);
    printf("Sum of digits of %ld is : %d\n", n, sumOfDigits(n));
}

// Returns the sum of digits of a long int
int sumOfDigits(long n) {
    int sum = 0;
    if (n < 0) n *= -1;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
