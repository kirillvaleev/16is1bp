#include <stdio.h>
#include <math.h>


int main() {
    double x, a, x2, b, function = 0, function2, difference, SMA;
    int r, j = 0;
    int change = 1;
    while (1) {
        printf("%s", "x: ");
        scanf("%lf", &x);
        printf("%s", "x2: ");
        scanf("%lf", &x2);
        printf("%s", "а: ");
        scanf("%lf", &a);
        printf("%s", "Параметр шага:  ");
        scanf("%lf", &b);
        printf("%s", "Разница между функциями: ");
        scanf("%lf", &difference);

        double mas[100];

        while (x < x2) {
            if (fabs(24 * pow(a, 2) - 49 * a * x + 15 * pow(x, 2)) >= 0.00001)
                function = ((5 * (10 * pow(a, 2) - 11 * a * x + pow(x, 2))) /
                            (24 * pow(a, 2) - 49 * a * x + 15 * pow(x, 2)));
            x = x + b;
            printf("%lf \n", function);
            mas[j] = function;
            j += 1;
            SMA = function / j;
            printf("Скользящая средняя %lf \n", SMA);
            function2 = ((5 * (10 * pow(a, 2) - 11 * a * (x + b) + pow(x + b, 2))) / (24 * pow(a, 2) - 49 * a * (x + b) + 4 * pow((x + b), 2)));
            if (function2 - function > difference)
                b *= 2;
        }
            printf("Если желаете посчитать другую функцию введите 1\n");
            scanf("%d", &change);
        if (change == 1)
            continue;
        else
            break;
    }
}
