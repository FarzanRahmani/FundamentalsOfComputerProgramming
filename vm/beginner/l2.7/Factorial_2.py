def factorial(n):
    assert type(n) == int , "n must be integer(pre-condition)"
    assert n>=1 ,"n must be positive(pre-condition) "
    mul = 1   #mul=local variable
    for i in range(1,n+1):
        assert mul >= 1 , "loop invariant(condition)"
        mul = mul*i
    assert mul >= 1 #post-condition
    return mul

print(factorial(5))