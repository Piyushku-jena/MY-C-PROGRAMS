#include <stdio.h>
int main(){
    float n, sum, i, avg;
    printf("Enter number n : ");
    scanf("%f",&n);
    printf("%.0f\n",n);
    sum = 0;
    i = 1;
 
    for(i=1;i<=n;i++){
        sum = sum + i;
    }

    avg=sum/n;
    printf("Average of First %.0f numbers is %.1f", n, avg);
    return 0;
}