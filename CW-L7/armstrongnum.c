#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, digit, sum;
    printf("Armstrong numbers between 100 and 999:\n");
    for (int i = 100; i <= 999; i++) {
        num = i;
        sum = 0;
        while (num != 0) {
            digit = num % 10;
            sum += pow(digit, 3);
            num /= 10;
        }
        if (sum == i) {
            printf("%d ", i);
        }
    }
    return 0;
}