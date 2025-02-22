def is_prime(x):
    for n in range(2,int(x ** 0.5 )+1): #x taghsim bar 2 ham kar mikone vali in behine tare     chon ta ens-1 mire ma +1 kardim int(x**2) ro
        if x % n == 0:
            return False
    if x <=1 :
        return False
    return True
for i in range(1,101):
    if is_prime(i):
        print(i)
