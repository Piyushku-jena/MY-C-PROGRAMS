#include <stdio.h>
int main() {
          int st, en, i, j, st2, en2, k, l;
          printf("Increasing Pyramid\n\n");
          printf("Enter starting point: ");scanf("%d",&st);
          printf("Enter ending point: ");scanf("%d",&en);
          for( i=st;i<=en;i++){
                    for(j=1;j<=i;j++){
                              printf("%d ",i);
                    }
                    printf("\n");
          }
          printf("\n\nDecreasing Pyramid\n\n");
          printf("Enter starting point: ");scanf("%d",&st2);
          printf("Enter ending point: ");scanf("%d",&en2);
          for( k=st2;k>=en2;k--){
                    for(l=1;l<=k;l++){
                              printf("%d ",k);
                    }
                    printf("\n");
          }
          for( k=st2;k>=en2;k--){
                    for(l=1;l<=k;l++){
                              printf("%d ",k);
                    }
                    printf("\n");
          }
          return 0;
}