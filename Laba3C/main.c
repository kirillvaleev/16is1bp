#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double sx, ex, sa, ea, x, a, G, F, Y, step;
    char Function, off;
    Start:
    printf("Введите начальное значение Х:");
    scanf("%lf", &sx);
    printf("Введите конечное значение Х:");
    scanf("%lf", &ex);
    printf("Введите начальное значение A:");
    scanf("%lf", &sa);
    printf("Введите конечное значение A:");
    scanf("%lf", &ea);
    printf("Введите шаг:");
    scanf("%lf", &step);
    Func:
    printf("Введите название функции(G, F, Y):\n");
    scanf("%s", &Function);

    switch (Function) {
        case 'G':
            for (x = sx; x <= ex; x += step)
                for (a = sa; a <= ea; a += step) {
                    if (fabs(35 * a * a + 37 * a * x + 6 * x * x) >= 0.0001) {
                        G = (3 * (-3 * a * a + 2 * a * x + 21 * x * x) / (35 * a * a + 37 * a * x + 6 * x * x));
                        printf("При Х = %lf, A = %lf, G = %lf\n", x, a, G);
                    } else
                        printf("При X = %lf, A = %lf, функцию вычислить невозможно.\n", x, a);
                }
            break;
        case 'F':
            for (x = sx; x <= ex; x += step)
                for (a = sa; a <= ea; a += step) {
                    if (fabs(cos(3 * a * a + 5 * a * x + 2 * x * x)) >= 0.0001) {
                        F = (1 / cos(3 * a * a + 5 * a * x + 2 * x * x));
                        printf("При Х = %lf, A = %lf, F = %lf\n", x, a, F);
                    } else
                        printf("При X = %lf, A = %lf, функцию вычислить невозможно.\n", x, a);
                }
            break;
        case 'Y':
            for (x = sx; x <= ex; x += step)
                for (a = sa; a <= ea; a += step) {
                    if (fabs(-12 * a * a - 4 * a * x + x * x + 1) <= 1) {
                        Y = acos(-12 * a * a - 4 * a * x + x * x + 1);
                        printf("При Х = %lf, A = %lf, Y = %lf\n", x, a, Y);
                    } else
                        printf("При X = %lf, A = %lf, функцию вычислить невозможно.\n", x, a);
                }
            break;
        default:
            printf("Неправильно выбрана функция.");
            goto Func;
    }
    Off:
    printf("Продолжить работу программы?(y/n)\n");
    scanf("%c", &off);
    switch (off)
    {
        case 'y': goto Start;
        case 'n': exit(0);
        default:
            printf("Неправильно введен ответ.");
            goto Off;
    }
}