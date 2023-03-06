#include <math.h>
#include <stdio.h>
int main() {
  float a, b, c, del,r1,r2,img;

  // input from user
  printf("Equation form: ax^2 + bx + c = 0\n");
  printf("Enter value of a: ");
  scanf("%f", &a);
  printf("Enter value of b: ");
  scanf("%f", &b);
  printf("Enter value of c: ");
  scanf("%f", &c);

  // discriminant calculation
  del = (b*b)-(4*a*c);
  printf("%.3f\n",del);

  switch (del > 0) {
  case 1:
    /* If discriminant is positive */
    r1 = (-b + sqrt(del)) / (2 * a);
    r2 = (-b - sqrt(del)) / (2 * a);

    printf("Two distinct real roots: \nroot1:%.3f \nroot2:%.3f", r1, r2);
    break;

  case 0:
    /* If discriminant is not positive */
    switch (del < 0) {
    case 1:
      /* If discriminant is negative */
      r1 = r2 = -b / (2 * a);
      img = sqrt(-del) / (2 * a);

      printf("Two distinct complex roots: \n%.2f + i%.2f \n%.2f - i%.2f",
             r1, img, r2, img);
      break;

    case 0:
      /* If discriminant is zero */
      r1 = r2 = -b / (2 * a);

      printf("Two equal real roots: \nroot1:%.3f \nroot2:%.3f", r1, r2);

      break;
    }
  }

  return 0;
}