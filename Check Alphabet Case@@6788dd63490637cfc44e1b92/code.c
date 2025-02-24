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
        printf("Not an alphabet");
    }
    return 0;
}