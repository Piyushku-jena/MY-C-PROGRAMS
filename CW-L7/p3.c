#include <stdio.h>

int main(){
    int s,e,i,st,en;
    printf("Enter the range:\nstarting range: ");
    scanf("%d",&s);
    printf("ending range: ");
    scanf("%d",&e);
    i = 1;
    st = (s>e)?e:s;
    en = (s>e)?s:e;

    printf("\nNumbers in the range which are prime:\n"); 
    for(i=st;i<=en;i++){
        int n;
        for (n = 2 ; n<=i/2 ; ++n) {
            if (i%n == 0) {
                break;
            }
        }
        if (n > i/2) {
            printf("%d ",i);
        }
    }
    return 0;
}