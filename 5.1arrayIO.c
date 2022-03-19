#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    int *a = (int*)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++){
        scanf("%d", a + i);
    }
    for (int i = 1; i < n; i++)
    {
        if (i % 5){
            printf("%d ", a[n - i]);
        } 
        else
        {
            printf("%d\n", a[n - i]);
        }
    }
    printf("%d", a[0]);
    free(a);
    return 0;
}