#include <stdio.h>

int main(void) {
  int x, y;
  char o;

  printf("Calculator:\n-----------\nOperations available + - * / % ");
  printf("Enter the operator: ");
  scanf("%c", &o);

  printf("Enter value of x: ");
  scanf("%d", &x);

  printf("Enter value of y: ");
  scanf("%d", &y);

  // printf("ascii value of operator: %d", o);

  switch (o) {
  case '+':
    printf("x+y= %d", x+y);
    break;
  case '-':
    printf("x-y= %d", x-y);
    break;
  case '*':
    printf("x*y= %d", x*y);
    break;
  case '/':
    printf("x/y= %d", x/y);
    break;
  case '%':
    printf("x%%y= %d", x%y);
    break;
  default:
    printf("Input is inoperable.");
  }
  return 0;
}