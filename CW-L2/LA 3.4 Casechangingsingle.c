#include <stdio.h>

int main(void) {
  char a;
  int ascii;
      
  printf ("Enter the Character (alphabet): ");  
  scanf (" %c", &a);  
  ascii = a;

  if (90>=ascii && ascii>=65){
    ascii += 32;
    printf("%c\n",ascii);
  } else if (122>=ascii && ascii>=97) {
    ascii -= 32;
    printf("%c\n",ascii);
  } else {
    printf("character is not an alphabet");
  }
  return 0;
}