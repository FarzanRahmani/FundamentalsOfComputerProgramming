#power(x, y).    In power.py write the function power(x, y) which computes x to the y power if y is an 
# integer greater than or equal to 0. 
def power(x,y):
    p = 1
    for i in range(y):
        p = p*x
    return p
print(power(2,5))    

def power(x,y):
    return x**y
print(power(2,5))    

