#include<stdio.h>
int r,c;
void InputArray (int a[r][c]);
void PrintArray(int a[r][c]);
void AddSum(int a[r][c]);
int main(){
    printf("Enter the row and column: ");
    scanf("%d %d",&r,&c);
    int m[r][c];
    InputArray(m);
    AddSum(m);
    return 0;
}
void InputArray (int a[r][c]){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("Enter %d%d th element: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}
void PrintArray(int a[r][c]){
    r++;
    int x=r-1;
    int y=c-1;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(i==0 || j==0|| i==x || j==y){
                printf("%d ",a[i][j]);
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}
void AddSum(int a[r][c]){
    int EditArray[++r][c];
    int sum=0;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            EditArray[i][j]= a[i][j];
        }
    }
    r--;
    for(int i=0; i<c; i++){
        sum=0;
        for(int j=0; j<r; j++){
            sum+=a[j][i];
        }
        EditArray[r][i]=sum;
    }
    PrintArray(EditArray);
}
