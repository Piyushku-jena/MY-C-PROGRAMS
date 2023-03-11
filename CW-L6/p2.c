#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter 3 numbers:\na:");
    scanf("%d",&a);
    printf("b:");
    scanf("%d",&b);
    printf("c:");
    scanf("%d",&c);

    (a>b && a>c)?printf("%d is greatest",a):(b>c)?printf("%d is greatest",b):printf("%d is greatest",c);
}