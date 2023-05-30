#include <stdio.h>

struct Student {
    int roll;
    char name[50];
};
int main() {
    int num, r;
    printf("Input number of students: ");
    scanf("%d", &num);
    struct Student arr[num];
    // printf("Input starting roll number: ");
    scanf("%d",&r);
    for (int i = 0; i < num; i++) {
        printf("Input roll number: ");
        scanf(" %d", arr[i].roll);
        printf("Input name (%d): ",arr[i].roll);
        scanf(" %[^\n]s", arr[i].name);
    }
    // for (int i = 0; i < num; i++) {
    //     arr[i].roll = r + i;
    //     printf("Input name (%d): ",arr[i].roll);
    //     scanf(" %[^\n]s", arr[i].name);
    // }
    printf("Roll Number\tName\n");
    for (int i = 0; i < num; i++) {
        printf("%d  |  %s\n", arr[i].roll, arr[i].name);
    }
}