#include <stdio.h>

int main(){
    char name[]="Piyush Kumar Jena";
    for(int i=0;name[i]!='\0';i++){
	printf("%d %c\n",i,name[i]);
    }
    return 0;
}

// int main(){
//     // char name[]="Piyush Kumar Jena";
//         char name[50];
//     int i=0;
//     printf("Enter your name: ");
//     scanf("%[^\n]s", name);
//     while(name[i]!='\0'){
//         i++;
//     }
//     printf("Length: %d\n",i);

//     for(int j=0;name[j]!='\0';j++){
// 	printf("%c",name[j]);
//     }
//     // printf("%s ",str);
//     return 0;
// }
