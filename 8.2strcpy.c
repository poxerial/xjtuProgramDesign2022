#include <stdio.h>
#include <string.h>

char * copykn(char *s1,char *s2,int n,int k)
{
    n--;
    s1 = s1 + n;
    int i = 0;
    for (; s1[i] != '\0' && i < k; i++)
    {
        s2[i] = s1[i];
    }
    s2[i] = '\0';
    return s2;
}

int main()
{
char s1[100],s2[100];
int n,k;
gets(s1);
scanf("%d %d",&n,&k);
puts(copykn(s1,s2,n,k));
return 0;
}