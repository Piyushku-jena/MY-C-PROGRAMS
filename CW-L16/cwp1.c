#include <stdio.h>
void function(char[]);
int main(){ 
     function("Today is monday");
     return 0;
}

void function(char name[]){
     printf("%s",name);
}