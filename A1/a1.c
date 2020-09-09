#include <stdio.h>

long maxOfThree(long a, long b, long c);

int main() {
    printf("Enter three numbers : ");
    long a, b, c;
    scanf("%ld %ld %ld", &a, &b, &c);
    printf("Maximum of the give three number : %ld\n", maxOfThree(a, b, c));
}

// Returns the maximum of three given numbers :
long maxOfThree(long a, long b, long c) {
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}
