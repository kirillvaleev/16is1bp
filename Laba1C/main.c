#include <stdio.h>
#include <math.h>

int main()
{
    int x,a;
    float G, F, Y;

    printf("Введите Х:");
    scanf("%i", &x);
    printf("Введите A:");
    scanf("%i-", &a);

    G = 3*(-3*a*a+2*a*x+21*x*x)/(35*a*a+37*a*x+6*x*x);
    F = (float) (1 / cos(3 * a * a + 5 * a * x + 2 * x * x));
    Y = (-12*a*a-4*a*x+x*x+1);

    printf("G = %.4f\nF = %.4f\nY = %.4f", G, F, Y);
    return 0;
};