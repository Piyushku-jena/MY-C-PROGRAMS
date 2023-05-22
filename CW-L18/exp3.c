#include<stdio.h>
void digit3(int);
int main(){
    int n;
    printf("Enter no of elements in an array\n");
    scanf("%d",&n);
    int arr[n];
    int* ptr = arr;
    printf("Enter the elements of the array\n");
    for(int i = 0 ; i< n ; i++){
        scanf("%d",ptr+i);
    }
    printf("The array elements are\n");
    for(int i = 0; i<n; i++){
        printf("%d ",*(ptr+i));
    }
    int small = *ptr,largest = *ptr,sum = *ptr;
    for(int i = 1; i<n ; i++){
        if(small>*(ptr+i)){
            small = *(ptr+i);
        }
        if(largest<*(ptr+i)){
            largest = *(ptr+i);
        }
        sum+= *(ptr+i);
    }
    printf("The Smallest element is: %d\n",small);
    printf("The Largest element is: %d\n",largest);
    printf("The Sum of the elements is: %d\n",sum);
    for(int i = 0; i<n; i++){
        digit3(*(ptr+i));
    }
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