#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


int main()
{
    unsigned long m, n;
    scanf("%lu %lu", &m, &n);
    int * mat = NULL;
    mat =  (int *) malloc(m * n * sizeof(int));
    if (!mat)
    {
        printf("mat:%x", mat);
        return 1;
    }
    for (unsigned long i = 0; i < m; i++)
        for (unsigned long j = 0; j < n; j++)
        {
            scanf("%d", &mat[n * i + j]);
        }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (j != m - 1)
            {
                printf("%d ", mat[j * n + n - 1 - i]);
            }
            else if (i != n - 1)
            {
                printf("%d\n", mat[j * n + n - 1 - i]);
            }
            else 
            {
                printf("%d", mat[j * n + n - 1 - i]);
            }
        }
    }
    free(mat);
}