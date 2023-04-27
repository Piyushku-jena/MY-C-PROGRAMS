#include <stdio.h>
int main(){
          float n,i,j;
          float prod=1;
          printf("Enter the number for factorial");    //list of numbers with their factorials
          scanf("%f",&n);
          for(i=1;i<=n;i++){
               for(j=i;j>=1;j--){
                    prod*=j;
               }
               printf("%2.0f!=%7.0f\n",i,prod);
               prod=1;
          }
          return 0;
}
