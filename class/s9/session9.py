import matplotlib.pyplot as plt
import math

x = [1,2,3,4,5]
y = [-1,-2,-3,-4,-5]
plt.plot(x,y)
plt.show()

def get_x(min,max,step):
    x = []
    y = min
    while y <= max:
        x.append(y)
        y = y + step
    return x

def get_x2(x): #much better
    y = []
    for n in x:
        y.append(n**2)
    return y

def get_x2b(range_x): #chra dar tabe kar nmikoni???
    for i in range(len(range_x)):
        x = range_x[i]**2
        range_x[i] = x
    return range_x


def get_sinx(range_x):
    y = [] #mitoni be jaye y az range_y estefade koni
    for n in range_x:
        y.append(math.sin(n))
    return y
# x = get_x(0,math.pi*2,.1)
# y = get_sinx(x)
# plt.plot(x,y)
# plt.show()
# x = get_x(-2,1,0.1)
# y = get_x2b(x)
# plt.plot(x,y)
# plt.show()
def factorial(n):
    product = 1
    for i in range(1,n+1):
        product = product * i
    
    return product

def taylorsin(x, n):
    sum = 0
    sign = 1
    for i in range(n):
        w = 2 * i + 1
        sum = sum + sign * (x ** w) / factorial(w)
        sign = sign * -1
    return sum

def get_taylorsin(range_x,n):
    range_y = []
    for x in range_x:
        range_y.append(taylorsin(x,n))
    return range_y

if __name__ == "__main__":
    x = get_x(-3,3,.1)
    y_sin = get_sinx(x)
    plt.plot(x,y_sin)

    for i in range(1,5):
        y_tsin = get_taylorsin(x,i)
        plt.plot(x,y_tsin)
    plt.show()

