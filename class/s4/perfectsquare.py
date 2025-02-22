def is_perfectsquare(num):
    for i in range(2,num):
        if num % i == 0 :    # khat 3 va 4 edgham  -->  if num == i*i ya if num/i == i
            if i*i == num :
                print("is perfect square")
                return True
    print("no")
    return False

is_perfectsquare(256)


