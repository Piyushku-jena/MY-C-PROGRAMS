#include <stdio.h>

int main() {
    int n, rn, dgt;

    printf("Enter a 5 digit number: ");
    scanf("%d", &n);

    while (n > 0) {
        int og=n;
        rn=0;
        while (n > 0) {
            rn=rn*10+n%10;
            n /= 10;
        }
        printf("reversed: %d  |  %d-%d: %d\n",rn,rn,og,rn-og);
        n=rn-og;
    }
    printf("First negative number: %d\n",n);


    return 0;
}
