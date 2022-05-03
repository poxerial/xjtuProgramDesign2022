#include <stdio.h>
#include <stdlib.h>

void swap(char **a, char **b)
{
    char *temp = *a;
    *a = *b;
    *b = temp;
}

int chcmp(char a, char b)
{
    if (a < 'Z')
        a = a - 'A' + 'a';
    if (b < 'Z')
        b = b - 'A' + 'a';
    return a > b;
}

int strcmp(const char *a, const char *b)
{
    int i = 0;
    for (; a[i] != '\0' && b[i] != '\0'; i++)
    {
        if (chcmp(a[i], b[i]))
            return 1;
        else if (chcmp(b[i], a[i]))
            return -1;
    }
    if (a[i] == '\0' && b[i] != '\0')
        return -1;
    if (a[i] != '\0' && b[i] != '\0')
        return 1;
    return 0;
}

void sortstring(char **a, int n)
{
    if (n <= 1)
        return;
    char * k = a[n - 1];
    int left = 0;
    int i = 0;
    for (; i < n - 1; i++)
    {
        if (strcmp(a[i], k) == -1)
        {
            swap(&a[i], &a[left]);
            left++;
        }
    }
    swap(&a[left], &a[n - 1]);
    sortstring(a, left);
    sortstring(a + left + 1, n - left - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    char **strs = (char **)malloc(sizeof(char *) * n);
    for (int i = 0; i < n; i++)
    {
        strs[i] = (char *)malloc(sizeof(char) * 20);
        scanf("%s", strs[i]);
    }
    sortstring(strs, n);
    printf("%s", strs[0]);
    free(strs[0]);
    for (int i = 1; i < n; i++)
    {
        printf("\n%s", strs[i]);
        free(strs[i]);
    }
    free(strs);
}