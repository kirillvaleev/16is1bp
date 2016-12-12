# coding=utf-8
from math import cos
from math import acos

start_f = float
end_f = float
work_pr = int(1)
massiv = []

while work_pr == 1:
    print('Enter start X:')
    sx = float(input())
    print('Enter end X:')
    ex = float(input())
    print('Enter A:')
    a = float(input())
    print('Enter step:')
    step = float(input())
    print('Enter function(G-1,F-2,Y-3):')
    Function = input()

    i_massiv = 0
    x = sx

    if Function == 1:
        while x <= ex:
            if (35 * a * a + 37 * a * x + 6 * x * x) != 0:
                G = (3 * (-3 * a * a + 2 * a * x + 21 * x * x) / (35 * a * a + 37 * a * x + 6 * x * x))
                massiv.append(G)
            else:
                print('Error(1)')
            x += step

    elif Function == 2:
        while x <= ex:
            if (cos(3 * a * a + 5 * a * x + 2 * x * x)) != 0:
                F = (1 / cos(3 * a * a + 5 * a * x + 2 * x * x))
                massiv.append(F)
            else:
                print('Error(2)')
            x += step

    elif Function == 3:
        while x <= ex:
            if abs(-12 * a * a - 4 * a * x + x * x + 1) <= 1:
                Y = acos(-12 * a * a - 4 * a * x + x * x + 1)
                massiv.append(Y)
            else:
                print('Error(3)')
            x += step

    else:
        print('Error(0)')

    minmas = massiv[i_massiv]
    maxmas = massiv[i_massiv]

    print('╔═════════╦═════════╦═════════╗')
    print('║    X    ║    A    ║    ' + str(Function) + '    ║')
    print('╠═════════╬═════════╬═════════╣')
    x = sx

    while x <= ex:
        print('║{:^9}'.format(x) + '║{:^9}'.format(a) + '║{:^9}'.format(round(massiv[i_massiv], 5)) + '║')
        x += step
        i_massiv += 1
    print('╚═════════╩═════════╩═════════╝')
    print('Max = ' + str(max(massiv)) + ', Min = ' + str(min(massiv)))

    print ('We work on?\n   (1 - yes; 0 - no)')
    work_pr = int(input())
    if work_pr == 1:
        continue
    else:
        break