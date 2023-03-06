#include <stdio.h>

int main() {
    int y=0;
    printf("Input a Year after 1582:");
    scanf("%d", &y);
    int a=(y<1582);
    int b=(y%400==0 && y>=1582);

    if(y<1582) {
        printf("%d is before 1582, hence Gregorian calendar doesn't apply",y);
    } else if (y%400==0 && y>=1582) {
        printf("%d is a leap year",y);
    } else if (y%4==0 && y%100!=0 && y>=1582) {
        printf("%d is a leap year",y);
    } else {
        printf("%d is not a leap year");
    }
    return 0;
}