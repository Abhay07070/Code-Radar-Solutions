#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i; i=1; i<=n; i++){
        for(int j=1; j<=i){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}