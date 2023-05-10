#include <stdio.h>
// #include <string.h>

int main() {
    char str1[50], str2[50];
    int i = 0, flag = 0;

    printf("Enter the first string: ");
    scanf(" %[^\n]s", str1);

    printf("Enter the second string: ");
    scanf(" %[^\n]s", str2);

    // compare each character in the strings
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            flag = 1;
            break;
        }
        i++;
    }

    // check if strings are equal or not
    if (flag == 0 && str1[i] == '\0' && str2[i] == '\0') {
        printf("1");
    } else {
        printf("0");
    }

    return 0;
}

