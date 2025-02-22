from math import * #dige baraye estefade az math niaz nist az math. estefade kard   *==all

def sum_to_n_recrusive(n):#f(n)=f(n-1)+f(n-2)    f(n-1)=f(n-2)+f(n-3)  ...  f(n-7)= 2 + f(1) 
    if n<=1 :
        return 1
    return sum_to_n_recrusive(n-1) + n

print(sum_to_n_recrusive(10))

def sum_to_n(n):
    return n*(n+1)/2

def factorial(n):
    if n <= 0 :
        return 1
    return n*factorial(n-1)

print(factorial(5))


def khat(x,a=0,b=0): # by defailt:a=0 b = 0 yani age ye voroodi bedi error nmide khodesh khodkar ona ro mizare
    return a*x+b

print(khat(7))
print(khat(7,3))
print(khat(5,7,8))
