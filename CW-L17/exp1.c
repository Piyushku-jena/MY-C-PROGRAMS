#include<stdio.h>
int main(){
    int a = 5;
    char b = 'a';
    float c = 4.5;
    int *ptr1 = &a;
    char *ptr2 = &b;
    float *ptr3 = &c;
    printf("a = %d, b = %d, c = %d\n",ptr1,ptr2,ptr3);
    printf("a = %p, b = %p, c = %p\n",&a,&b,&c);
    printf("a = %d, b = %c, c = %f\n",*ptr1,*ptr2,*ptr3);
}