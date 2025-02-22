#print(abs(-50))  ma dar python tabe absolute darim


def abs1(x):
    if x>=0:
        return x
    else:
        return x*(-1)

print(abs1(-50))

def near(x, y, closeness=.001):
    x = abs1(x)
    y = abs(y)
    if abs1(x-y) <= closeness :
        return True
    else:
        return False

print(near(-1.123,1.1235)) 

print(near(-5.222,5.224))

print(near(-5.222,5.223,0.5))