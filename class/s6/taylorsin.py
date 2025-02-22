import math
import mathfunctions

# sin(x)= x - x^3 /3! + x^5 / 5! - x^7 / 7
def taylorsin(x,n):
    sum =0.0
    for i in range(n):
        j = 2*i +1
        sum = sum + (x**(j)/ mathfunctions.factorial(j) ) * (-1)**(i)
    return sum

if __name__ == "__main__":
    print(taylorsin(math.pi/2,10))