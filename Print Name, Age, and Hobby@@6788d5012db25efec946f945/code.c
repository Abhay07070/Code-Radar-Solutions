#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char name[50],hobby[100];
    int age;
    scanf("%s %s %d", &name,&hobby,&age);
    printf("Name: %s\nAge: %d\nHobby: %s", name,hobby,age);
    return 0;
}