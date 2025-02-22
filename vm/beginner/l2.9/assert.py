def compute_sum(n):
    """Computes the sum of digits from 1 to n"""
    assert type(n) == int    #declares that n should be an int.
    assert 0 <= n            #precondition = pish shart

    sum = 0
    for i in range(1, n+1):
        assert 0 <= sum,  "Loop Invariant"  # Example of a message (the message will be print in front of assertation error)
        sum = sum + i

    assert 0 <= sum          #post-condition = pas shart
    return sum

print(compute_sum(20))

print(type(2))
print(type(2.12))
print(type("hi"))
print(type([1,2,3,4,5]))