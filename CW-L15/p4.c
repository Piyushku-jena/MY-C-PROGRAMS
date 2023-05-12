#include <stdio.h>
int main()
{
    int num, num2, space=0;
    char str[200], str_temp[200], final[200];
    printf("Enter the String: ");
    scanf("%[^\n]s",str);
    int rotate;
    printf("Enter the number of rotations: ");
    scanf("%d",&rotate);
    for (int i=0; str[i]!='\0'; i++){
        if (str[i]==' '){
            space++;
        }
        if (space < rotate){
            str_temp[i]=str[i];
            num=i+1;
        } else {
            num2=i-num;
            final[num2]=str[i];
            printf("%c",final[num2]);
        }
    }

    for (int i=0; str_temp[i]!='\0'; i++){
        printf("%c",str_temp[i]);
        final[num2+2+i]=str_temp[i];
    }

    for (int i=0; final[i]='\0';i++){
        printf("%c",final[i]);
    }
}