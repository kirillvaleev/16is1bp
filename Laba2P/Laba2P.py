from math import cos
from math import acos

print('Enter X:')
x = float(input())
print('Enter A:')
a = float(input())
print('Enter function(G-1,F-2,Y-3):')
Function = input()

if Function == 1:
    if (35 * a * a + 37 * a * x + 6 * x * x) != 0:
        G = (3 * (-3 * a * a + 2 * a * x + 21 * x * x) / (35 * a * a + 37 * a * x + 6 * x * x))
        print('G = ' + str(G))
    else:
        print('Error(1)')

elif Function == 2:
    if (cos(3 * a * a + 5 * a * x + 2 * x * x)) != 0:
        F = (1 / cos(3 * a * a + 5 * a * x + 2 * x * x))
        print('F = ' + str(F))
    else:
        print('Error(2)')

elif Function == 3:
    if abs(-12 * a * a - 4 * a * x + x * x + 1) <= 1:
        Y = acos(-12 * a * a - 4 * a * x + x * x + 1)
        print('Y = ' + str(Y))
    else:
        print('Error(3)')

else:
    print('Error(0)')









