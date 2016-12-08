#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double sx, ex, x, a, G, F, Y, number_step, step, start_result, end_result;
    char Function, off;
    Start:
    printf("Введите начальное значение Х:");
    scanf("%lf", &sx);
    printf("Введите конечное значение Х:");
    scanf("%lf", &ex);
    printf("Введите значение A:");
    scanf("%lf", &a);
    printf("Введите размер шага:");
    scanf("%lf", &step);
    Func:
    printf("Введите название функции(G, F, Y):\n");
    scanf("%s", &Function);

    switch (Function) {
        case 'G':
            start_result = (3 * (-3 * a * a + 2 * a * (sx-1) + 21 * (sx-1) * (sx-1)) / (35 * a * a + 37 * a * (sx-1) + 6 * (sx-1) * (sx-1)));
            for (x = sx; x <= ex; x+=step)
                if (fabs(35 * a * a + 37 * a * x + 6 * x * x) >= 0.0001) {
                    G = (3 * (-3 * a * a + 2 * a * x + 21 * x * x) / (35 * a * a + 37 * a * x + 6 * x * x));
                    printf("При Х = %lf, A = %lf, G = %lf (step = %lf)\n", x, a, G, step);
                    end_result = G;
                    if ((fabs(end_result - start_result)>=1) && (step >= 0.1))
                        step = step/2;
                    if ((fabs(end_result - start_result)<=0.3) && (step <= 2))
                        step = step*2;
                    start_result = G;
                } else
                    printf("При X = %lf, A = %lf, функцию вычислить невозможно.\n", x, a);
            break;
        case 'F':
            start_result = (1 / cos(3 * a * a + 5 * a * (sx-1) + 2 * (sx-1) * (sx-1)));
            for (x = sx; x <= ex; x += step)
                if (fabs(cos(3 * a * a + 5 * a * x + 2 * x * x)) >= 0.0001) {
                    F = (1 / cos(3 * a * a + 5 * a * x + 2 * x * x));
                    printf("При Х = %lf, A = %lf, F = %lf (step = %lf)\n", x, a, F, step);
                    end_result = F;
                    if ((fabs(end_result - start_result)>=1) && (step >= 0.1))
                        step = step/2;
                    if ((fabs(end_result - start_result)<=0.3) && (step <= 2))
                        step = step*2;
                    start_result = F;
                } else
                    printf("При X = %lf, A = %lf, функцию вычислить невозможно.\n", x, a);
            break;
        case 'Y':
            start_result = acos(-12 * a * a - 4 * a * (sx-1) + (sx-1) * (sx-1) + 1);
            for (x = sx; x <= ex; x += step)
                if (fabs(-12 * a * a - 4 * a * x + x * x + 1) <= 1) {
                    Y = acos(-12 * a * a - 4 * a * x + x * x + 1);
                    printf("При Х = %lf, A = %lf, Y = %lf (step = %lf)\n", x, a, Y, step);
                    end_result = Y;
                    if ((fabs(end_result - start_result)>=1) && (step >= 0.1))
                        step = step/2;
                    if ((fabs(end_result - start_result)<=0.3) && (step <= 2))
                        step = step*2;
                    start_result = Y;
                } else
                    printf("При X = %lf, A = %lf, функцию вычислить невозможно.\n", x, a);
            break;
        default:
            printf("Неправильно выбрана функция.");
            goto Func;
    }
    Off:
    printf("Продолжить работу программы?(y/n)\n");
    scanf("%s", &off);
    switch (off)
    {
        case 'y': goto Start;
        case 'n': exit(0);
        default:
            printf("Неправильно введен ответ.");
            goto Off;
    }
}