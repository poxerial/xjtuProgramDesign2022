#include <stdio.h>
 
int C(int n, int m)
{
    if (n > m)
        return 0;
    else if (n == 0 || n == m)
        return 1;
    else 
        return C(n - 1, m - 1) + C(n, m - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j <= i; j++)
            if (i == j)
                if (i == n)
                    printf("%d", C(j, i));
                else
                    printf("%d\n", C(j, i));
            else 
                printf("%d ", C(j, i));
    return 0;
}