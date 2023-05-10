#include <stdio.h>

int main() {
    char str1[]="ABC";
    char str2[]="XYZ";
    char str3[60];
    int i=0, j=0;

    while(str1[i]!=0){
        str3[i]=str1[i];
        i++;
    }
    while(str2[j]!=0){
        str3[i]=str2[j];
        i++;
        j++;
    }


    printf("%s\n", str3);
    //printf("The length of your name is %ld.\n", strlen(name));
    printf("The length is %d.\n", i);
    return 0;
}