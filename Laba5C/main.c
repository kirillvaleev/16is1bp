#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    int index_mas, si_mas, i;
    double sx, ex, x, a, G, F, Y, step;
    char Function, off;
    char End_string[255];
    char example[255];
    for (;;) { /*start*/
        printf("Введите начальное значение Х:");
        scanf("%lf", &sx);
        printf("Введите конечное значение Х:");
        scanf("%lf", &ex);
        printf("Введите значение A:");
        scanf("%lf", &a);
        printf("Введите шаг:");
        scanf("%lf", &step);
        index_mas = (int) ceil((fabs(sx) * fabs(ex)) / step + 1);
        char mas [index_mas] [10];
        memset(mas, 0, 100);
        memset(End_string, 0, 255);
        si_mas = 0;
        for(;;) { /*funk*/
            printf("Введите название функции(G, F, Y):\n");
            scanf("%s", &Function);
            switch (Function) {
                case 'G':
                    for (x = sx; x <= ex; x += step) {
                        if (fabs(35 * a * a + 37 * a * x + 6 * x * x) >= 0.0001) {
                            G = (3 * (-3 * a * a + 2 * a * x + 21 * x * x) / (35 * a * a + 37 * a * x + 6 * x * x));
                        } else
                            printf("При X = %lf, A = %lf, функцию вычислить невозможно.\n", x, a);
                        sprintf(mas[si_mas], "%.3lf", G);
                        si_mas += 1;
                    }
                    break;
                case 'F':
                    for (x = sx; x <= ex; x += step) {
                        if (fabs(cos(3 * a * a + 5 * a * x + 2 * x * x)) >= 0.0001) {
                            F = (1 / cos(3 * a * a + 5 * a * x + 2 * x * x));
                        } else
                            printf("При X = %lf, A = %lf, функцию вычислить невозможно.\n", x, a);
                        sprintf(mas[si_mas], "%.3lf", F);
                        si_mas += 1;
                    }
                    break;
                case 'Y':
                    for (x = sx; x <= ex; x += step) {
                        if (fabs(-12 * a * a - 4 * a * x + x * x + 1) <= 1) {
                            Y = acos(-12 * a * a - 4 * a * x + x * x + 1);
                        } else
                            printf("При X = %lf, A = %lf, функцию вычислить невозможно.\n", x, a);
                        sprintf(mas[si_mas], "%.3lf", Y);
                        si_mas += 1;
                    }
                    break;
                default:
                    printf("Неправильно выбрана функция.");
                    continue;
            }
            break;
        }
        for (i=0; i<si_mas+1; i+=1) {
            strcat(End_string, mas[i]);
        }
        printf("Полученная строка:\n%s\n", End_string);
        printf("Введите шаблон: ");
        scanf("%p\n", &example);
        printf("%d\n", strcmp(End_string, example, 255));

        for(;;) { /*off*/
            printf("Продолжить работу программы?(y/n)\n");
            scanf("%s", &off);
            switch (off) {
                case 'y':
                    break;
                case 'n':
                    exit(0);
                default:
                    printf("Неправильно введен ответ.\n");
                    continue;
            }
            break;
        }
    }
}