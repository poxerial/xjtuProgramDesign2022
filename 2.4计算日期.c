#include <stdio.h>
#include <limits.h>

#define DATE_MAX_LEN 10

int strtoi(char*, char*);

int main()
{
    char s[DATE_MAX_LEN] = {0};
    scanf("%s", s);
    int n = 0;
    for (; s[n] != '\0'; n++){};
    int y, m, d;
    y = strtoi(s, s + n - 4);
    m = strtoi(s + n - 4, s + n - 2);
    d = strtoi(s + n - 2, s + n);

    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int rst = 0;
    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0 && m >= 3)
    {
        ++rst;
    }
    for (; m > 1; m--)
    {
        rst += days[m - 2];
    }
    printf("%d", rst);
    return 0;
}

int strtoi(char *begin, char *end)
{
    if (end - begin >= 10 || end[-1] > '9' || end[-1] < '0')
    {
        return INT_MIN;
    } 
    else if (begin == end)
    {
        return 0;
    }
    else 
    {
        return end[-1] - '0' + 10 * strtoi(begin, end - 1);
    }
}