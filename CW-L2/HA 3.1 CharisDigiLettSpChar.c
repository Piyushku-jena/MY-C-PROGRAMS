#include <stdio.h>

int main(void) {
  char a;
  int ascii;

  printf("Enter the Character: ");
  scanf(" %c", &a);
  ascii = a;

  if (90 >= ascii && ascii >= 65) {
    printf("%c is a capital letter\n", a);
  } else if (122 >= ascii && ascii >= 97) {
    printf("%c is a small letter\n", a);
  } else if (57 >= ascii && ascii >= 48) {
    printf("%c is a number digit\n", a);
  } else {
    printf("%c is a special character\n", a);
  }
  return 0;
}