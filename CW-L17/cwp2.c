#include <stdio.h>
int main{
    int a=3;
    char b='z';
    float c=5;
    double d=6;
    long long e=7;
    int *p1 = &a;
    char *p2 = &b;
    float *p3 = &c;
    double *p4 = &d;
    long long *p5 = &e;

    printf("%d\t%d\n",sizeof(*p1));
    printf("%c\t%c\n",*p2);
    printf("%f\t%f\n",*p3);
    printf("%lf\t%lf\n",*p4);
}