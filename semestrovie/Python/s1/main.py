# coding=utf-8
n = int(0)
a = float(input("A: "))
b = float(input("B: "))
c = float(0)
spray = float(input("Погрешность: "))
while abs(a - b) >= spray:
    c = (a + b) / 2
    if (((16 * c - 3 * c) + (4 + c * c)) * ((16 * a - 3 * a) + (4 + a * a)) < 0):
        a = c
    else:
        b = c
    n += 1
print("С = " + str(c))