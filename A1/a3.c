#include <stdio.h>

long reverse(long n);

int main() {
    printf("Enter a number : ");
    long n;
    scanf("%ld", &n);
    printf("Reverse of %ld is : %ld\n", n, reverse(n));
}

// Returns the reverse of a long int
long reverse(long n) {
    long reverse = 0;
    int sign = 1;
    if (n < 0) {
        sign = -1;
        n *= sign;
    }
    while (n > 0) {
        reverse = reverse * 10 + (n % 10);
        n /= 10;
    }
    return reverse * sign;
}
