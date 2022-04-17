#include <stdio.h>

int main()
{
    char str[30] = {0};
    scanf("%[^-]", str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        int a = str[i] - '0';
        if (a == ' ' - '0')
        {
            printf(" ");
            continue;
        }        
        int b = str[i + 1] - '0';
        int ab = a * 10 + b;
        if (b < 0 || ab >= 26 || str[i + 1] == '\0')
        {
            printf("%c", (char)a + 'A');
            continue;
        }
        printf("%c", (char)a * 10 + b + 'A');
        i++;
    }
}