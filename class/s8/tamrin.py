def reverse_list(nums):
    for i in range(int(len(nums)/2)):
        x = nums[len(nums)-1-i]
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