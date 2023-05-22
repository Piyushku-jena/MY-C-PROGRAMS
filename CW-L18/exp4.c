#include<stdio.h>
int main(){
    char str[] = "Today is Thursday";
    char *ptr = str;
    for(int i = 0; *(ptr+i) != '\0'; i++ ){
        if(*(ptr+i) >= 65 && *(ptr+i)<= 90){
            *(ptr+i) += 32;
        }
        else if(*(ptr+i)>= 97 && *(ptr+i) <= 122){
            *(ptr+i) -= 32;
        }
    }
    printf("The New String is\n%s",str);
}