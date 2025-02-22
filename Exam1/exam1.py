def q1_add(x,y):
    return x+y

def q2_print_add(x,y):
    z = x+y
    print(z)

def q3_print_square(c,n):
    print(c*n)
    for i in range(n-2):
        print(c+" "*(n-2)+c)
    print(c*n)

def q4_sum_odd_squares(a,b):
    sum = 0
    for i in range(a,b+1):
        if i % 2 == 1 :
            sum += i**2
    return sum

def q5_sum_value_squares(nums):
    sum = 0
    for n in nums:
        sum += n**2
    return sum

def q6_sum_num_indices(nums, indices):
    sum = 0
    for i in indices:
        sum += nums[i]
    return sum

def q7_get_new_fib_array(x1,x2,n):
    r =[x1,x2]
    for i in range(2,n):
        f1 = r[i-2]
        f2 = r[i-1]
        r.append( f1*f2 -2 )
    return r

def q7_get_new_fib_array2(a,b,n):
    nums = []
    nums.append(a)
    nums.append(b)

    for i in range( int( (n-2)/2 ) ):
        a = a* b -2
        b = a* b - 2
        nums.append(a)
        nums.append(b)
    return nums 

def q8_get_phone_numbers(filex, queries):

    x=[]
    for q in queries:
        t = q.lower()
        x.append(t)

    dic = {}
    result = []
    opened = open(filex)
    readed = opened.read()
    lines = readed.splitlines()

    for l in lines:
        tokens = l.split(",")
        p = tokens[0].lower()
        dic[p] = tokens[1]

    for q in x:
        if q not in dic:
            result.append("na")
        if q in dic:
            result.append(dic[q])

    return result

def q8_get_phone_numbers2(file,names):
    f = open(file)
    lines = f.read().splitlines()
    dic = {}
    for line in lines:
        tokens = line.split(",")
        name = tokens[0].lower()
        number = tokens[1]
        dic[name] = number

    numbers = []
    for name in names:
        name = name.lower() #har caght lower mikoni bayad berizi too ye chizi
        if name in dic:
            numbers.append(dic[name])
        else:
            numbers.append("na")

    return numbers





