#include <stdio.h>

int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (c<a || c<b)
    {
        int temp = a;
        a=c;
        c=temp;
    }
    if (d<a || d<b)
    {
        int temp = b;
        b=d;
        d=temp;
    }
    printf("%d %d %d %d", a<b?a:b, a<b?b:a, c<d?c:d,c<d?d:c);
    return 0;
}