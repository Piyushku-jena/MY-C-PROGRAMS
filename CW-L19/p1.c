#include <stdio.h>

struct Student {
    int roll;
    char name[50];
};

int main(){
    struct Student s1,s2,s3;

    printf("Enter roll number of student 1: ");
    scanf("%d", &s1.roll);
    printf("Enter name of student 1: ");
    scanf(" %[^\n]s", s1.name);
    printf("Enter roll number of student 2: ");
    scanf("%d", &s2.roll);
    printf("Enter name of student 2: ");
    scanf(" %[^\n]s", s2.name);
    printf("Enter roll number of student 3: ");
    scanf("%d", &s3.roll);
    printf("Enter name of student 3: ");
    scanf(" %[^\n]s", s3.name);

    printf("Roll number | Name\n");
    printf("%d | %s\n", s1.roll, s1.name);
    printf("%d | %s\n", s2.roll, s2.name);
    printf("%d | %s\n", s3.roll, s3.name);

    return 0;
}