#include <stdio.h>

int strcmp(const char *a, const char *b)
{
    int i = 0;
    for (; a[i] != '\0' && b[i] != '\0'; i++)
    {
        if (a[i] > b[i])
            return 1;
        else if (a[i] < b[i])
            return -1;
    }
    if (a[i] == '\0' && b[i] != '\0')
        return -1;
    if (a[i] != '\0' && b[i] != '\0')
        return 1;
    return 0;
}

int main()
{
    char a[20];
    char b[20];
    scanf("%s\n%s", a, b);
    printf("%d", strcmp(a, b));
}