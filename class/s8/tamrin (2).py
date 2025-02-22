def reverse_list(nums):
    for i in range(int(len(nums)/2)):
        x = nums[len(nums)-1-i]
        nums[len(nums)-1-i] = nums[i]
        nums[i] = x
    return nums
print(reverse_list([1,2,3,4,5]))
print(reverse_list([1,2,3,4,5,6,7,8]))
print(reverse_list([1,2,3,4,5,6,7,8,9,10,11,12,13,14,15]))

def sort_list(nums):
    for i in range(len(nums)):
        for next in range(i+1,len(nums)):
            if nums[i] > nums[next]:
                x = nums[i]
                nums[i] = nums[next]
                nums[next] = x 
    return nums
print(sort_list([4,2,1,3]))
print(sort_list([4,2,1,3,9,8,7,11]))
print(sort_list([70,60,100,8,1,3,7,6,4,5,220,0,-9]))   