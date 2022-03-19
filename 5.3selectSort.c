#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    int *a=(int *) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", a + i);
    }
    for (int i = 0; i < n; i++)
    {
        int argsMax = i;
        for (int j = i; j < n; j++)
        {
            if (a[j] > a[argsMax])
                argsMax = j;
        }
        int temp = a[argsMax];
        a[argsMax] = a[i];
        a[i] = temp;
    }
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", a[i]);
    }
    printf("%d", a[n - 1]);
    free(a);
    return 0;
}