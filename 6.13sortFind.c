#include <stdio.h>

int main()
{
    
    int a[100] = {0};
    int n = 0;
    do{
        int k = 0;
        scanf("%d", &k);
        a[n++] = k;
    } while(a[n - 1] != -9999);
    int s[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", s + i);
    }
    for (int i = n - 1; i > 1; i--)
        for (int j = 1; j < i; j++)
        {
            if (a[j - 1] > a[j]){
                int temp = a[j - 1];
                a[j - 1] = a[j];
                a[j] = temp;
            }
        }
    for (int i = 0; i < 5; i++)
    {
        int l = 0;
        int r = n - 2;
        for (;;)
        {
            int j = (l + r) / 2;
            if (s[i] == a[j])
            {
                s[i] = j;
                break;
            }
            else if (l >= r)
            {
                s[i] = -1;
                break;
            }
            else if (s[i] < a[j])
            {
                r = j - 1;
            }
            else
            {
                l = j + 1;
            }
        }
    }
    printf("%d", s[0]);
    for (int i = 1; i < 5; i++)
    {
        printf("\n%d", s[i]);
    }
}