#include <stdio.h>
#include <math.h>

int main()
{
    double x, a, G, F, Y;
    char Function;

    printf("Введите Х:");
    scanf("%lf", &x);
    printf("Введите A:");
    scanf("%lf", &a);
    printf("Введите название функции(G, F, Y):\n");


    G = (3*(-3*a*a+2*a*x+21*x*x)/(35*a*a+37*a*x+6*x*x));
    F = (1 / cos(3 * a * a + 5 * a * x + 2 * x * x));
    Y = (-12*a*a-4*a*x+x*x+1);

    printf("G = %.4f\nF = %.4f\nY = %.4f", G, F, Y);
    return 0;
};