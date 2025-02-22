def get_max(nums):
    max = nums[0]
    for n in nums:
        if n > max :
            max = n
    return max

def get_min(nums):
    min = nums[0]
    for n in nums:
        if n < min :
            min = n
    return min

def get_sum(nums):
    sum = 0
    for n in nums:
        sum = sum + n
    return sum

def get_sum_odd(nums): #index = odd
    sum = 0
    for i in range(len(nums)):
        if i % 2 == 1 :
            sum = sum + nums[i]
    return sum

def get_sum_odd_num(nums): #n = odd
    sum = 0
    for n in nums:
        if n % 2 == 1:
            sum = sum + n
    return sum

#tamrin
def reverse_list(nums):
    for i in range(int(len(nums)/2)):
        x = nums[len(nums)-1-i] #chon index az 0 ta len(nums)-1  ast 
        nums[len(nums)-1-i] = nums[i]
        nums[i] = x
    return nums

def sort_list(nums):
    for i in range(len(nums)):
        for next in range(i+1,len(nums)):
            if nums[i] > nums[next]:
                x = nums[i]
                nums[i] = nums[next]
                nums[next] = x 
    return nums
