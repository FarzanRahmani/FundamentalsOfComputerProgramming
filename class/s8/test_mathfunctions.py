import mathfunctions
def test_get_max():
    nums = [1,10,5,0,15,12]
    assert mathfunctions.get_max(nums) == 15
    nums = [-10,0,10,20,30,40,5,7]
    assert mathfunctions.get_max(nums) == 40
    assert mathfunctions.get_max([4,1,5,2]) == 5

def test_get_min():
    nums = [-10,0,10,20,30,40,5,7]
    assert mathfunctions.get_min(nums) == -10
    assert mathfunctions.get_min([4,1,5,2,0]) == 0

def test_get_sum():
    nums = [2,5,8,7,6,1]
    assert mathfunctions.get_sum(nums) == 29
    assert mathfunctions.get_sum([-1,1,-4,5]) ==1

def test_get_sum_odd():
    nums = [1,5,10,0,15,12]
    assert mathfunctions.get_sum_odd(nums) == 17
    assert mathfunctions.get_sum_odd([-100,50,10,0,15,12]) == 62

def test_get_sum_odd_num():
    nums = [1,5,10,0,15,12]
    assert mathfunctions.get_sum_odd_num(nums) == 21
    assert mathfunctions.get_sum_odd_num([-100,50,10,0,15,12]) == 15

#tamrin

def test_reverse_list():
    nums = [1,2,3,4,5]
    assert mathfunctions.reverse_list(nums) == [5,4,3,2,1]
    assert mathfunctions.reverse_list([7,5,3,9,5,1]) == [1,5,9,3,5,7]

def test_sort_list():
    nums = [5,9,1,7,3,4,6,8]
    assert mathfunctions.sort_list(nums) == [1,3,4,5,6,7,8,9]
    assert mathfunctions.sort_list([4,91,3,7,-9]) == [-9,3,4,7,91]