#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void fun(int *a, int n)
{
    if (n <= 1)
        return;
    int k = a[n - 1];
    int left = 0;
    int i = 0;
    for (; i < n - 1; i++)
    {
        if (a[i] > k)
        {
            swap(&a[i], &a[left]);
            left++;
        }
    }
    swap(&a[left], &a[n - 1]);
    fun(a, left);
    fun(a + left + 1, n - left - 1);
}

int main()
{
    int a[5] = {0};
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", a + i);
    }
    fun(a, 5);
    printf("%d", a[0]);
    for (int i = 1; i < 5; i++)
    {
        printf(",%d", a[i]);
    }
}