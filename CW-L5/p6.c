#include <stdio.h>

int main() {
    int n, dgt;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Digits of the number: ");
    while (n > 0) {
        dgt = n % 10;
        printf("%d ", dgt);
        n /= 10;
    }

    return 0;
}
