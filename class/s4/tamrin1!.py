def is_PerfectSquare(x):
    for i in range(1,x):
        if x/i == i : # if x == i*i ya i**2
            print("is perfect square and its rishe is " + str(i) )
            return True
    
    print("isn't perfect square")
    return False

is_PerfectSquare(25)