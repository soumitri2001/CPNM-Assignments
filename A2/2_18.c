#include <stdio.h>

int main() {
    printf("Enter an year : ");
    int year;
    scanf("%d", &year);
    if (year % 4 != 0 || (year % 100 == 0 && year % 400 != 0)) {
        printf("Not a leap year\n");
    } else {
        printf("A leap year\n");
    }
}
