
def factorial(n):
    mul = 1
    for i in range(1, n+1):
        mul = mul * i
    return mul


# def compute_e():
#     sum  = 0
#     for i in range(10):
#         sum = sum + 1/factorial(i)
        
#     return sum

# print(compute_e())

def compute_e(precision):
    n = 0
    e  = 0
    while 1/factorial(n) > precision :
        e = e + 1/factorial(n)
        n = n + 1
    return e

# print(compute_e(0.00001))


# Copy the 'power' method as well as the 'factorial method into math.py and use it 
# to implement called exp(x, precision) which computes e to the x using the formula above stopping 
# when the terms are less than precision.
#     Use this to print exp(1, .000001) and exp(2, .000001)

def exp(x,precision): #e be tavane x (e_exp_x)
    n = 0
    sum = 0
    while True:
        if (x**n / factorial(n)) < precision:
            break
        sum = sum + (x**n / factorial(n)) 
        n = n+1
    return sum

# print(exp(5,0.001))


#Part 3: You will note that each term in the series above is the previous term times X / N where N is the 
# current loop count.    Use this fact to write a method exp2(x, precision) that is more efficient because 
# it does not need to call factorial or power

#e^x
def exp2(x,precision):
    n = 1
    sum = 1
    a_n = 1
    while True:
        if a_n < precision :
            break
        a_n = a_n * (x/n)
        sum = sum + a_n
        n = n+1
    return sum

# print(exp2(5,0.001))


#print(abs(-50))  ma dar python tabe absolute darim


def abs1(x):
    if x>=0:
        return x
    else:
        return x*(-1)

# print(abs1(-50))

def near(x, y, closeness=.001):
    x = abs1(x)
    y = abs(y)
    if abs1(x-y) <= closeness :
        return True
    else:
        return False

# print(near(-1.123,1.1235)) 

# print(near(-5.222,5.224))

# print(near(-5.222,5.223,0.5))

# approximate_1 = exp(5,0.001)
# approximate_2 = exp2(5,0.001)
# # print(near(  approximate_1  ,  approximate_2  ))


#1. lowerBound = 0, upperBound = X.  
# 2. These have the property that  square(lowerBound) < X < square(upperBound) Thus the square root of X must be between the lower and upper bound.
# 3. Pick the midpoint between lower and upper bound (call it min).  If square(mid) < X then make lowerBound = mid otherwise make upperBound = mid.
# 4. Keep doing this until the difference between lowerBound and upperBound < precision

def square_root(x, precision):
    '''x >1 '''
    lowerBound = 0
    upperBound = x
    differnce = upperBound - lowerBound
    while differnce > precision :
        mid = (upperBound+lowerBound) / 2
        if mid**2 < x :
            lowerBound = mid
        else:
            upperBound = mid
        differnce = upperBound - lowerBound
    return mid

# print(square_root(2,0.00001))
# print(square_root(3,0.000001))
# print(square_root(5,0.000001))
# print(square_root(6,0.000001))
# print(square_root(7,0.000001))
# print(square_root(8,0.000001))





def root(x, n, precision):
    '''x >1 '''
    lowerBound = -abs(x)
    upperBound = abs(x)
    differnce = upperBound - lowerBound
    while differnce > precision :
        mid = (upperBound+lowerBound) / 2
        if mid**n < x :
            lowerBound = mid
        else:
            upperBound = mid
        differnce = upperBound - lowerBound
    return mid

# print(root(5,3,.00001))
# print(root(20,4,.00001))
# print(root(17,8,.00001))
# print(root(-150,5,.00001))
# print(root(289,10,.00001))


def Ln(x,precision):
    '''x>1'''
    lowerBound = 0
    upperBound = x
    difference = upperBound - lowerBound
    while difference > precision :
        mid = (lowerBound+upperBound)/2
        if exp(mid,precision) < x :
            lowerBound = mid
        else:
            upperBound = mid
        difference = upperBound - lowerBound
    return mid

print(Ln(9,0.001))
print(Ln(50,0.001))
# print(Ln(1009,0.001))
print(Ln(5,0.001))



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