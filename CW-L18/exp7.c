#include<stdio.h>
int main(){
    char str[] = "Today is Thursday";
    char *ptr = str;
    int n = 0;
    int temp;
    while(*(ptr+n) != ' '){
        n++;
    }
    for(int i = 0 ; i<(n-1)/2; i++){
        temp = *(ptr+i);
        *(ptr+i) = *(ptr+n-1-i);
        *(ptr+n-1-i) = temp;
    }
    printf("New String is:\n%s\n",str);
}