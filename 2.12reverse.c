#include <stdio.h>
#include <math.h>// compile with "-lm" to link with the math library

int main()
{
    int n;
    scanf("%d", &n);
    int m = 0;
    for (int i = 0; i < 4; i++)
    {
        m += (n % 10) * pow(10.0, 3.0 - i);
        n /= 10;
    }
    m *= 2;
    printf("%d", m);
    return 0;
}