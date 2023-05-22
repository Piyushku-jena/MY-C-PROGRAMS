#include<stdio.h>
int main(){
    int x = 5, y = 7;
    int *ptr = &x, *ptr2 = &y;
    printf("Before swapping\nx = %d, y = %d\n",x, y);
    int temp = *ptr;
    *ptr = *ptr2;
    *ptr2 = temp;
    printf("After swapping\nx = %d, y = %d\n",x,y);
}