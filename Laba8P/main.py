# coding: utf8
from math import sqrt
import random
import matplotlib.pyplot as plt

x = []
y = []


def massive_generation():  # случайные точки
    for i in range(100):
        x.append(random.uniform(-5, 5))
        y.append(random.uniform(-5, 5))


def inregion(x_coord, y_coord, rad, MPoint_x, MPoint_y):
    # определяем принадлежность точки к окружности
    distance = sqrt((x_coord - MPoint_x) ** 2 + (y_coord - MPoint_y) ** 2)
    if distance <= rad:
        return 1
    else:
        return 0

def MainPoint():
    Main = random.randint(0,99)
    return Main

def points_quantity(rad,Main):  # количество точек в окружности
    amount = 0
    data = []
    xx = []
    yy = []
    massive_generation()
    for i in range(100):
        if inregion(x[i], y[i], rad, x[Main], y[Main]) == 1:
            amount += 1
            xx.append(x[i])
            yy.append(y[i])
    data.append(xx)
    data.append(yy)
    data.append(amount)
    return data


radius = float(input("Введите радиус окрестности: "))
Main = MainPoint()
data = points_quantity(radius*2, Main)
count = data[2]
print("X = ", x)
print("Y = ", y)
print("Кол-во точек в окрестности: ", count)

fig = plt.figure()
plt.scatter(x, y)
plt.scatter(data[0], data[1], color='red')
plt.scatter(x[Main], y[Main], color='green')

circle = plt.Circle((x[Main], y[Main]), radius*2, Fill=False)
plt.gcf().gca().add_artist(circle)

print(fig.axes)

plt.grid()

plt.show()