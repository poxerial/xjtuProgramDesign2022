#include <stdio.h>

int main()
{
    char a[100] = {0}, b[100] = {0};
    gets(a);
    for (int i = 0; i < 100; i++)
    {
        if (a[i] != '\0')
            b[i] = a[i];
        else
        {
            printf("%s", b);
            return 0;
        }
    }
    return 0;
}