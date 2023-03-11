#include <stdio.h>
int adDigi(int i){
    int dgt, an=0;
    while (i > 0) {
        dgt = i % 10;
        an +=dgt;
        i /= 10;
    }
    return an;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num>=10){
        num=adDigi(num);
    }

    printf("The single digit sum is: %d", num);
    return 0;
}