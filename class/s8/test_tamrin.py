import tamrin

def test_reverse_list():
    nums = [1,2,3,4,5]
    assert tamrin.reverse_list(nums) == [5,4,3,2,1]
    assert tamrin.reverse_list([7,5,3,9,5,1]) == [1,5,9,3,5,7]

def test_sort_list():
    nums = [5,9,1,7,3,4,6,8]
    assert tamrin.sort_list(nums) == [1,3,4,5,6,7,8,9]
    assert tamrin.sort_list([4,91,3,7,-9]) == [-9,3,4,7,91]