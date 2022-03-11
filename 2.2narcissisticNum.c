#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    int a_1=a%10;
    int a_2=(a/10)%10;
    int a_3=a/100;
    if (a==a_1*a_1*a_1+a_2*a_2*a_2+a_3*a_3*a_3)
    {
        printf("%d is a narcissistic number", a);
    } else {
        printf("%d is not a narcissistic number", a);
    }
    return 0;
}