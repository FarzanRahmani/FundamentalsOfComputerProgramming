def make_head(w):
    center = int((w+1)/2)
    print(" "*(center-1) +"^")
    for i in range(1,center):
        print(" "*(center-1-i)+"/"*i +"|"+"\\"*(i))


make_head(9)