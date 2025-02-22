
# def test_bin2dec():
#     assert s1.bin2dec("1") == 1
#     assert s1.bin2dec("11") == 3
#     assert s1.bin2dec("111") == 7
#     assert s1.bin2dec("00000000") == 0
#     assert s1.bin2dec("1001") == 9
#     assert s1.bin2dec("10001001") == 137
#     assert s1.bin2dec("11111111") == 255
#     assert s1.bin2dec("111001") == 57
#chap be rast           <<<<<<
def bin2dec(num): #num = str
    sum = 0
    exponent = len(num) - 1
    for i in num:
        i = int(i)
        if i==1 :
            sum = sum + 2**exponent
        exponent = exponent - 1
    return sum
# print(bin2dec("111001"))
# print(bin2dec("10001001"))
x = "hello"
print(len(x))
print(len("abcdefghijklmnopqrstuvwxyz"))
print(len([1,2,3,4,5,6,"a","b","c"]))