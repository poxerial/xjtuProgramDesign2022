#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    char *a = (char *) calloc(n, sizeof(char));
    for (int i = 1; i < n; i++)
    {  
        if (a[i] == 0)
        {
            for (int j = 2 * i + 2; j - 1 < n; j += i + 1)
            {
                a[j - 1]=1;
            }        
        }
    }
    for (int i = n, j = 0; i > 1; i--)
    {
        if (a[i - 1] == 0)
        {
            j++;
            if (j % 10 != 0)
            {
                printf("%d ", i);
            }
            else 
            {
                printf("%d\n", i);
            }
        }
    }
    free(a);
    return 0;
}