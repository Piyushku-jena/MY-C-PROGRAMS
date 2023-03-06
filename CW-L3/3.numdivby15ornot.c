#include <stdio.h>

int main(void) {
  int x;

  printf("Enter a number: ");
  scanf("%d", &x);

  switch (x%15==0) {
  case 1:
    printf("Given number is divisible by 3 and 5");
    break;
  case 0:
    printf("Given number is not divisible by 3 and 5");
    break;
  }
  return 0;
}