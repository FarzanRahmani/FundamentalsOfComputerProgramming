def is_divisable(a,b):
    if a%b == 0 :
        return True
    return False

#A number N is prime if for every number x less than N and greater than 1 is_divisble(N,  x) is false.
#    Use this definition to implement a method called is_prime(N) in the prime.py script.
#    Use this to print the prime numbers less than 100 in a table.  

def is_prime(N):
    assert type(N) == int
    for i in range(2,N):
        if is_divisable(N,i):
            return False
    if N < 2 : #instead we can write ""assert N>=2"""
        return False
    return True
x = 0
while x < 100 :
    if is_prime(x):
        print(x)
    x = x+1
