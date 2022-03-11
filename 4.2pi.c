#include<stdio.h>

int main(){
    double eps;
    scanf("%lf" ,&eps);
    double pi = 0.0;
    int b = 1;
    for (int i = 1; eps <= 1.0 / (2*i - 1); i++){
        pi += b * 4.0 / (2*i - 1);
        b*=-1;
    }
    printf("%.8lf", pi);
}