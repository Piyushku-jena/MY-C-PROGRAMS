// * * * * *
// * * * *
// * * *
// * *
// *
#include <stdio.h>

int main() {
    int st, en, i, j;

    printf("Enter starting point: ");scanf("%d",&st);
    printf("Enter ending point: ");scanf("%d",&en);

    // outer loop controls the height of the triangle
    for (i=st; i>=en; i--) {
        // print required number of spaces on the left
        for (j=en-i; j>=1; j--) {
            printf("  ");
        }
        // print required number of asterisks on the right
        for (j=1; j<=i;j++) {
            printf("* ");
        }
        // move to the next line
        printf("\n");
    }

    return 0;
}
