#include <stdio.h>

int slen(const char* str)
{
    int len = 0;
    for (; str[len] != '\0'; len++){}
    return len;
}

int main()
{
    char str[20];
    scanf("%[^\n]", str);
    printf("%d", slen(str));
}