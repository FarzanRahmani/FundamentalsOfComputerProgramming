import matplotlib.pyplot as plt
import math

#x^0/0! - x^2/2! + x^4/4! - x^6/6! + ...

def get_x(min,max,step):
    x = []
    y = min
    while y <= max:
        x.append(y)
        y = y + step
    return x

def factorial(n):
    mul = 1
    for i in range(1,n+1):
        mul = mul*i
    return mul

def get_cosx(range_x):
    y = [] 
    for n in range_x:
        y.append(math.cos(n))
    return y

def taylor_cos(x,n):
    sum = 0
    sign = 1
    for i in range(n):
        w = 2 * i
        sum = sum + sign * (x ** w) / factorial(w) 
        sign = sign* -1
    return sum

def get_taylor_cos(range_x,n):
    range_y = []
    for i in x:
        range_y.append(taylor_cos(i,n))
    return range_y


if __name__ == "__main__":
    x = get_x(-3.14,3.14,.1)
    y = get_cosx(x)
    plt.plot(x,y)
    for i in range(1,6):
        y_tcos = get_taylor_cos(x,i)
        plt.plot(x,y_tcos) 
    plt.show()
