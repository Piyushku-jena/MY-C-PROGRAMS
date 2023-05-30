#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n>=2 && n<=50){
        for( int i=2 ; i<n ; i++ ){
            if( n%i == 0 ){
                printf("No\n");
                return 0;
            }
        }
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}