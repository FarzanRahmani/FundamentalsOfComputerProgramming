def swap(my_list,x,y):#temp = temporary
    temp = my_list[x]
    my_list[x] = my_list[y]
    my_list[y] = temp
    return my_list

def reverse(nums):
    for i in range(int(len(nums)/2)):
        swap(nums,i,len(nums)-1-i)
    return nums
#print(reverse([1,2,3,4,5]))

def reverse2(numbers):
    t = len(numbers)
    mylist = []
    for i in range(t):
        mylist.append( numbers[t-1-i] )
    return mylist

def reverse3(nums):
    j = len(nums)-1
    i = 0
    while j>i :
        x = nums[j]
        nums[j] = nums[i]
        nums[i] = x
        j = j-1
        i = i+1
    return nums

def find_max(nums,from_pos,to_pos):
    max_pos = from_pos
    for i in range(from_pos+1,to_pos+1):
        if nums[i] > nums[max_pos]:
            max_pos = i
    return max_pos

def sort(nums):
    l = len(nums)
    for i in range(l):
        max_pos = find_max(nums,i,l-1)
        swap(nums,i,max_pos)
    return nums

def is_prime(x):
    for i in range(2,int(x**0.5)+1):
        if x % i == 0:
            return False
    return True

def find_prime_factors(num):
    result = []
    for i in range(2,num):
        if num%i == 0:
            if is_prime(i):
                result.append(i)
    sort(result)
    return result
#print(find_prime_factors(1260))