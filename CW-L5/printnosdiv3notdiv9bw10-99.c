#include <stdio.h>
int main() {
    int i,d,c,stop; // i (carries the loop) d (displays current number) c (counts)
    i=d=10;
    c=0;
    stop=99;
    while (i<=stop) {
        if(d%3==0 && d%9!=0) {
            printf("%d\n",d);
            c++;
        }
        i++;
        d++;
    }
    printf("%d is the number",c);

}