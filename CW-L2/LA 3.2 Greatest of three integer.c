#include <stdio.h>

int main(void) {
  int n1, n2, n3;
  printf("Enter first number: ");
  scanf("%d", &n1);
  printf("Enter second number: ");
  scanf("%d", &n2);
  printf("Enter third number: ");
  scanf("%d", &n3);
  if (n1 >= n2 && n1 >= n3) {
    printf("\n%d is the largest number.\n", n1);
  } else if (n2 >= n1 && n2 >= n3) {
    printf("\n%d is the largest number.\n", n2);
  } else if (n3 >= n1 && n3 >= n2) {
    printf("\n%d is the largest number.\n", n3);
  }
  return 0;
}