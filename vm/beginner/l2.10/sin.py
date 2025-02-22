import math
def factorial(n):
    mul = 1
    for i in range(1, n+1):
        mul = mul * i
    return mul

def sin(x,precision=0.01):
    """x bar hasb degree ee"""
    rad = (math.pi / 180)*x
    n=1
    sum = 0
    sign = 1
    a_n = 0
    while True :
        if rad**n / factorial(n) < precision :
            break
        a_n = rad**n / factorial(n) * sign
        sum = sum + a_n
        n = n + 2
        sign = sign*(-1)
    return sum

print(sin(90,0.001))
print(sin(45,0.001))
print(sin(60,0.001))
