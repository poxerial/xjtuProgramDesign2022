#include <stdio.h>

int main(){
    int n = 0;
    for (int i = 1,k = 1;i < 11; i++){
        k*=i;
        n+=k;
    }
    printf("1!+2!+3!+...+10!=%d", n);
    return 0;
    }