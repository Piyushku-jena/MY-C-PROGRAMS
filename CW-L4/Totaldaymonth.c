#include <stdio.h>
int main() {
    int a;
    printf("Enter the number of month : ");
    scanf("%d",&a);
    switch (a){
        case 1:
        printf("January\nnumber of days: 31");
        break;
        case 2:
        printf("February\nnumber of days: 28 (29 in a leap year)");
        break;
        case 3:
        printf("March\nnumber of days: 31");
        break;
        case 4:
        printf("April\nnumber of days: 30");
        break;
        case 5:
        printf("May\nnumber of days: 31");
        break;
        case 6:
        printf("June\nnumber of days: 30");
        break;
        case 7:
        printf("July\nnumber of days: 31");
        break;
        case 8:
        printf("August\nnumber of days: 31");
        break;
        case 9:
        printf("September\nnumber of days: 30");
        break;
        case 10:
        printf("October\nnumber of days: 31");
        break;
        case 11:
        printf("November\nnumber of days: 30");
        break;
        case 12:
        printf("December\nnumber of days: 31");
        break;
        default:
        printf("You have not entered a valid number (Years range from 1-12).");
    }
}