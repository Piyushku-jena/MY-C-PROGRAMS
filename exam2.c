#include<stdio.h>
void Input(int arr[]);
void Search(int arr[]);

int main(){
    int arr[10];
    Input(arr);
    Search(arr);
}

void Input(int arr[]){
    for( int i=0 ; i<10 ; i++ ){
        printf("Input number between 1 and 100 index %d = ",i+1);
        scanf("%d",&arr[i]);
        if( arr[i]<1 || arr[i]>100 ){
            printf("Error");
            return;
        }
    }
}

void Search(int arr[]){
    for( int i=0 ; i<10 ; i++ ){
        if( arr[i]%11 == 0 ){
            printf("%d\n",arr[i]);
            return;
        }
    }
    printf("No desired number\n");
}
