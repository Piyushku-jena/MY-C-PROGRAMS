#include <stdio.h>

int main() {
    char str1[60];
    int i=0;

    printf("Enter your name: ");
    scanf("%[^\n]s", str1);
    printf("Hello, %s!\n", str1);


    while(str1[i]!='\0'){
        i++;
    }
    printf("The length of your name is %d.\n", i);


    char str2[i];

    for(int j=0;j<i;j++){
        str2[j]=str1[i-1-j];
    }

    printf("%s\n", str2);
    printf("The length is %d.\n", i);
    return 0;
}