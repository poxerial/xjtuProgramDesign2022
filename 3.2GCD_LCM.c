#include <stdio.h>

int GCD(int, int);
int LCM(int, int);

int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    printf("最大公约数为%d\n", GCD(a, b));
    printf("最小公倍数为%d", LCM(a, b));
    return 0;
}

int GCD(int a, int b){
    if (b)
        while ((a %= b) && (b %= a));
    return a + b;
}

int LCM(int a, int b){
    return a * b / GCD(a, b);
}