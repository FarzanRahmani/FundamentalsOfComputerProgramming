def majmoe_shomarande(x):
    sum = 0
    for i in range(1,x+1):
        if x % i == 0 :
            sum = sum + i #else continue nabashe ham kar mikone
        else:
            continue
    print(sum)
for j in range(30,41):
    majmoe_shomarande(j)
        