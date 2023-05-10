#include<stdio.h>
int main(){
    char str[50] = "";
    printf("Input the string:");
    scanf(" %[^\n]s",str);
    int vowels = 0, consonants = 0, words = 1;
    for(int i = 0 ; str[i] != '\0' ; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||str[i] == 'U'){
            vowels++;
        } else if(str[i] != ' '){
            consonants++;
        } else if(str[i] == ' '){
            words++;
        }
    }
    printf("Vowels = %d\n",vowels);
    printf("Consonants = %d\n", consonants);
    printf("Words = %d\n",words);
}