#include <stdio.h>
// #include <string.h>       //Cause string.h hasnt been taught

int main() {
    char name[50];
    int i=0;
    printf("Enter your name: ");
    scanf("%[^\n]s", name);
    // name[strlen(name)] = '\0';
    while(name[i]!='\0'){
        i++;
    }
    printf("Hello, %s!\n", name);
    //printf("The length of your name is %ld.\n", strlen(name));
    printf("The length of your name is %d.\n", i);
    return 0;
}