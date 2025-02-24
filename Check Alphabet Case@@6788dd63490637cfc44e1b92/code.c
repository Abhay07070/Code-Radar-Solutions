#include <stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(a<90){
        printf("Uppercase");
    }
    else if(a>90){
        printf("Lowercase");
    }
    else{
        printf("Lowercase");
    }
    return 0;
}