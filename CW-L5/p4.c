#include <stdio.h>

int main(){
    int n1, n2, gcd, lcm, rem, ntr, dtr;
 
    printf("Enter two numbers:\n");
    scanf("%d %d", &n1, &n2);
 
    //To find numerator and denominator
    ntr = (n1>n2)?n1:n2;
    dtr = (n1<n2)?n1:n2;
    rem= ntr % dtr;
 
    while (rem != 0) {
        ntr = dtr;
        dtr = rem;
        rem = ntr % dtr;
    }
    gcd = dtr;
    lcm = n1 * n2 / gcd;
    printf("GCD of %d and %d = %d\n", n1, n2, gcd);
    printf("LCM of %d and %d = %d\n", n1, n2, lcm);
}