#include <stdio.h>
int main() {
    float x1,x2,x3,y1,y2,y3,a,b,c;
    int num;
    printf("Enter coordinates of point A(x1,y1) :\n x1: ");
    scanf("%f",&x1);
    printf(" y1: ");
    scanf("%f",&y1);

    printf("Enter coordinates of point B(x2,y2) :\n x2: ");
    scanf("%f",&x2);
    printf(" y2: ");
    scanf("%f",&y2);

    printf("Enter coordinates of point A(x3,y3) :\n x3: ");
    scanf("%f",&x3);
    printf(" y3: ");
    scanf("%f",&y3);

    a=(x1*(y2 - y3));
    b=(x2*(y3 - y1));
    c=(x3*(y1 - y2));
    num=a+b+c;

    printf("%f,%f,%f,%d\n",a,b,c,num);

    switch (num)
    {
    case 0:
        printf("Given three points form a straight line and thus, are collinear.");
        break;
    
    default:
    printf("Given three points do not form a straight line and thus, are non collinear.");
        break;
    }
}