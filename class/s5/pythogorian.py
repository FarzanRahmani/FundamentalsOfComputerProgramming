for a in range(1,100): #nest
    for b in range(a,100):
        for c in range(b,100):
            if a*a + b*b == c*c :
                print(a,"*",a ," + " , b,"*",b , " = " , c,"*",c )