#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int nn = n * n;
    int *a = (int *) malloc(nn * sizeof(int));
    int **m = (int **) malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
    {
        m[i] = a + n * i;
    }
    for (int i = 0; i < nn; i++)
    {
        scanf("%d", a + i);
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += m[i][i];
    }
    printf("%d", sum);
    free(m);
    free(a);
    return 0;
}