#include<stdio.h>
int main(){
    int arr[] = {1,4,5,6,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int c = sizeof(arr[0]);
    for(int i = 0; i< n; i++){
        printf("%d ",*(arr+i));
    }
    printf("\n");
}