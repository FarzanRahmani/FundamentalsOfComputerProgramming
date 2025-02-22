#Make a script call quadradic.py that prompts for the A, B and C values of AX*X + BX + C = 0 and 
# calculates the roots of the equation using the quadratic formula.

def quadratic(a,b,c):
    Delta = (b**2 - 4*a*c)**.5
    x1 = (-b + Delta)/(2*a)
    x2 = (-b - Delta)/(2*a)
    return x1 , x2
print(quadratic(1,1,-2))