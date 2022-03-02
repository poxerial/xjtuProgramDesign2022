#include <stdio.h>

#define NAME_MAX_LEN 20

int main()
{
    char* s[NAME_MAX_LEN] = {0};
    scanf("%s", s);
    printf("Hello %s", s);
    return 0;
}