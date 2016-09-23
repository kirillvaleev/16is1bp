#include <stdio.h>
#include <math.h>



int main() {
    int error;
    double G, F, Y, x, a;
    const double pi = 3.1416;
    char function;

    scanf("%s", &function);
    scanf("%lf", &a);
    scanf("%lf", &x);

    switch (function) {
        case 'G':
            if ((35 * a * a + 37 * a * x + 6 * x * x)!=0) {
                G=3*(-3*a*a+2*a*x+21*x*x)/35*a*a+37*a*x+6*x*x;
                printf("%.2lf\n", G);
                error=0;
            }
            else {
                error=1;
            }
            break;

        case 'F':
            if (cos(3 * a * a + 5 * a * x + 2 * x * x)!=0) {
                F=1/cos(3*a*a+5*a*x+2*x*x);
                printf("%.2lf\n", F);
                error=0;
            }
            else error=1;
            break;
        case 'Y':
            if((-12 * a * a - 4 * a * x + x * x + 1)>=1) {
                Y=acosh(-12*a*a-4*a*x+x*x+1);
                printf("%.2lf\n", Y);
                error=0;
            }
            else error=1;
            break;

        default:
            printf("Неверно выбрана необходимая функция.\n");
            error=1;
            break;

    }
    if (error==0)
        printf("Программа была выполнена успешно.\nЗавершение программы.");
    else
        printf("Ошибка.\nЗавершение программы.");
    return 0;
}
