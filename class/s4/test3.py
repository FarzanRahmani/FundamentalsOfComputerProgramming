def is_prime(x):
    is_prime = True
    if x <= 1 :
        is_prime = False
    for n in range(2,x): #n az 2 ta x-1 hast
        if x>2 and x % n == 0 : # be yek ada kochak tar az khodesh bakhsh pazir bood
            is_prime = False
            break
    return is_prime
for i in range (1,101):
    if is_prime(i):
        print(i)
