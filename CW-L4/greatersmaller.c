#include <stdio.h>

int main(void) {
  int x, y;
  printf("Enter value of x: ");
  scanf("%d", &x);
  printf("Enter value of y: ");
  scanf("%d", &y);
  switch (x > y) {
    case 1:
    printf("%d is greater than %d",x,y);
    break;
    case 0:
    switch (x<y) {
        case 1:
        printf("%d is greater than %d",y,x);
        break;
        case 0:
        printf("%d and %d are equal",x,y);
        break;
    }
    }
}