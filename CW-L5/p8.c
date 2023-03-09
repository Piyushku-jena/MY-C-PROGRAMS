#include <stdio.h>

int main() {
    int n, mn, dgt;

    printf("Enter a number: ");
    scanf("%d", &n);
    mn=1;
    
    while (n > 0) {
        dgt = n % 10;
        mn *=dgt;
        n /= 10;
    }
    printf("The multiplication of the digits of the input number is: %d", mn);

    return 0;
}