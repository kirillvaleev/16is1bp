#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <omp.h>
#include <time.h>

struct Points {
    double pos_x[100];
    double pos_y[100];
};

struct MainPoint {
    double mpx;
    double mpy;
};

typedef struct Points Points;
typedef struct MainPoint MPoint;

Points RandomPoints(void) /*генерируем случайные точки*/
{
    Points Positions;
    int i = 0;
    srand(time(NULL));

    for (i = 0; i < 100; i++) {
        Positions.pos_x[i] = (double) rand() / RAND_MAX * (5.0 + 5.0);
        Positions.pos_y[i] = (double) rand() / RAND_MAX * (5.0 + 5.0);
    }
    return Positions;
}

int inregion(MPoint massiv1, MPoint massiv2,double radius){ /*принаждежность точки в окружности*/
    double dist;
    dist = sqrt(pow(2,massiv2.mpx-massiv1.mpy)+pow(2,massiv2.mpx-massiv1.mpy));
    if (dist <= radius)
        return 1;
}

int Amount_Of_Points(double rad) /*получаем кол-во точек в окружности*/
{
    MPoint dx, inreg;
    Points mas;
    int i = 0, change = 0, amount = 0;;
    srand(time(NULL));

    change = rand() % 100;

    mas = RandomPoints();
    mas.pos_x[change] = dx.mpx;
    mas.pos_y[change] = dx.mpy;

    for (i = 0; i < 100; i++)
    {
        inreg.mpx = mas.pos_x[i];
        inreg.mpy = mas.pos_y[i];
        if (inregion(dx,inreg,rad) == 1)
        {
            amount++;
        }
    }
    if (amount != 0) {

    }
    return amount;
}

int main()
{
    double radius,start,stop;
    srand(time(NULL));

    start = omp_get_wtime();
    radius = (double) rand() / RAND_MAX * (20.0);
    printf("Радиус: %lf\n", radius);
    printf("Точки в окресности: %d\n", Amount_Of_Points(radius));
    stop = omp_get_wtime();
    printf("Время работы: %lf \n\n", (stop - start));
    return 0;
}