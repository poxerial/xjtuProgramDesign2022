#include <stdio.h>

int findint(char *s, int *a)
{
    int i = 0;
    int num = 0;
    int temp = -1;
    for (; s[i - 1 > 0 ? i - 1 : 0] != '\0'; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            if (temp < 0)
                temp = 0;
            temp = temp * 10 + s[i] - '0';
        }
        else 
        {
            if (temp > -1)
            {
                a[num++] = temp;
            }
            temp = -1;
        }
    }
    return num;
}

int main()
{
    char s[100];
    int a[100];
    scanf("%[^\n]", s);
    int num = findint(s, a);
    if (num)
        printf("%d", a[num - 1]);
    for (int i = num - 2; i >= 0; i--)
    {
        printf(",%d", a[i]);
    }
}