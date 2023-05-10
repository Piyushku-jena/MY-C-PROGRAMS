#include <stdio.h>


int rec1(int s,int e);

int main(){
    int starter,ender;
    printf("Starting number: ");
    scanf("%d",&starter);
    printf("Ender: ");
    scanf("%d",&ender);
    printf("%d\n",starter);
    printf("%d\n",rec1(starter,ender));
}

int rec1(int s,int e){
    if(e==s){
        return e;
    }
    int x=e+rec1(s,e-1);
    printf("%d\n",x);
    return x;
}

