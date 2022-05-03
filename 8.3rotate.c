#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rotate(int *a, size_t size, int n)
{
    if (n < 0)
        return;
    n %= size;
    int *temp = (int *)alloca(sizeof(int) * (size - n));
    memcpy(temp, a + size - n, sizeof(int) * n);
    memmove(a + n, a, sizeof(int) * (size - n));
    memcpy(a, temp, sizeof(int) * n);
}

int main()
{
    size_t size = 0;
    int n;
    int a[100];
    do
    {
        scanf("%d", a + size);
        size++;
    } while (a[size - 1] != 9999);
    size--;
    scanf("%d", &n);
    rotate(a, size, n);
    printf("%d", a[0]);
    for (int i = 1; i < size; i++)
    {
        printf(" %d", a[i]);
    }
}