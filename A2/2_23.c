#include <stdio.h>

int main() {
    printf("Enter time in seconds : ");
    long total;
    scanf("%ld", &total);
    long cTotal = total;
    long hours, mins, secs;
    hours = total / 3600;
    total = total % 3600;
    mins = total / 60;
    total = total % 60;
    secs = total;
    printf("%ld seconds is equivaltent to %ld hours %ld minutes %ld seconds\n", cTotal, hours, mins, secs); 
}
