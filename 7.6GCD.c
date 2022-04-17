#include <stdio.h>

int GCD(int a, int b)
{
    if (b)
        return a % b == 0 ? b : GCD(b, a % b);
    return a;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", GCD(a, b));
}