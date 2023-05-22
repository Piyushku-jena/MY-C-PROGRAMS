#include<stdio.h>
int main(){
    int vowels = 0, consonants = 0, words = 1;
    char str[] = "Today is Thursday";
    printf("The string is: %s\n",str);
    char *ptr = str;
    for(int i = 0 ; *(ptr+i) != '\0' ; i++){
        if(*(ptr+i) == ' '){
            words++;
        }
        else if(*(ptr+i)== 'a' ||*(ptr+i)== 'e' ||*(ptr+i)== 'i' ||*(ptr+i)== 'o' ||*(ptr+i)== 'u' ||*(ptr+i)== 'A' ||*(ptr+i)== 'E' ||*(ptr+i)== 'I' ||*(ptr+i)== 'O' || *(ptr+i) == 'U'){
            vowels++;
        }
        else{
            consonants++;
        }
    }
    printf("Vowels = %d, Consonants = %d, Words = %d\n",vowels,consonants,words);
}