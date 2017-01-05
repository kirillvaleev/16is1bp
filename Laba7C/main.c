#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    int index = 0;
    double sx, ex, x, a, step;
    char off, strfile[100];
    FILE *file1, *file2;


    for (;;) { /*start*/
        printf("Введите начальное значение Х:");
        scanf("%lf", &sx);
        printf("Введите конечное значение Х:");
        scanf("%lf", &ex);
        printf("Введите значение A:");
        scanf("%lf", &a);
        printf("Введите шаг:");
        scanf("%lf", &step);
        struct {
            double G [100];
            double F [100];
            double Y [100];
        } result;

        for (x = sx; x <= ex; x += step) {
            if (fabs(35 * a * a + 37 * a * x + 6 * x * x) >= 0.0001) {
                result.G[index] = (3 * (-3 * a * a + 2 * a * x + 21 * x * x) / (35 * a * a + 37 * a * x + 6 * x * x));
            } else {
                printf("При X = %lf, A = %lf, функцию G вычислить невозможно.\n", x, a);
            }

            if (fabs(cos(3 * a * a + 5 * a * x + 2 * x * x)) >= 0.0001) {
                result.F[index] = (1 / cos(3 * a * a + 5 * a * x + 2 * x * x));
            } else {
                printf("При X = %lf, A = %lf, функцию F вычислить невозможно.\n", x, a);
            }

            if (fabs(-12 * a * a - 4 * a * x + x * x + 1) <= 1) {
                result.Y[index] = acos(-12 * a * a - 4 * a * x + x * x + 1);
            } else {
                printf("При X = %lf, A = %lf, функцию Y вычислить невозможно.\n", x, a);
            }

            index += 1;
        }
        index = (int) sx;
        if ((file1 = fopen("/home/valeev/github/labs/Laba7C/test.txt", "w")) == NULL){
            printf("Ошибка(1)\n");
        } else {
            printf("Успешно(1)\n");
        }
        fprintf(file1, "Start:\n");
        while (index <=ex) {
            fprintf(file1, "G = %9.3lf, F = %9.3lf, Y = %9.3lf\n", result.G[index], result.F[index], result.Y[index]);
            index += step;
        }
        fprintf(file1, "End.\n");
        fclose(file1);

        if ((file2 = fopen("/home/valeev/github/labs/Laba7C/test2.txt", "r")) == NULL){
            printf("Ошибка(2)\n");
        } else {
            printf("Успешно(2)\n");
        }
        while (!feof(file2)){
            fscanf(file2, "%s", strfile);
            printf("%s", strfile);
        }
        fclose(file2);

        memset(result.G, 0, 100);
        memset(result.F, 0, 100);
        memset(result.Y, 0, 100);
        for(;;) { /*off*/
            printf("\nПродолжить работу программы?(y/n)\n");
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