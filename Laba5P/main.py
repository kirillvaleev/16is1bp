# coding=utf-8
from math import cos
from math import acos

start_f = float
end_f = float
work_pr = int(1)
massiv = []

while work_pr == 1:
    End_string = str()
    print('Enter start X:')
    sx = float(input())
    print('Enter end X:')
    ex = float(input())
    print('Enter A:')
    a = float(input())
    print('Enter step:')
    step = float(input())
    print('Enter function(G-1,F-2,Y-3):')
    Function = int(input())

    i_massiv = 0
    x = sx

    if Function == 1:
        while x <= ex:
            if (35 * a * a + 37 * a * x + 6 * x * x) != 0:
                G = (3 * (-3 * a * a + 2 * a * x + 21 * x * x) / (35 * a * a + 37 * a * x + 6 * x * x))
                End_string += str(G)
            else:
                print('Error(1)')
            x += step

    elif Function == 2:
        while x <= ex:
            if (cos(3 * a * a + 5 * a * x + 2 * x * x)) != 0:
                F = (1 / cos(3 * a * a + 5 * a * x + 2 * x * x))
                End_string += str(F)
            else:
                print('Error(2)')
            x += step

    elif Function == 3:
        while x <= ex:
            if abs(-12 * a * a - 4 * a * x + x * x + 1) <= 1:
                Y = acos(-12 * a * a - 4 * a * x + x * x + 1)
                End_string += str(Y)
            else:
                print('Error(3)')
            x += step

    else:
        print('Error(0)')

    print(End_string)
    print('Enter example:')
    example = input()
    End_string1 = End_string.split(example)
    k = len(End_string1) - 1
    print(k)

    print('We work on?\n   (1 - yes; 0 - no)')
    work_pr = int(input())
    if work_pr == 1:
        continue
    else:
        break
