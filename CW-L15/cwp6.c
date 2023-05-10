#include<stdio.h>
int main(){
    char str[50] = "";
    int lower=0, upper=0;

    printf("Input the string: ");
    scanf(" %[^\n]s",str);
    int vowels = 0, consonants = 0, words = 1;
    for(int i = 0 ; str[i] != '\0' ; i++){
       if( str[i] >= 65 && str[i] <= 90 ){
        upper++;
        str[i]+=32;
       } else if( str[i] >= 97 && str[i] <= 122 ){
        lower++;
        str[i]-=32;
       }
    }
    printf("Uppercase: %d \nLowercase: %d \n",upper,lower);

}