def is_odd(n):
    return n % 2 ==1 #ya 0==1 >> False    ya 1==1 >> True
if(is_odd(1)):
    print("odd")
if not (is_odd(2)):
    print("even")
def sum(a,b,c,d,e):
    return a+b+c+d+e
#def is_prime(n):
    #2147483647
def is_prime(n):
    for i in range(2,n):
        if n % i == 0:
            print("isn't prime")
            return False
    if n<= 1:
        return False
    print("is prime")
    return True
#if is_prime(19) == True:
#    print("is prime")
is_prime(101)