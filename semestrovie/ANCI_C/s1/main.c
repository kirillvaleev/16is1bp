#include<stdio.h>

int main() {
    const double dot = 0.000001;
    double sqr = 0, x, y = 0;
    printf("Введите число:\n");
    scanf("%lf", &x);
    int i = 0;
    while (sqr < x) {
        y += dot;
        sqr = y * y;
        i += 1;
    }
    printf("Квадрат числа: %.5lf\nКоличество шагов: %i", y, i);
}