#include <stdio.h>
#include <math.h>

int main()
{
    double c;
    scanf("%lf", &c);

    double r_1, r_2, r_3, r_4, r_5;

    r_1 = c * (0.03 * 5 + 1);
    r_2 = c * (0.021 * 2 + 1) * (0.0275 * 3 + 1);  
    r_3 = c * (0.0275 * 3 + 1) * (0.021 * 2 + 1);
    r_4 = c * pow(1.015, 5);
    r_5 = c * pow(1.0 + 0.0035 / 4, 5 * 4);

    printf("%f %f %f %f %f", r_1, r_2, r_3, r_4, r_5);
    return 0;
}