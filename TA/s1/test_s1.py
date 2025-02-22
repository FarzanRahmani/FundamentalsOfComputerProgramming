import s1


def test_perfect():
    assert s1.perfect(6) == True
    assert s1.perfect(2) == False
    assert s1.perfect(28) == True
    assert s1.perfect(29) == False
    assert s1.perfect(496) == True
    assert s1.perfect(8128) == True
    assert s1.perfect(9000) == False


def test_bin2dec():
    assert s1.bin2dec("1") == 1
    assert s1.bin2dec("11") == 3
    assert s1.bin2dec("111") == 7
    assert s1.bin2dec("00000000") == 0
    assert s1.bin2dec("1001") == 9
    assert s1.bin2dec("10001001") == 137
    assert s1.bin2dec("11111111") == 255
    assert s1.bin2dec("111001") == 57


def test_find_duplicate():
    assert s1.find_duplicate([1, 1, 1]) == [1]
    assert s1.find_duplicate([1, 1, 1, 2, 2]) == [1, 2]
    assert s1.find_duplicate([3, 1, 1, 1, 2, 2]) == [1, 2]
    assert s1.find_duplicate([3, 3, 1, 1, 1, 2, 2]) == [3, 1, 2]
    assert s1.find_duplicate([3, 3, 4, 4, 5, 5, 6]) == [3, 4, 5]
    assert s1.find_duplicate([1, 3, 2, 5, 1, 4, 5, 2, 1, 3]) == [1, 3, 2, 5]
