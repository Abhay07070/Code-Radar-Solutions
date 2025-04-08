#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(1<=a<=100){
        printf("In range");
    }
    else{
        printf("Out of range");
    }
    return 0;
}