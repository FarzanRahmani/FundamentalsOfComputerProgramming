def sum(x):
    sum = 0
    for i in range(x+1):
        sum = sum + i
    print(sum)
    return sum
sum(10)

def sum1(x):
    return x*(x+1)/2
print(sum1(10))

def factorial(n):
    mul = 1
    for i in range(1,n+1):
        mul = mul*i
    print(mul)
    return mul

factorial(6)