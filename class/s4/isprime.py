def is_prime(num):
    is_prime=True
    for n in range(num):
        if n>1 and num % n == 0 :
            is_prime=False
    if is_prime and num>1 :
        return True
    return False
for i in range(101):
    is_i_prime = is_prime(i) #is_i_prime yek moteghayere az noe boolean
    if is_i_prime:
        print(i)
#num =x vorodi tabe     return = khorooji