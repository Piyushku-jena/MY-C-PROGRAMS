#include<stdio.h>
int main(){
    int a = 1000;
    int *ptr = &a;
    printf("Value at address before postfix and prefix decrement = %d\n",*ptr);
    int x= (*ptr)++;
    printf("Value at address after postfix decrement = %d\n",x);
    int y= ++(*ptr);
    printf("Value at address after prefix decrement = %d\n",y);
}