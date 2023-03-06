#include <stdio.h>

int main(){
    int a, d1, d2, d3, d4, d5, nn;
    printf("Enter a 5 digit number: ");
    scanf("%d",&a);
    d5=(a/10000);
    d4=((a-(d5*10000))/1000);
    d3=((a-(d5*10000)-(d4*1000))/100);
    d2=((a-(d5*10000)-(d4*1000)-(d3*100))/10);
    d1=((a-(d5*10000)-(d4*1000)-(d3*100)-(d2*10)));
    nn=d1*10000+d2*1000+d3*100+d4*10+d5;
    printf("%d is the reversed number\n",nn);
    if (nn>a){
        printf("%d is more than input number",nn);
    } else if (nn==a) {
        printf("%d is equal to input number",nn);
    } else if (nn<a) {
        printf("%d is more than input number",nn);
    } else {
        printf("Error!!!");
    }
    return 0;
}