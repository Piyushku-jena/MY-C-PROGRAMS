#include <stdio.h>
int main() {
    char alpha;
    printf("Enter an alphabet: ");
    scanf("%c",&alpha);


    
    switch (alpha) {
        case 'a':
        printf("%c is a vowel",alpha);
        break;
        case 'e':
        printf("%c is a vowel",alpha);
        break;
        case 'i':
        printf("%c is a vowel",alpha);
        break;
        case 'o':
        printf("%c is a vowel",alpha);
        break;
        case 'u':
        printf("%c is a vowel",alpha);
        break;
        default:
        printf("%c is a consonant",alpha);
    }
}