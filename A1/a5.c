#include <stdio.h>

#define N 100

int isPrime(long n);
void generatePrimes(int n);

int main() {
    printf("First 100 primes : \n");
    generatePrimes(N);
}

// Prints first n prime numbers
void generatePrimes(int n) {
    int i;
    for (i = 2; n > 0; i++) {
        if (isPrime(i)) {
            printf("%d%s", i, (n > 1) ? ", " : ".\n");
            --n;
        }
    }
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
