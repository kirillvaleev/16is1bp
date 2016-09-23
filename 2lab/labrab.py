import math

print('G-1, F-2, Y-3')
function=input()
a=input()
x=input()

error=0

if function==1:
    if (35*a*a+37*a*x+6*x*x)!=0:
        G = 3 * (-3 * a * a + 2 * a * x + 21 * x * x) / 35 * a * a + 37 * a * x + 6 * x * x
        print("G = " + str(G))
    else:
        error=1

elif function==2:
    if math.cos(3*a*a+5*a*x+2*x*x)!=0:
        F = 1 / math.cos(3 * a * a + 5 * a * x + 2 * x * x)
        print("F = " + str(F))
    else:
        error=1

elif function==3:
    if (-12*a*a-4*a*x+x*x+1)>=1:
        Y = math.acosh(-12 * a * a - 4 * a * x + x * x + 1)
        print("Y = " + str(Y))
    else:
        error=1
else:
    print('Error.')

if error==0:
    print('GG')
else:
    print('Error.')