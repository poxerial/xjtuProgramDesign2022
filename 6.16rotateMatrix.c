#include <stdio.h>
#include <stdlib.h>

void rMat(int **mat, size_t m, size_t n)
{
    size_t center_m = (m - 1) / 2;
    size_t center_n = (n - 1) / 2;
    for (size_t i = 0; i < center_m; i++)
        for (size_t j = 0; j < center_n; j++)
        {
            int temp = mat[i][j];
            mat[i][j] = mat[i][n - 1 - j];
            mat[i][n - 1 - j] = mat[m - 1 - i][n - 1 - i];
            mat[m - 1 - i][j] = temp;
        }
}

int main()
{
    size_t m, n;
    scanf("%d %d", &m, &n);
    int **mat = (int **)alloca(m * sizeof(int *));
    for (int i = 0; i < m; i++)
    {
        mat[i] = (int *)alloca(n * sizeof(int));
    }
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    rMat(mat, m, n);
    int i = 1;
    for (; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != m - 1 && j != n - 1)
            {
                printf("%d ", mat[i][j]);
            }
            else if (i != m - 1)
            {
                printf("%d\n", mat[i][j]);
            }
            else 
            {
                printf("%d", mat[i][j]);
            }
        }
    }
}