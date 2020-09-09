#include <stdio.h>

int isPrime(long n);

int main() {
    printf("Enter a number : ");
    long n;
    scanf("%ld", &n);
    if (isPrime(n))
        printf("%ld is a prime.\n", n);
    else
        printf("%ld is not a prime.\n", n);
}

// Returns 1 if n is prime else 0;
int isPrime(long n) {
    int factorCount = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) factorCount++;
    }
    if (factorCount == 2)
        return 1;
    else
        return 0;
}
