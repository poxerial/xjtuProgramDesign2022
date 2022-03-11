#include <stdio.h>
 
 int main()
{
    int g;
    scanf("%d", &g);
    char c;
    if (g>=90)
    {
        c='A';
    }
    else if (g>=80)
    {
        c='B';
    }
    else if (g>=70)
    {
        c='C';
    }
    else if (g>=60)
    {
        c='D';
    }
    else 
    {
        c='E';
    }
    printf("%c",c);
    return 0;
}