#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[10] = {0};
    char c;
    int i = 0;
    do{
        c = getchar();
        if (isupper(c))
        {
            str[i] = c;
            i++;
        } 
    } while (c != '\n');
    str[i]='\n';
    printf("%s", str);
}