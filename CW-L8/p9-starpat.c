//     *
//    * * 
//   * * *
//  * * * *
// * * * * *
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the value for n: ");
    scanf("%d",&n);
    printf("print starting number: ");scanf("%d",&i);

    for (i; i<=n;i++)
    {
        for(int j =n-i; j>=1; j--)
        {
            printf(" ");
        }
        for (int k=1; k<=i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}