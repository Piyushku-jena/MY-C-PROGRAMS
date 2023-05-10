#include <stdio.h>
int main(){
    char name[17];
    name[0]='P';
    name[1]='i';
    name[2]='y';
    name[3]='u';
    name[4]='s';
    name[5]='h';
    name[6]=' ';
    name[7]='K';
    name[8]='u';
    name[9]='m';
    name[10]='a';
    name[11]='r';
    name[12]=' ';
    name[13]='J';
    name[14]='e';
    name[15]='n';
    name[16]='a';
    for(int i=0;i<17;i++){
        printf("%c",name[i]);
    }
}