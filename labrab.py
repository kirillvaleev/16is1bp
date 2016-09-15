a=input()
x=input()

G=3*(-3*a*a+2*a*x+21*x*x)/35*a*a+37*a*x+6*x*x
F=1/math.cos(3*a*a+5*a*x+2*x*x)
Y=math.acosh(-12*a*a-4*a*x+x*x+1)

print("G = " + str(G))
print("F = " + str(F))
print("Y = " + str(Y))