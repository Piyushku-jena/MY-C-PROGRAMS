#include <stdio.h>
int main(){
          int x,i,n,j;
          printf("enter the value of x: ");
          scanf("%d",&x);
          printf("enter the value of n: ");
          scanf("%d",&n);
          double ans=0;
          for (i=n;i>=1;i--){
                    double h=1, sum=1, prod=1;
                    while(h<=i){
                              sum *=x;
                              h++;
                    }
                    for(j=i;j>=1;j--){
                              prod*=j;
                    }
                    ans +=sum/prod;
                    printf("%.2f/%.2f = %.2f\n",sum,prod,sum/prod);
          }
          printf("Answer of value put on the series is: %f\n",ans);
          return 0;
}
