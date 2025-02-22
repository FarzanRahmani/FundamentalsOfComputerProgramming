def is_prime(x):
    for i in range(2,int(x**0.5)+1):
        if x % i == 0:
            return False
    return True

def find_prime_factors(num):
    result = []
    for i in range(2,num):
        if num%i == 0:
            if is_prime(i):
                result.append(i)
    return result
print(find_prime_factors(1260))
