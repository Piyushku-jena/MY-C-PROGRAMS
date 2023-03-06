#include <stdio.h>

int main(void) {
  float a;

  printf("Enter the Number: ");
  scanf(" %f", &a);

  if (a>0) {
    printf("%.0f is a Positive Number\n", a);
  } else if (a==0) {
    printf("%.0f is zero, so neither positive or negative\n", a);
  } else if (a<0) {
    printf("%.0f is a Negative Number\n", a);
  } else {
    printf("Entered data is not a number");
  }
}