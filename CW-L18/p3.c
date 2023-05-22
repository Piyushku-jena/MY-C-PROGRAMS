#include <stdio.h>
void PrintArray(int a[],int len);
void digit3(int x);

int main(){
    // Enter CoDe----------------------------------------------------------------------
    int n;
    printf("Enter no of elements in an array\n");
    scanf("%d",&n);
    int arr[n];
    int *ptr = arr;
    for(int i = 0;i<n;i++){
        printf("Enter number for array index[%d]: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The num array is: ");
    PrintArray(arr,n);
    //Smallest & Greatest, Sum----------------------------------------------------------------------
    int *ptrsm = &arr[0], *ptrgt = &arr[0], sum = 0;
    for(int i = 0;i<n;i++){      
        if(*ptrsm > arr[i]){
            ptrsm = &arr[i];
        }
        if(*ptrgt<arr[i]){
            ptrgt = &arr[i];
        }
        sum+= *(ptr+i);
    }
    printf("\nSmallest num is: %d",*ptrsm);
    printf("\nGreatest num is: %d",*ptrgt);
    printf("\nSum of elements is %d\n",sum);
    // digit 3----------------------------------------------------------------------
    for(int i = 0; i<n; i++){
        digit3(*(ptr+i));
    }
    PrintArray(arr,n);                   
    return 0;
}
void digit3(int x){
    int n = x;
    while(n != 0){
        if(n%10 == 3){
            printf("%d ",x);
            return;
        }
        n /= 10;
    }
    return;
}
void PrintArray(int a[],int len){
    printf("\n[ ");
    for(int i=0;i<len;i++){
        printf("%d ",a[i]);
    }
    printf("]\n");
}