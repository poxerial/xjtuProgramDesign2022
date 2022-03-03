#include <stdio.h>
#include <ctype.h>

int main()
{
    char s[5] = {0};
    scanf("%s", s);
    for (int i = 0; i < 4; i++) {s[i] = toupper(s[i]);}
    printf("%s", s);
    return 0;
}