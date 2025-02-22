def q1_get_max(a, b, c):
    max = a
    if b>a:
        max = b
    if c>max:
        max = c
    return max

def q2_is_right_angled(a, b, c):
    if (a*a + b*b == c*c) or (a*a + c*c == b*b) or (b*b + c*c == a*a) :
        return True
    return False

def q3_array_fsum(a, b, c):
    sum = 0
    for i in range(len(a)):
        sum += (a[i] * b[i]) + c[i]
    return sum

def q4_string_shuffle(str1):
    str2 =""
    for i in range(0,len(str1),2):
        str2 += str1[i+1]
        str2 += str1[i]
    return str2

def sort_list(nums):
    for i in range(len(nums)):
        for next in range(i+1,len(nums)):
            if nums[i] > nums[next]:
                x = nums[i]
                nums[i] = nums[next]
                nums[next] = x 
    return nums
def q6_sort(a, b, c, d):
    list1 = [a,b,c,d]
    list2 = sort_list(list1)
    return list2[3] , list2[2] , list2[1] , list2[0]

def q7_generic_sort(a, b, c, d, func):
    list1 = [a,b,c,d]
    list2 = sort_list(list1)
    if func(2,1) :
        return list2[0] , list2[1] , list2[2] , list2[3]
    if func(1,2) :
        return list2[3] , list2[2] , list2[1] , list2[0]

def q5_last_index_of(buff,string):
    result = -1
    len_str = len(string) # koochike
    len_buff = len(buff) # bozorga
    for i in range(len_buff-len_str+1):
        found = True
        for j in range(len_str):
            if buff[i+j] != string[j]:
                found = False
                break
        if found:
            result = i
    return result





