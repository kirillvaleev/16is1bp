from math import cos
from math import acos

start_f = float
end_f = float
work_pr = int(1)

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

    x = sx

    if Function == 1:
        start_f = (3 * (-3 * a * a + 2 * a * x + 21 * x * x) / (35 * a * a + 37 * a * x + 6 * x * x)) + 0.35
        while x <= ex:
            if (35 * a * a + 37 * a * x + 6 * x * x) != 0:
                G = (3 * (-3 * a * a + 2 * a * x + 21 * x * x) / (35 * a * a + 37 * a * x + 6 * x * x))
                print('If X = ' + str(x) + ', G = ' + str(G) + ' (step =' + str(step) + ')')
                end_f = G
                if (abs(end_f - start_f) >= 1) and (step >= 0.1):
                    step = step / 2
                if (abs(end_f - start_f) <= 0.3) and (step <= 2):
                    step = step * 2
                start_f = G
            else:
                print('Error(1)')
            x += step

    elif Function == 2:
        start_f = (1 / cos(3 * a * a + 5 * a * x + 2 * x * x)) + 0.35
        while x <= ex:
            if (cos(3 * a * a + 5 * a * x + 2 * x * x)) != 0:
                F = (1 / cos(3 * a * a + 5 * a * x + 2 * x * x))
                print('If X = ' + str(x) + ', F = ' + str(F) + ' (step =' + str(step) + ')')
                end_f = F
                if (abs(end_f - start_f) >= 1) and (step >= 0.1):
                    step = step / 2
                if (abs(end_f - start_f) <= 0.3) and (step <= 2):
                    step = step * 2
                start_f = F
            else:
                print('Error(2)')
            x += step

    elif Function == 3:
        start_f = acos(-12 * a * a - 4 * a * x + x * x + 1) + 0.35
        while x <= ex:
            if abs(-12 * a * a - 4 * a * x + x * x + 1) <= 1:
                Y = acos(-12 * a * a - 4 * a * x + x * x + 1)
                print('If X = ' + str(x) + ', Y = ' + str(Y) + ' (step =' + str(step) + ')')
                end_f = Y
                if (abs(end_f - start_f) >= 1) and (step >= 0.1):
                    step = step / 2
                if (abs(end_f - start_f) <= 0.3) and (step <= 2):
                    step = step * 2
                start_f = Y
            else:
                print('Error(3)')
            x += step

    else:
        print('Error(0)')

    print ('We work on?\n   (1 - yes; 0 - no)')
    work_pr = int(input())
    if work_pr == 1:
        continue
    else:
        break



