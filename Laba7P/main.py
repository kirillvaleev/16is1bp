# coding=utf-8
from math import cos

work_pr = 1

while work_pr == 1:
    print('Enter start X:')
    sx = float(input())
    print('Enter end X:')
    ex = float(input())
    print('Enter A:')
    a = float(input())
    print('Enter step:')
    step = float(input())

    i_massiv = 0
    x = sx
    file1 = open("/home/valeev/github/labs/Laba7P/text.txt", "w")
    while x < (ex + 1):
        if (35 * a * a + 37 * a * x + 6 * x * x) != 0:
            G = (3 * (-3 * a * a + 2 * a * x + 21 * x * x) / (35 * a * a + 37 * a * x + 6 * x * x))
        else:
            print('Error(1)')
            G = 666

        if (cos(3 * a * a + 5 * a * x + 2 * x * x)) != 0:
            F = (1 / cos(3 * a * a + 5 * a * x + 2 * x * x))
        else:
            print('Error(2)')
            F = 666

        file1.write('G = {:^15}'.format(G) + 'F = {:^15}'.format(F) + '\n')

        x += step
    file1.close()

    inputfile = open("/home/valeev/github/labs/Laba7P/input.txt", "r")
    print(inputfile.read() + '\n')
    inputfile.close()

    print('We work on?\n   (1 - yes; 0 - no)')
    work_pr = int(input())