#include <stdio.h>

void itostr(int n)
{
    if (n < 10)
        printf("%d", n);
    else
    {
        printf("%d", n % 10);
        itostr(n / 10);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    itostr(n);
}