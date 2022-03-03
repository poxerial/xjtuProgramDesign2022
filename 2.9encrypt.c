#include <stdio.h>

int main()
{
    char s[5] = {0};
    int k;
    scanf("%s %d", s, &k);
    for (int i = 0; i < 4; i++) {s[i] = (s[i] + k - 'a') % 26 + 'a';}
    printf("%s", s);
    return 0;
}