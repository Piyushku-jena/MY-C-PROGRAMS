#include <stdio.h>

int main(void) {
  int x, y;
  printf("Enter value of x: ");
  scanf("%d", &x);
  printf("Enter value of y: ");
  scanf("%d", &y);
  if (x > y) {
    printf("%d is greater than %d", x, y);
  } else {
    printf("%d is greater than %d",y, x);
  }
}