#include<stdio.h>
int main(){
    char name[50]; int r=0;
    printf("Enter your name: ");
    scanf("%[^\n]s",&name);
    // for(int i=0;i<17;i++){
    //     scanf("%[^\n]c",&name[i]);
    // }
    while(name[r]!='\0'){
        r++;
    }
    for(int i=0;i<r;i++){
        printf("%c\n",name[i]);
    }
        printf("The length of your name is %d.\n", r);

}