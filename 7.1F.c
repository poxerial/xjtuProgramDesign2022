#include <stdio.h>

int F(int a)
{
    if (a <= 2)
        return 1;
    return F(a - 1) + F(a - 2);
}

int main()
{
    int n;
    scanf("%d", &n);
    if (n <= 0)
        printf("ERROR");
    else
        printf("%d", F(n));
}
