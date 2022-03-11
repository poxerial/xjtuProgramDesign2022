#include <stdio.h>

int main()
{
    double i;
    scanf("%lf", &i);
    double b=0.0;
    if (i<=100000){
        b=0.1*i;
    } else if (i<=200000){
        b=10000+0.075*(i-100000);
    } else if (i<=400000){
        b=17500+0.050*(i-200000);
    } else if (i<=600000){
        b=27500+0.03*(i-400000);
    } else if (i<=1000000){
        b=33500+0.015*(i-600000);
    } else {
        b=39500+0.01*(i-1000000);
    }
    printf("%.2f", b);
    return 0;
}