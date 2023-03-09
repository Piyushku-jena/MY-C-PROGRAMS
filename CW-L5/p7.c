#include <stdio.h>

int main() {
    int n, rn, dgt;

    printf("Enter a number: ");
    scanf("%d", &n);
    rn=0;

    while (n > 0) {
        dgt = n % 10;
        rn=rn*10+dgt;
        n /= 10;
    }
    printf("The reversed number is: %d", rn);

    return 0;
}
