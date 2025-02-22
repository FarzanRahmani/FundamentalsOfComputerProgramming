def perfect(num): #type1
    sum = 0
    for i in range(1,num):
        if num % i == 0:
            sum = sum + i
    if sum == num:
        return True
    else:
        return False 

def perfect1(num):#type 2
    result = 0
    for i in range(1,num):
        if num % i == 0 :
            result = result + i
    return result == num

def find_duplicate(a): #num must be list([a,b,c]) 
    dub = []
    for i in range(len(a)):
        for next in range(i+1,len(a)):
            if a[i] == a[next]:
                if a[i] not in dub:
                    dub.append(a[i])
    return dub

def bin2dec(num): #num = str az chap be rast boro
    sum = 0
    exponent = len(num) - 1
    for i in num:
        i = int(i)
        if i==1 :
            sum = sum + 2**exponent
        exponent = exponent - 1
    return sum