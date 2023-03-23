#include <stdio.h>

int main(){
    int s,e,i,st,en, j, is_prime;
    printf("Enter the range:\nstarting range: ");
    scanf("%d",&s);
    printf("ending range: ");
    scanf("%d",&e);
    st = (s>e)?e:s;
    en = (s>e)?s:e;

    // loop over the range and check for prime numbers with condition
    printf("Prime numbers with 3 in unit or 10th place within the range:\n");
    for (i = st; i <= en; i++) {
        // check if either the unit digit or the 10th digit is 3
        if (i % 10 == 3 || (i / 10) % 10 == 3) {
            // check if the number is prime
            is_prime = 1;
            for (j = 2; j <= i/2; j++) {
                if (i % j == 0) {
                    is_prime = 0;
                    break;
                }
            }
            if (is_prime == 1) {
                printf("%d ", i);
            }
        }
    }

    
    return 0;
}