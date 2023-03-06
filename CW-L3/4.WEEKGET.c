#include <stdio.h>

int main(void) {
  int x;

  printf("Enter the number of week (1-7 only): ");
  scanf("%d", &x);

  switch (x) {
    case 1:
    printf("Monday");
    break;
    case 2:
    printf("Tuesday");
    break;
    case 3:
    printf("Wednesday");
    break;
    case 4:
    printf("Thursday");
    break;
    case 5:
    printf("Friday");
    break;
    case 6:
    printf("Saturday");
    break;
    case 7:
    printf("Sunday");
    break;
    default:
    printf("Input data doesn't represent a day (input only 1-7)");
  }
  return 0;
}