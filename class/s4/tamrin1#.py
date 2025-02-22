def is_perfectsquare(num):
    for i in range(2,num):
        if num % i == 0 : #khat 3 kolan ezafie
            if i*i == num :  #if num/i == i : mitoni benevisi
                return True
    return False

is_perfect = is_perfectsquare(1024)
if is_perfect: #mitoni if is_perfect == True ham benevisi
    print("yes")
else:
    print("no")