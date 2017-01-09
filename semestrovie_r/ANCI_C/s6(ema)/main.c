#include <stdio.h>
#include <math.h>


int main() {
    double x, a, x2, b, function, SMA, EMA, N, value_a, P;
    int r, j;
    int change;
    while (1) {
        printf("%s", "x: ");
        scanf("%lf", &x);
        printf("%s", "x2 ");
        scanf("%lf", &x2);
        printf("%s", "a: ");
        scanf("%lf", &a);
        printf("%s", "Интервал сглаживания: ");
        scanf("%lf", &N);
        printf("%s", "Параметр шага: ");
        scanf("%lf", &b);
        double mas[j];
        while (x < x2) {
            if (fabs(24 * a * a - 49 * a * x + 15 * x * x) >= 0.00001)
                function = ((5 * (10 * a * a - 11 * a * x + x * x)) / (24 * a * a - 49 * a * x + 15 * x * x));
            x = x + b;
            printf("%lf \n", function);
            mas[j] = function;
            j = 0;
            j += 1;
            SMA = function / j;
            value_a = 2 / N + 1;
            mas[0] = P;
            EMA = value_a * P + (1 - value_a) * SMA;
            printf("Экспоненциальная скользящая средняя: %lf \n", EMA);
        }

        printf("Если желаете посчитать другую функцию введите 1\n");
        scanf("%d", &change);
        if (change == 1)
            continue;
        else
            break;
    }
}
