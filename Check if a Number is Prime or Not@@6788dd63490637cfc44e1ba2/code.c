#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a%a==0 && a%1==0 || a>1){
        printf("Prime");
    }
    else if(a==9){
        printf("Not Prime");
    }
    else if(a==4){
        printf("Not Prinme");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}