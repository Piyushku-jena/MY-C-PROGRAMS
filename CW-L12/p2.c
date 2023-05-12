#include <stdio.h>
int r,c;
void InputMatrix(int m[r][c], int ri, int ci);
void OutputMatrix(int m[r][c], int ro, int co);
void OutputMatrixS(int m[r][c], int ro, int co);
void ProcessMatrixA(int m[r][c], int n[r+1][c], int r, int c);

int main(){
    printf("Enter number of row: " );scanf("%d",&r);
    printf("Enter number of column: " );scanf("%d",&c);
    int matrix[r][c];
    int newMatrix[r+1][c];
    
    InputMatrix(matrix,r,c);
    printf("Input matrix: \n");
    OutputMatrix(matrix,r,c);
    printf("Process:\n");
    ProcessMatrixA(matrix,newMatrix,r,c);
    printf("First Output:\n");
    OutputMatrix(newMatrix,r+1,c);
    printf("Second Output:\n");
    OutputMatrixS(newMatrix,r+1,c);
    return 0;
}

void InputMatrix(int m[r][c],int ri,int ci){
    for(int rr=0;rr<ri;rr++){
        for(int cc=0;cc<ci;cc++){
            printf("Input %d row %d column element: ",rr+1,cc+1);
            scanf("%d",&m[rr][cc]);
            printf("%d\n",m[rr][cc]);
        }
    }
}

void OutputMatrix(int m[r][c],int ro,int co){
    for(int rr=0;rr<ro;rr++){
        for(int cc=0;cc<co;cc++){
            printf("%2d ",m[rr][cc]);
        }
        printf("\n");
    }
}

void OutputMatrixS(int m[r][c],int ro,int co){
    int x=ro-1;
    int y=co-1;
    for(int i=0; i<ro; i++){
        for(int j=0; j<co; j++){
            if(i==0 || j==0|| i==x || j==y){
                printf("%2d ",m[i][j]);
            }else{
                printf("   ");
            }
        }
        printf("\n");
    }
}

void ProcessMatrixA(int m[r][c], int n[r+1][c], int r, int c){
    int sum;

    for (int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            n[i][j]=m[i][j];
        }
    }
    
    for(int i=0 ; i<c ; i++){
        sum=0;
        for(int j=0 ; j<r ; j++){
            int c=m[j][i];
            sum+=c;
        }
        n[r][i]=sum;
        printf("r%d c%d = %d\n",r+1,i+1,n[r][i]);
    }
    
}