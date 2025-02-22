def dirReduc2(x):
    y = []
    for i in range(len(x)-1):
        if x[i] == 'NORTH' and x[i+1] != 'SOUTH'  :
            y.append(x[i])
        if x[i] == 'SOUTH' and x[i+1] != 'NORTH'  :
            y.append(x[i])
        if x[i] == 'EAST' and x[i+1] != 'WEST'    :
            y.append(x[i])
        if x[i] == 'WEST' and x[i+1] != 'EAST'    :
            y.append(x[i])
    y.append(x[len(x)-1])
    return y
        
def dirReduc(x):
    i = 0
    while i < len(x) :
        if x[i] == 'NORTH' and x[i+1] == 'SOUTH' :
            x.remove(x[i])
            x.remove(x[i+1])
        if x[i] == 'SOUTH' and x[i+1] == 'NORTH'  :
            x.remove(x[i])
            x.remove(x[i+1])
        if x[i] == 'EAST' and x[i+1] == 'WEST'    :
            x.remove(x[i])
            x.remove(x[i+1])
        if x[i] == 'WEST' and x[i+1] == 'EAST'    :
            x.remove(x[i])
            x.remove(x[i+1])
        i = i+1
    return x
    

