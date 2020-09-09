#include <stdio.h>

int main() {
    int c;
    c = getchar();
    if (c >= '0' && c <= '9') {
        printf("A digit\n");
    } else if (c >= 'A' && c <= 'Z') {
        printf("Capital letter\n");
    } else if (c >= 'a' && c <= 'z') {
        printf("Small case letter\n");
    } else {
        printf("A special symbol\n");
    }
}
