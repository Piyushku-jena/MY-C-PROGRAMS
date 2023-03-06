#include <stdio.h>

int main() {
    int cp, sp;
    printf("Input Cost Price:");
    scanf("%d", &cp);
    printf("Input Sell Price:");
    scanf("%d", &sp);

    if(cp>sp) {
        printf("The sale brings in a loss of : %d",cp-sp);
    } else if (cp<sp) {
        printf("The sale brings in a profit of : %d",sp-cp);
    } else if (cp==sp) {
        printf("The sale brings no profit or loss.");
    } else {
        printf("Check your inputs again for possible errors");
    }
    return 0;
}