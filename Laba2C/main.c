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
    Func:
    printf("Введите название функции(G, F, Y):\n");
    scanf("%s", &Function);

    switch (Function) {
        case 'G':
            if (fabs(35 * a * a + 37 * a * x + 6 * x * x) >= 0.0001)
            {
                G = (3 * (-3 * a * a + 2 * a * x + 21 * x * x) / (35 * a * a + 37 * a * x + 6 * x * x));
                printf("G = %lf", G);
            }
            else
                printf("Невозможно вычислить функцию при данных значениях.");
            break;
        case 'F':
            if (fabs(cos(3 * a * a + 5 * a * x + 2 * x * x)) >= 0.0001)
            {
                F = (1 / cos(3 * a * a + 5 * a * x + 2 * x * x));
                printf("F = %lf", F);
            }
            else
                printf("Невозможно вычислить функцию при данных значениях.");
            break;
        case 'Y':
            if (fabs(-12 * a * a - 4 * a * x + x * x + 1) <= 1)
            {
                Y = acos(-12*a*a-4*a*x+x*x+1);
                printf("Y = %lf", Y);
            }
            else
                printf("Невозможно вычислить функцию при данных значениях.");
            break;
        default:
            printf("Неправильно выбрана функция.");
            goto Func;
    }
    return 0;
};