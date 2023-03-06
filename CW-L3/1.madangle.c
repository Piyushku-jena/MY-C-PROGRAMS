#include <stdio.h>

int main(void) {
  int x, y, z, a, b, c, bov;

  printf("Three sides of triangle: x, y, z\n");
  printf("Enter value of x: ");
  scanf("%d", &x);
  printf("Enter value of y: ");
  scanf("%d", &y);
  printf("Enter value of z: ");
  scanf("%d", &z);

  a=x+y;b=y+z;c=x+z;
 
  bov=(a>z && b>x && c>y);

  switch (bov) {
  case 0:
    printf("Triangle can't be drawn with given sides\n");
    break;
  case 1:
    printf("Triangle can be drawn with given sides\n");
    
    if (x==y && y==z && x==z) {
      printf("Triangle is Equilateral");
    } else if (x!=y && y!=z && z!=x) {
      printf("Triangle is Scalene");
    } else {
      printf("Triangle is Isosceles");
    }
    
    break;
  }
  return 0;
}