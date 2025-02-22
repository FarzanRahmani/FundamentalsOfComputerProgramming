# print("prime numbers \n2 \n3 \n5 \n7 \n9 \n11 \n13 \n17 \n19")
# for i in range(101):
#     if (i!=1 and i%2!=0 and i%3!=0 and i%5!=0 and i%7!=0 and i%11!=0 and i%13!=0 and i%17!=0 and i%19!=0):
#         print(i)

# i %2 != 0  --> bar do bakhs pazir nist



def is_prime(n):
    for i in range(2,n):
        if n % i == 0:
            return False
    if n<2:
        return False
    return True

def prime_nums(n):
    for j in range(n+1):
        if is_prime(j):
            print(j)

prime_nums(100)