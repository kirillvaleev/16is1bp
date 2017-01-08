#include <stdio.h>
#include <math.h>


int main() {
    double x, a, x2, b, function, SMA, EMA, N, value_a, P;
    int r, j;
    int change;
    while (1) {
        printf("%s", "x: ");
        scanf("%lf", &x);
        getchar();

        printf("%s", "x2 ");
        scanf("%lf", &x2);
        getchar();

        printf("%s", "a: ");
        scanf("%lf", &a);
        getchar();

        printf("%s", "Интервал сглаживания: ");
        scanf("%lf", &N);
        getchar();

        printf("%s", "Параметр шага: ");
        scanf("%lf", &b);
        getchar();

        double mas[j];
        printf("Введите 1 для вызова G: \n");
        scanf("%i", &r);

        switch (r) {
            case 1:
                while (x < x2) {
                    if ((function <= 0.00001) || (function >= 0.00001))
                        function = ((5 * (10 * pow(a, 2) - 11 * a * x + pow(x, 2))) /
                                    (24 * pow(a, 2) - 49 * a * x + 15 * pow(x, 2)));
                    x = x + b;
                    printf("%lf \n", function);
                    mas[j] = function;
                    j = 0;
                    j += 1;
                    SMA = function / j;
                    value_a = 2 / N + 1;
                    mas[0] = P;
                    EMA = value_a * P + (1 - value_a) * SMA;
                    printf("Экспоненциальная скользящая средняя %lf \n", EMA);
                }
                break;

            default:
                printf("Для выполнения действия напишите 1\n");
                break;
        }
        printf("Если желаете посчитать другую функцию введите 1\n");
        scanf("%d", &change);
        if (change == 1)
            continue;
        else
            break;
    }
}
