#include <stdio.h>

int main(void) {
  int x;
  printf("Enter value of x: ");
  scanf("%d", &x);
  int n = x % 2;
  if (n == 0) {
    printf("Given number (%d) is even", x);
  } else {
    printf("Given number (%d) is odd", x);
  }
  return 0;
}