#include <stdio.h>
int main() {
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    switch (a%2==0){
        case 1:
        printf("%d is even",a);
        break;
        case 0:
        printf("%d is odd",a);
        break;
    }
}