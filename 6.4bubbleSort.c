#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int *a = (int *) alloca(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", a + i);
    }
    for (int i = n ; i > 1; i--)
    {
        for (int j = 1; j < i; j++)
        {
            if (a[j - 1] > a[j])
            {
                int temp = a[j - 1];
                a[j - 1] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("%d", a[0]);
    for (int i = 1; i < n; i++)
    {
        printf(" %d", a[i]);
    }
}