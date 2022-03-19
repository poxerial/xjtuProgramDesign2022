#include <stdio.h>
#include <ctype.h>

int main()
{
    char s[240] = {0};
    gets(s);
    gets(s + 80);
    gets(s + 160);
    int a[5] = {0};
    for (int i = 0; i < 240; i++)
    {
        if (s[i] == '\0'){}
        else if (isupper(s[i]))
            a[0]++;
        else if (islower(s[i]))
            a[1]++;
        else if (isdigit(s[i]))
            a[2]++;
        else if (isspace(s[i]))
            a[3]++;
        else
            a[4]++;
    }
    printf("%d %d %d %d %d", a[0], a[1], a[2], a[3], a[4]);
    return 0;
}