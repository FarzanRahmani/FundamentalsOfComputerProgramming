#[1,2,1,3,4,1,2] >> print(1,2)
def print_dublicate(a):
    for i in range(len(a)):
        for next in range(i+1,len(a)):
            if a[i] == a[next]:
                print(a[i])
print_dublicate([1,2,1,3,4,1,2])

def find_dublicate0(a): #type 1
    dub = []
    for i in range(len(a)):
        for next in range(i+1,len(a)):
            if a[i] == a[next]:  
                if a[i] not in dub:    
                    dub.append(a[i]) #appent = elhagh kon , ezafe kon
    return dub
print(find_dublicate0([1,2,3,4,5,6,1,3,5,1,3,1]))

def is_in_list(x,my_list):
    for n in my_list:
        if n == x :
            return True
    return False

def find_dublicate1(a): #type 2
    dub = []
    for i in range(len(a)):
        for next in range(i+1,len(a)):
            if a[i] == a[next]:  
                if is_in_list(a[i],dub):
                    continue
                else:
                    dub.append(a[i]) 
    return dub

def perfect(num): #type1    #perfect_number = adadi ke majmooe shomarande hash barabar khodesh bashe be joz shomarande ee ke khodeshe
    sum = 0 # sum = majmooe shomarande ha
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