#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    int si_mas, b = 0;
    int i = 0;
    long int v = 0;
    double sx, ex, x, a, G = 0, F = 0, Y = 0, step;
    char off;
    char example[100];

    for (;;) { /*start*/
        printf("Введите начальное значение Х:");
        scanf("%lf", &sx);
        printf("Введите конечное значение Х:");
        scanf("%lf", &ex);
        printf("Введите значение A:");
        scanf("%lf", &a);
        printf("Введите шаг:");
        scanf("%lf", &step);
        struct results {
            char mas [100] [10];
            char End_string[100];
        } func_G, func_F, func_Y;
        memset(func_G.mas, 0, 100);
        memset(func_F.mas, 0, 100);
        memset(func_Y.mas, 0, 100);
        memset(func_G.End_string, 0, 255);
        memset(func_F.End_string, 0, 255);
        memset(func_Y.End_string, 0, 255);
        si_mas = 0;
        for (x = sx; x <= ex; x += step) {
            if (fabs(35 * a * a + 37 * a * x + 6 * x * x) >= 0.0001) {
                G = (3 * (-3 * a * a + 2 * a * x + 21 * x * x) / (35 * a * a + 37 * a * x + 6 * x * x));
            } else {
                printf("При X = %lf, A = %lf, функцию G вычислить невозможно.\n", x, a);
            }
            sprintf(func_G.mas[si_mas], "%lf", G);

            if (fabs(cos(3 * a * a + 5 * a * x + 2 * x * x)) >= 0.0001) {
                F = (1 / cos(3 * a * a + 5 * a * x + 2 * x * x));
            } else {
                printf("При X = %lf, A = %lf, функцию F вычислить невозможно.\n", x, a);
            }
            sprintf(func_F.mas[si_mas], "%.3lf", F);

            if (fabs(-12 * a * a - 4 * a * x + x * x + 1) <= 1) {
                Y = acos(-12 * a * a - 4 * a * x + x * x + 1);
            } else {
                printf("При X = %lf, A = %lf, функцию Y вычислить невозможно.\n", x, a);
            }
            sprintf(func_Y.mas[si_mas], "%.3lf", Y);

            si_mas += 1;
        }

        for (i=0; i<si_mas+1; i+=1) {
            strcat(func_G.End_string, func_G.mas[i]);
            strcat(func_F.End_string, func_F.mas[i]);
            strcat(func_Y.End_string, func_Y.mas[i]);
        }

        printf("Полученная строка G:\n%s\n", func_G.End_string);
        printf("Полученная строка F:\n%s\n", func_F.End_string);
        printf("Полученная строка Y:\n%s\n", func_Y.End_string);
        printf("Введите шаблон:\n");
        scanf("%s", example);

        i = 0;
        while (v < strlen(func_G.End_string)) {
            if (strstr(func_G.End_string, example) - func_G.End_string + 1 < strlen(func_G.End_string)) {
                i++;
                v = strstr(func_G.End_string, example) - func_G.End_string + 1;
                while (b != v) {
                    func_G.End_string[b] = ' ';
                    b++;
                }
                b = 0;
            }
            if (strstr(func_G.End_string, example) == 0)
                break;
        }
        printf("Найдено совпадений c G: %d\n", i);

        i = 0;
        b = 0;
        v = 0;
        while (v < strlen(func_F.End_string)) {
            if (strstr(func_F.End_string, example) - func_F.End_string + 1 < strlen(func_F.End_string)) {
                i++;
                v = strstr(func_F.End_string, example) - func_F.End_string + 1;
                while (b != v) {
                    func_F.End_string[b] = ' ';
                    b++;
                }
                b = 0;
            }
            if (strstr(func_F.End_string, example) == 0)
                break;
        }
        printf("Найдено совпадений c F: %d\n", i);

        i = 0;
        b = 0;
        v = 0;
        while (v < strlen(func_Y.End_string)) {
            if (strstr(func_Y.End_string, example) - func_Y.End_string + 1 < strlen(func_Y.End_string)) {
                i++;
                v = strstr(func_Y.End_string, example) - func_Y.End_string + 1;
                while (b != v) {
                    func_Y.End_string[b] = ' ';
                    b++;
                }
                b = 0;
            }
            if (strstr(func_Y.End_string, example) == 0)
                break;
        }
        printf("Найдено совпадений c Y: %d\n", i);

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