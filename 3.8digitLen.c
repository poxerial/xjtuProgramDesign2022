#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i = 0;
    for (;n > 0; n /= 10, i++){};
    i=i==0?1:i;
    printf("%d", i);
    return 0;
}