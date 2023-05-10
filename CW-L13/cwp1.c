#include <stdio.h>

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapStar(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    printf("Enter x: " );scanf("%d",&x);
    printf("Enter y: " );scanf("%d",&y);

    printf("Before swap: x = %d, y = %d \n", x, y);

    swap(x, y);
    printf("After normal swap: x = %d, y = %d \n", x, y);

    swapStar(&x, &y);
    printf("After star swap: x = %d, y = %d \n", x, y);

    return 0;
}
