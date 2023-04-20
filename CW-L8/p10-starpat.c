//       *
//     * *
//   * * *
// * * * *
//       * * * *
//       * * *
//       * *
//       *

#include <stdio.h>
int main()
{
    int row, i, s;
    printf("Starting row number: ");scanf("%d", &s);
    printf("Ending row number: ");scanf("%d", &row);

    for (i=s; i<=row; i++){
        for (int j =row-i; j>0; j--){
            printf("  ");
        }
        for (int k=1; k<=i; k++){
            printf("* ");
        }
        printf("\n");
    }
    for (i=s; i <= row; i++){
        for (int j = 1; j <=2*(row)-2 ; j++){
            printf(" ");
        }
        for(int k=(row); k>=i; k--){
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}