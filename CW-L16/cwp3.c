#include <stdio.h>
void IdentifyWords(char str1[], int r);
void Swappa(char str1[],int starter,int count);

int main(){
    char str1[60];
    int i=0;
    printf("Enter a sentence: ");
    scanf(" %[^\n]s", str1);
    while(str1[i]!='\0'){
        i++;
    }
    IdentifyWords(str1,i);
    printf("%s\n", str1);
}
void IdentifyWords(char str1[],int r){
    int count=0, starter=0;
    for(int i=0;i<=r;i++){
        if(str1[i]!=' ' && str1[i]!='\0'){
            count++;
        }else{
            Swappa(str1,starter,count);
            count++;
            starter +=count;
            count=0;
        }
    }
}
void Swappa(char str1[],int starter,int count){
    for (int i=0 ; i<count/2 ; i++){
        char temp=str1[starter+i];
        str1[starter+i]=str1[starter+count-i-1];
        str1[starter+count-i-1]=temp;
    }
}





