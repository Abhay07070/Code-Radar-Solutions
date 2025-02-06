#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    char b;
    scanf("%d", &a);
    printf("You entered: %d",a);
    scanf("%d", &b);
    printf("You entered: %d",b);
    return 0;
}