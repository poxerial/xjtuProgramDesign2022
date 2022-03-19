#include <stdio.h>
#define STR_LEN_MAX 20

int main()
{
    char a[STR_LEN_MAX] = {0};
    char b[STR_LEN_MAX] = {0};
    scanf("%s", a);
    scanf("%s", b);
    for (int i = 0; i < STR_LEN_MAX &&
     (a[i] != '\0' || b[i] != '\0'); i++)
    {
        if (a[i] > b[i]){
            printf("1");
            return 0;
        }
        else if (a[i] < b[i])
        {
            printf("-1");
            return 0;
        }
    }
    printf("0");
    return 0;
}