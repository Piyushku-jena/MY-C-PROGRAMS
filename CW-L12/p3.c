#include <stdio.h>
int r,x,y;
void InputMatrix(int m[r][r], int ri);
void OutputMatrix(int m[r][r], int ro);
void BothDiagonalMatrix(int m[r][r], int ro);
void TransposeMatrix(int m[r][r], int n[r][r], int r);

int main(){
    printf("Enter number of row: " );scanf("%d",&r);
    int matrix[r][r];
    int newMatrix[r][r];
    
    InputMatrix(matrix,r);
    printf("Input matrix: \n");
    OutputMatrix(matrix,r);
    TransposeMatrix(matrix,newMatrix,r);
    printf("Custom Transpose Output:\n");
    OutputMatrix(newMatrix,r);
    printf("Diagonal Output:\n");
    BothDiagonalMatrix(newMatrix,r);
    return 0;
}

void InputMatrix(int m[r][r],int ri){
    for(int rr=0;rr<ri;rr++){
        for(int cc=0;cc<ri;cc++){
            printf("Input %d row %d column element: ",rr+1,cc+1);
            scanf("%d",&m[rr][cc]);
            printf("%d\n",m[rr][cc]);
        }
    }
}

void OutputMatrix(int m[r][r],int ro){
    for(int rr=0;rr<ro;rr++){
        for(int cc=0;cc<ro;cc++){
            printf("%2d ",m[rr][cc]);
        }
        printf("\n");
    }
}

void BothDiagonalMatrix(int m[r][r],int ro){
    int x=ro-1;
    for(int i=0; i<ro; i++){
        for(int j=0; j<ro; j++){
            if(i==j || i+j==x){
                printf("%2d ",m[i][j]);
            }else{
                printf("   ");
            }
        }
        printf("\n");
    }
}

void TransposeMatrix(int m[r][r], int n[r][r], int rp){

    int x=rp-1;
    for(int i=0; i<rp; i++){
        for(int j=0; j<rp; j++){
            if(i==0 || j==0|| i==x || j==x){
                n[i][j]=m[j][i];
            }
            else{
                n[i][j]=m[i][j];
            }
        }
        printf("\n");
    }
    
}