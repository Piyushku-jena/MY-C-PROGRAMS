#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50], input[100];

    printf("Enter the first string: ");
    scanf(" %[^\\n]s", str1);

    printf("Enter the second string: ");
    scanf(" %[^\\n]s", str2);

    sprintf(input, "%s%s", str1, str2);

    printf("The concatenated string is: %s", input);
    return 0;
}