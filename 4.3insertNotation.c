#include <stdio.h>

int main()
{
    char str[20] = "bcfmr";
    char c = '\0';
    scanf("%c", &c);
    for (int i = 0; i <  20 && str[i] != '\0'; i++)
    {
        if (c <= str[i] && c != '\0')
        {
            printf("%c", c);
            c = '\0';
        }
        printf("%c", str[i]);
    }
    if (c)
    {
        printf("%c", c);
    }
    return 0;
}