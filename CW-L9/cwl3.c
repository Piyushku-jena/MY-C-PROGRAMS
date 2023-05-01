#include <stdio.h>
int main(){
          int x,i,n;
          printf("Series: x+x^2+x^3…..x^n \n");
          printf("enter the value of x: ");   //series x+x^2+x^3…..x^n
          scanf("%d",&x);
          printf("enter the value of n: ");
          scanf("%d",&n);
          int ans=0;
          for (i=n;i>=1;i--){
                    int h=1, sum=1;
                    while(h<=i){
                              sum *=x;
                              h++;
                    }
                    ans +=sum;
                    printf("%d\n",sum);
          }
          printf("Answer of value put on the series is: %d\n",ans);
          return 0;
}
