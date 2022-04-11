#include <stdio.h>

int GCD(int, int);
int LCM(int, int);

int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d %d",GCD(a, b), LCM(a, b));
    return 0;
}

int GCD(int a, int b){
    int i=2;
    for (;a%i != 0||b%i!=0; i++){
        if (i>(a>b?a:b)){
            return 1;
        }
    }
    return i*GCD(a/i, b/i);
}

int LCM(int a, int b){
    int i=a>b?a:b;
    for (;i%a!=0||i%b!=0;i++){}
    return i;
}