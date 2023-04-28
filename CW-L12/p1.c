#include <stdio.h>
void OddAnsV2(int a[],int len);
void OddAnsV2(int a[],int len);
void OddAnsV2(int a[],int len);
void OddAnsV2(int a[],int len);

int main(){
    int len;
    printf("Input the length of the array: ");
    scanf("%d",&len);
    int array[len];
    InputArray(array,len);

    OddAns(array,len);

    return 0;
}

void InputArray(int a[],int len){
    for(int i=0; i<len; i++){
        printf("Input %d th digit : ",i+1);
        scanf("%d",&a[i]);
    }
}

void PrintArray(int a[],int len){
    printf("[ ");
    for(int i=0;i<len;i++){
        printf("%d ",a[i]);
    }
    printf("]\n");
}

void OddAns(int a[],int len){
    int sortedarr[len];
    int j=0;
    for(int i=0;i<len;i++){
        if(a[i]%2!=0){
            sortedarr[j]=a[i];
            j++;
        }
    }
    for(int i=0;i<len;i++){
        if(a[i]%2==0){
            sortedarr[j]=a[i];
            j++;
        }
    }
    PrintArray(sortedarr,len);
    OddAnsV2(sortedarr,len);
}

void OddAnsV2(int a[],int len){
    int sortedarr[len];
    int j=0;
    for(int i=0;i<len;i++){
        if(a[i]>0 && a[i]<7){
            sortedarr[j]=a[i];
            j++;
        }
    }
    for(int i=0;i<len;i++){
        if(a[i]>=7){
            sortedarr[j]=a[i];
            j++;
        }
    }
    PrintArray(sortedarr,len);
}