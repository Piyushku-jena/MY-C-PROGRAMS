#include <stdio.h>

int main() {
    int num, an=0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num>=10) {
        an = 0;
        while (num > 0) {
            an += num % 10;
            num /= 10;
        }
        num = an;
    }

    printf("The single digit sum is: %d", an);
    return 0;
}
