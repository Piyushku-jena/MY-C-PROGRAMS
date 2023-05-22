#include<stdio.h>
int main(){
    int a = 1000;
    int *ptr = &a;
    printf("Value at address before postfix and prefix increment = %d\n",*ptr);
    (*ptr)++;
    printf("Value at address after postfix increment = %d\n",*ptr);
    ++(*ptr);
    printf("Value at address after prefix increment = %d\n",*ptr);
}