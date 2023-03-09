#include <stdio.h>
int main(){
    int n, sum, i;
    printf("Enter number n : ");
    scanf("%d", &n);
    sum = 0;
    i = 1;
 
    for(i=1;i<=n;i++){
        sum = sum + i;
    }

    printf("Sum of First %d numbers is %d", n, sum);
    return 0;
}