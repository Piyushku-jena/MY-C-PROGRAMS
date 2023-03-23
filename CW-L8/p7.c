#include <stdio.h>

int main() {
    int h, i, j;

    printf("Enter the height of the triangle: ");
    scanf("%d", &h);

    // outer loop controls the height of the triangle
    for (i=h; i>=1; i--) {
        // print required number of spaces on the left
        for (j=h-i; j>=1; j--) {
            printf("  ");
        }
        // print required number of asterisks on the right
        for (j=1; j<=i;j++) {
            printf("%d ",i);
        }
        // move to the next line
        printf("\n");
    }
    printf("\n");
    for (i=h; i>=1; i--) {
        // print required number of spaces on the left
        for (j=h-i; j>=1; j--) {
            printf("  ");
        }
        // print required number of asterisks on the right
        for (j=1; j<=i;j++) {
            printf("%d ",j);
        }
        // move to the next line
        printf("\n");
    }

    return 0;
}