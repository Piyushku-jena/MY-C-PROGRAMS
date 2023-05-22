#include<stdio.h>
int main(){
    char str[] = "Today is Thursday";
    int len = sizeof(str)-1;
    char *ptr = str;
    char temp;
    for(int i = 0; i<len/2; i++){
        temp = *(ptr+i);
        *(ptr+i) = *(ptr+(len-1-i));
        *(ptr+(len-i-1)) = temp;
    }
    printf("The New String is\n%s",str);
}