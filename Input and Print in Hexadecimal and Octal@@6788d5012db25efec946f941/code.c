#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d %d", &a);
    printf("Hexadecimal: %X\nOctal: %o", a);
    return 0;
}