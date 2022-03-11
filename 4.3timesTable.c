#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int B=1;
    for (int i = 1; i <= n; i++){
        if (B){
            B=0;
        } else {
            printf("\n");
        }
        int b = 1;
        for (int j = 1; j <= i; j++){
            if (b){
                b=0;
                printf("%d*%d=%d", i, j, i*j);
            } else {
                printf(" %d*%d=%d", i, j, i*j);
            }
        }
    }
    return 0;
}