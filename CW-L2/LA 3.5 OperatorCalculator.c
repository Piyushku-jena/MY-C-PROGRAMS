#include <stdio.h>

int main(void) {
  int x, y, o;

  printf("Enter value of x: ");
  scanf("%d", &x);

  printf("Enter value of y: ");
  scanf("%d", &y);
  printf("1.Addition 2.Subtraction 3.Multiplication 4.Division 5.Modulus\n");
  scanf("%d", &o);

  // printf("ascii value of operator: %d", o);

  switch (o) {
  case 1:
    printf("x+y= %d", x + y);
    break;
  case 2:
    printf("x-y= %d", x - y);
    break;
  case 3:
    printf("x*y= %d", x * y);
    break;
  case 4:
    printf("x/y= %d", x / y);
    break;
  case 5:
    printf("x%%y= %d", x % y);
    break;
  }
  return 0;
}