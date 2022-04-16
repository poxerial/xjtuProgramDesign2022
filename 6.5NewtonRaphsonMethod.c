#include <stdio.h>

float f(float x)
{
    return x * x * x + 2 * x * x + 3 * x + 4;
}

float f_prime(float x)
{
    return 3 * x * x + 4 * x + 3;
}

int main()
{
    float x, n;
    scanf("%f %f", &x, &n);
    for (int i = 0; i < n; i++)
    {
        float fx = f(x);
        float f_primex = f_prime(x);
        x -= fx / f_primex;
    }
    printf("%f", x);
}