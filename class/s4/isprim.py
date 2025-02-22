def is_prime(num):
    is_prime = True
    for n in range(num):  
        if n <2:         #be jaye khat 4 va 5   mitonesti range(2,num)  bezari
            continue
        if num % n == 0:
            is_prime=False
            break
    return is_prime
for i in range(2,101):
    if is_prime(i):
        print(i)
#num =x vorodi tabe     return khorooji