#include <stdio.h>
#include <limits.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int *a, int *b, int *c)
{
    if (*b < *c)
        swap(b, c);
    if (*a < *b)
        swap(a, b);
    if (*b < *c)
        swap(b, c);
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    sort(&a, &b, &c);
    printf("%d %d %d", a, b, c);
}