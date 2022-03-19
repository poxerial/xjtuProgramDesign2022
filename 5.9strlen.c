#include <stdio.h>

int main()
{
    char s[100] = {0};
    gets(s);
    for (int i = 0; i < 100; i++)
    {
        if (s[i] == '\0')
        {
            printf("%d", i);
            return 0;
        }
    }
    return 0;
}