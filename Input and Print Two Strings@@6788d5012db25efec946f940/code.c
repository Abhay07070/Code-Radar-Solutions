#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%d", &a);
    printf("You entered: %d",a);
    char b;
    scanf("%d", &b);
    printf("You entered: %d",b);
    return 0;
}